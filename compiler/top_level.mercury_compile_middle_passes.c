/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version 13.05.2-beta-2013-10-31, configured for x86_64-apple-darwin12.4.0.
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
#include "parse_tree.prog_io.mih"
#include "parse_tree.prog_io_util.mih"
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




#line 210 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 794 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__794__1_2_p_0(
#line 794 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 794 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 1454 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1435 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1427 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1414 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1394 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1385 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1355 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1333 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1313 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1313 "mercury_compile_middle_passes.m"
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
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3);

#line 1284 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1284 "mercury_compile_middle_passes.m"
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

#line 1191 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1172 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1152 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1142 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1131 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1113 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1069 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1050 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1040 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1029 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 986 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 986 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 986 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 986 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 986 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 977 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6);

#line 960 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);

#line 933 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 933 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 933 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 933 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 933 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 913 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8);

#line 901 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 901 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 901 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 901 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 901 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);

#line 879 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 879 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 879 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 879 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 879 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 857 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 857 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 857 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 857 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 857 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 822 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 822 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 822 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 822 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 822 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);

#line 803 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 803 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 803 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 803 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 803 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 794 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 794 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg);

#line 780 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 780 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 780 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 780 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 780 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 742 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_9,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_10,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_11,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_12,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_22,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_23);

#line 703 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 703 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 703 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 703 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 703 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 683 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 683 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 683 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 683 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 683 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 660 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 660 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 660 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 660 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 660 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 635 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 635 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 635 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 635 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 635 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 617 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 617 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 617 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 617 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 617 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 599 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 599 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 599 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 599 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 599 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 587 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 587 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 587 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 587 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 587 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 575 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 575 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 575 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 575 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 575 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 563 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 563 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 563 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 563 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 563 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 548 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 548 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 548 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 548 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 548 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 499 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 499 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 499 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);


static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[4][2];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[1][5];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][11];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[5][3];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[2][9];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][7];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[4][1];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][8];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_9[1][6];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_10[1][10];




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
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_9[0])),
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_9[1][6] = {
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_10[1][10] = {
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



#line 1027 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 794 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__794__1_2_p_0(
#line 794 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 794 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36)
#line 794 "mercury_compile_middle_passes.m"
{
#line 794 "mercury_compile_middle_passes.m"
  {
#line 794 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HeadVar__1_35 == top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 794 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 794 "mercury_compile_middle_passes.m"
  }
#line 794 "mercury_compile_middle_passes.m"
}

#line 1454 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1454 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1454 "mercury_compile_middle_passes.m"
{
#line 1457 "mercury_compile_middle_passes.m"
  {
#line 1457 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1457 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1457 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Dead_12;

#line 1458 "mercury_compile_middle_passes.m"
    {
#line 1458 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1459 "mercury_compile_middle_passes.m"
    {
#line 1459 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 387, &top_level__mercury_compile_middle_passes__Dead_12);
    }
#line 1468 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Dead_12 == (MR_Integer) 0))
#line 1469 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1468 "mercury_compile_middle_passes.m"
    else
#line 1461 "mercury_compile_middle_passes.m"
      {
#line 1465 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_13;

#line 1462 "mercury_compile_middle_passes.m"
        {
#line 1462 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Eliminating dead procedures...\n");
        }
#line 1463 "mercury_compile_middle_passes.m"
        {
#line 1463 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1465 "mercury_compile_middle_passes.m"
        {
#line 1465 "mercury_compile_middle_passes.m"
          transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 0, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, &top_level__mercury_compile_middle_passes___ElimSpecs_13);
        }
#line 1466 "mercury_compile_middle_passes.m"
        {
#line 1466 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1467 "mercury_compile_middle_passes.m"
        {
#line 1467 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1467 "mercury_compile_middle_passes.m"
          return;
        }
#line 1461 "mercury_compile_middle_passes.m"
      }
#line 1457 "mercury_compile_middle_passes.m"
  }
#line 1454 "mercury_compile_middle_passes.m"
}

#line 1435 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1435 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1435 "mercury_compile_middle_passes.m"
{
#line 1438 "mercury_compile_middle_passes.m"
  {
#line 1438 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1438 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1438 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Analysis_12;

#line 1439 "mercury_compile_middle_passes.m"
    {
#line 1439 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1440 "mercury_compile_middle_passes.m"
    {
#line 1440 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 405, &top_level__mercury_compile_middle_passes__Analysis_12);
    }
#line 1448 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Analysis_12 == (MR_Integer) 0))
#line 1449 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1448 "mercury_compile_middle_passes.m"
    else
#line 1442 "mercury_compile_middle_passes.m"
      {
#line 1443 "mercury_compile_middle_passes.m"
        {
#line 1443 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing regions ...\n");
        }
#line 1444 "mercury_compile_middle_passes.m"
        {
#line 1444 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1445 "mercury_compile_middle_passes.m"
        {
#line 1445 "mercury_compile_middle_passes.m"
          transform_hlds__rbmm__do_region_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1446 "mercury_compile_middle_passes.m"
        {
#line 1446 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1447 "mercury_compile_middle_passes.m"
        {
#line 1447 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1447 "mercury_compile_middle_passes.m"
          return;
        }
#line 1442 "mercury_compile_middle_passes.m"
      }
#line 1438 "mercury_compile_middle_passes.m"
  }
#line 1435 "mercury_compile_middle_passes.m"
}

#line 1427 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1427 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1427 "mercury_compile_middle_passes.m"
{
#line 1427 "mercury_compile_middle_passes.m"
  {
#line 1427 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1427 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5;
#line 1427 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7;

#line 1427 "mercury_compile_middle_passes.m"
    {
#line 1427 "mercury_compile_middle_passes.m"
      transform_hlds__complexity__complexity_process_proc_msg_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7);
    }
#line 1427 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5));
#line 1427 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7));
#line 1427 "mercury_compile_middle_passes.m"
  }
#line 1427 "mercury_compile_middle_passes.m"
}

#line 1414 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1414 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1414 "mercury_compile_middle_passes.m"
{
#line 1417 "mercury_compile_middle_passes.m"
  {
#line 1417 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1417 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_11;

#line 1418 "mercury_compile_middle_passes.m"
    {
#line 1418 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_11);
    }
#line 1421 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeNumProcMap_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1420 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1421 "mercury_compile_middle_passes.m"
    else
#line 1422 "mercury_compile_middle_passes.m"
      {
#line 1422 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumProcs_12;
#line 1422 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__ProcMap_13;
#line 1422 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_11, (MR_Integer) 0)));
#line 1422 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_22_22;
#line 1422 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_24_24;

#line 1422 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__NumProcs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 0)));
#line 1422 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__ProcMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 1)));
#line 1423 "mercury_compile_middle_passes.m"
        {
#line 1423 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying complexity experiment transformation...\n");
        }
#line 1425 "mercury_compile_middle_passes.m"
        {
#line 1425 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1427 "mercury_compile_middle_passes.m"
        {
#line 1427 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1427 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_10[0]));
#line 1427 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1));
#line 1427 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1427 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__NumProcs_12));
#line 1427 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 4) = ((MR_Box) (top_level__mercury_compile_middle_passes__ProcMap_13));
#line 1427 "mercury_compile_middle_passes.m"
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
#line 1426 "mercury_compile_middle_passes.m"
        {
#line 1426 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);
        }
#line 1429 "mercury_compile_middle_passes.m"
        {
#line 1429 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1430 "mercury_compile_middle_passes.m"
        {
#line 1430 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1430 "mercury_compile_middle_passes.m"
          return;
        }
#line 1422 "mercury_compile_middle_passes.m"
      }
#line 1417 "mercury_compile_middle_passes.m"
  }
#line 1414 "mercury_compile_middle_passes.m"
}

#line 1394 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1394 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1394 "mercury_compile_middle_passes.m"
{
#line 1397 "mercury_compile_middle_passes.m"
  {
#line 1397 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1397 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1397 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ProfileDeep_12;

#line 1398 "mercury_compile_middle_passes.m"
    {
#line 1398 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1399 "mercury_compile_middle_passes.m"
    {
#line 1399 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 191, &top_level__mercury_compile_middle_passes__ProfileDeep_12);
    }
#line 1408 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ProfileDeep_12 == (MR_Integer) 0))
#line 1409 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1408 "mercury_compile_middle_passes.m"
    else
#line 1401 "mercury_compile_middle_passes.m"
      {
#line 1402 "mercury_compile_middle_passes.m"
        {
#line 1402 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying deep profiling transformation...\n");
        }
#line 1404 "mercury_compile_middle_passes.m"
        {
#line 1404 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1405 "mercury_compile_middle_passes.m"
        {
#line 1405 "mercury_compile_middle_passes.m"
          ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1406 "mercury_compile_middle_passes.m"
        {
#line 1406 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1407 "mercury_compile_middle_passes.m"
        {
#line 1407 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1407 "mercury_compile_middle_passes.m"
          return;
        }
#line 1401 "mercury_compile_middle_passes.m"
      }
#line 1397 "mercury_compile_middle_passes.m"
  }
#line 1394 "mercury_compile_middle_passes.m"
}

#line 1385 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1385 "mercury_compile_middle_passes.m"
{
#line 1385 "mercury_compile_middle_passes.m"
  {
#line 1385 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1385 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 1385 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 1385 "mercury_compile_middle_passes.m"
    {
#line 1385 "mercury_compile_middle_passes.m"
      transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 1385 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 1385 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 1385 "mercury_compile_middle_passes.m"
  }
#line 1385 "mercury_compile_middle_passes.m"
}

#line 1355 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1355 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1355 "mercury_compile_middle_passes.m"
{
#line 1358 "mercury_compile_middle_passes.m"
  {
#line 1358 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1358 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1358 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsWords_12;
#line 1358 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsCells_13;
#line 1358 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeTransform_14;

#line 1359 "mercury_compile_middle_passes.m"
    {
#line 1359 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1360 "mercury_compile_middle_passes.m"
    {
#line 1360 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 208, &top_level__mercury_compile_middle_passes__AsWords_12);
    }
#line 1361 "mercury_compile_middle_passes.m"
    {
#line 1361 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 209, &top_level__mercury_compile_middle_passes__AsCells_13);
    }
#line 1366 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__AsWords_12 == (MR_Integer) 0))
#line 1366 "mercury_compile_middle_passes.m"
      if ((top_level__mercury_compile_middle_passes__AsCells_13 == (MR_Integer) 0))
#line 1377 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1366 "mercury_compile_middle_passes.m"
      else
#line 1371 "mercury_compile_middle_passes.m"
        {
#line 1373 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[2]);
#line 1371 "mercury_compile_middle_passes.m"
        }
#line 1366 "mercury_compile_middle_passes.m"
    else
#line 1366 "mercury_compile_middle_passes.m"
      if ((top_level__mercury_compile_middle_passes__AsCells_13 == (MR_Integer) 0))
#line 1367 "mercury_compile_middle_passes.m"
        {
#line 1369 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[3]);
#line 1367 "mercury_compile_middle_passes.m"
        }
#line 1366 "mercury_compile_middle_passes.m"
      else
#line 1363 "mercury_compile_middle_passes.m"
        {
#line 1365 "mercury_compile_middle_passes.m"
          {
#line 1365 "mercury_compile_middle_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", (MR_String) "as_words and as_cells");
#line 1365 "mercury_compile_middle_passes.m"
            return;
          }
#line 1363 "mercury_compile_middle_passes.m"
        }
#line 1388 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeTransform_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1389 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1388 "mercury_compile_middle_passes.m"
    else
#line 1380 "mercury_compile_middle_passes.m"
      {
#line 1380 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Transform_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeTransform_14, (MR_Integer) 0)));
#line 1380 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_30_30;
#line 1380 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_32_32;

#line 1381 "mercury_compile_middle_passes.m"
        {
#line 1381 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying term size profiling transformation...\n");
        }
#line 1383 "mercury_compile_middle_passes.m"
        {
#line 1383 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1385 "mercury_compile_middle_passes.m"
        {
#line 1385 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1385 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]));
#line 1385 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1));
#line 1385 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1385 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__Transform_15));
#line 1385 "mercury_compile_middle_passes.m"
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
#line 1384 "mercury_compile_middle_passes.m"
        {
#line 1384 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 1386 "mercury_compile_middle_passes.m"
        {
#line 1386 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1387 "mercury_compile_middle_passes.m"
        {
#line 1387 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1387 "mercury_compile_middle_passes.m"
          return;
        }
#line 1380 "mercury_compile_middle_passes.m"
      }
#line 1358 "mercury_compile_middle_passes.m"
  }
#line 1355 "mercury_compile_middle_passes.m"
}

#line 1333 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1333 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1333 "mercury_compile_middle_passes.m"
{
#line 1336 "mercury_compile_middle_passes.m"
  {
#line 1336 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1336 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1336 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UseFloatRegs_12;

#line 1337 "mercury_compile_middle_passes.m"
    {
#line 1337 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1338 "mercury_compile_middle_passes.m"
    {
#line 1338 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 249, &top_level__mercury_compile_middle_passes__UseFloatRegs_12);
    }
#line 1349 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__UseFloatRegs_12 == (MR_Integer) 0))
#line 1350 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1349 "mercury_compile_middle_passes.m"
    else
#line 1340 "mercury_compile_middle_passes.m"
      {
#line 1340 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_13;
#line 1340 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_15;
#line 1340 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24;
#line 1345 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_14;

#line 1341 "mercury_compile_middle_passes.m"
        {
#line 1341 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inserting float register wrappers...");
        }
#line 1343 "mercury_compile_middle_passes.m"
        {
#line 1343 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1344 "mercury_compile_middle_passes.m"
        {
#line 1344 "mercury_compile_middle_passes.m"
          transform_hlds__float_regs__insert_reg_wrappers_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_middle_passes__Specs_13);
        }
#line 1345 "mercury_compile_middle_passes.m"
        {
#line 1345 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_13, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_14, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_15);
        }
#line 1346 "mercury_compile_middle_passes.m"
        {
#line 1346 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 1347 "mercury_compile_middle_passes.m"
        {
#line 1347 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
        }
#line 1348 "mercury_compile_middle_passes.m"
        {
#line 1348 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1348 "mercury_compile_middle_passes.m"
          return;
        }
#line 1340 "mercury_compile_middle_passes.m"
      }
#line 1336 "mercury_compile_middle_passes.m"
  }
#line 1333 "mercury_compile_middle_passes.m"
}

#line 1313 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1313 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1313 "mercury_compile_middle_passes.m"
{
#line 1316 "mercury_compile_middle_passes.m"
  {
#line 1316 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1316 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1316 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopControl_12;

#line 1317 "mercury_compile_middle_passes.m"
    {
#line 1317 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1318 "mercury_compile_middle_passes.m"
    {
#line 1318 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 668, &top_level__mercury_compile_middle_passes__LoopControl_12);
    }
#line 1327 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__LoopControl_12 == (MR_Integer) 0))
#line 1328 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1327 "mercury_compile_middle_passes.m"
    else
#line 1320 "mercury_compile_middle_passes.m"
      {
#line 1321 "mercury_compile_middle_passes.m"
        {
#line 1321 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying parallel loop control transformation...\n");
        }
#line 1323 "mercury_compile_middle_passes.m"
        {
#line 1323 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1324 "mercury_compile_middle_passes.m"
        {
#line 1324 "mercury_compile_middle_passes.m"
          transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1325 "mercury_compile_middle_passes.m"
        {
#line 1325 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1326 "mercury_compile_middle_passes.m"
        {
#line 1326 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1326 "mercury_compile_middle_passes.m"
          return;
        }
#line 1320 "mercury_compile_middle_passes.m"
      }
#line 1316 "mercury_compile_middle_passes.m"
  }
#line 1313 "mercury_compile_middle_passes.m"
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
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3)
#line 1295 "mercury_compile_middle_passes.m"
{
#line 1295 "mercury_compile_middle_passes.m"
  {
#line 1295 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1295 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__3_3;

#line 1295 "mercury_compile_middle_passes.m"
    {
#line 1295 "mercury_compile_middle_passes.m"
      transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_3_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv0_HeadVar__3_3);
    }
#line 1295 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__3_3));
#line 1295 "mercury_compile_middle_passes.m"
  }
#line 1295 "mercury_compile_middle_passes.m"
}

#line 1284 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1284 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 1284 "mercury_compile_middle_passes.m"
{
#line 1287 "mercury_compile_middle_passes.m"
  {
#line 1287 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ContainsParConj_11;

#line 1288 "mercury_compile_middle_passes.m"
    {
#line 1288 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_contains_par_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__ContainsParConj_11);
    }
#line 1307 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ContainsParConj_11 == (MR_Integer) 0))
#line 1308 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 1307 "mercury_compile_middle_passes.m"
    else
#line 1290 "mercury_compile_middle_passes.m"
      {
#line 1290 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 1290 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__SupportsParConj_13;

#line 1291 "mercury_compile_middle_passes.m"
        {
#line 1291 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_12);
        }
#line 1292 "mercury_compile_middle_passes.m"
        {
#line 1292 "mercury_compile_middle_passes.m"
          libs__globals__current_grade_supports_par_conj_2_p_0(top_level__mercury_compile_middle_passes__Globals_12, &top_level__mercury_compile_middle_passes__SupportsParConj_13);
        }
#line 1297 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__SupportsParConj_13 == (MR_Integer) 0))
#line 1294 "mercury_compile_middle_passes.m"
          {
#line 1295 "mercury_compile_middle_passes.m"
            {
#line 1295 "mercury_compile_middle_passes.m"
              hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_7[1], top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 1295 "mercury_compile_middle_passes.m"
              return;
            }
#line 1294 "mercury_compile_middle_passes.m"
          }
#line 1297 "mercury_compile_middle_passes.m"
        else
#line 1298 "mercury_compile_middle_passes.m"
          {
#line 1298 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 1303 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_14;

#line 1299 "mercury_compile_middle_passes.m"
            {
#line 1299 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Dependent parallel conjunction transformation...\n");
            }
#line 1301 "mercury_compile_middle_passes.m"
            {
#line 1301 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
            }
#line 1302 "mercury_compile_middle_passes.m"
            {
#line 1302 "mercury_compile_middle_passes.m"
              transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
            }
#line 1303 "mercury_compile_middle_passes.m"
            {
#line 1303 "mercury_compile_middle_passes.m"
              transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16, &top_level__mercury_compile_middle_passes___ElimSpecs_14);
            }
#line 1304 "mercury_compile_middle_passes.m"
            {
#line 1304 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
            }
#line 1305 "mercury_compile_middle_passes.m"
            {
#line 1305 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1305 "mercury_compile_middle_passes.m"
              return;
            }
#line 1298 "mercury_compile_middle_passes.m"
          }
#line 1290 "mercury_compile_middle_passes.m"
      }
#line 1287 "mercury_compile_middle_passes.m"
  }
#line 1284 "mercury_compile_middle_passes.m"
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
    MR_Word top_level__mercury_compile_middle_passes__ContainsParConj_15;
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
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 212, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1243 "mercury_compile_middle_passes.m"
    {
#line 1243 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 250, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1244 "mercury_compile_middle_passes.m"
    {
#line 1244 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 665, &top_level__mercury_compile_middle_passes__Distance_14);
    }
#line 1245 "mercury_compile_middle_passes.m"
    {
#line 1245 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_contains_par_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__ContainsParConj_15);
    }
#line 1248 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1248 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1248 "mercury_compile_middle_passes.m"
      {
#line 1249 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ContainsParConj_15 == (MR_Integer) 1);
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
#line 1278 "mercury_compile_middle_passes.m"
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
            if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 5))
#line 1273 "mercury_compile_middle_passes.m"
              *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1268 "mercury_compile_middle_passes.m"
            else
#line 1268 "mercury_compile_middle_passes.m"
              if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 1))
#line 1269 "mercury_compile_middle_passes.m"
                *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1268 "mercury_compile_middle_passes.m"
              else
#line 1268 "mercury_compile_middle_passes.m"
                if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 3))
#line 1271 "mercury_compile_middle_passes.m"
                  *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1268 "mercury_compile_middle_passes.m"
                else
#line 1272 "mercury_compile_middle_passes.m"
                  *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1259 "mercury_compile_middle_passes.m"
      }
#line 1278 "mercury_compile_middle_passes.m"
    else
#line 1279 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1240 "mercury_compile_middle_passes.m"
  }
#line 1237 "mercury_compile_middle_passes.m"
}

#line 1191 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1191 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1191 "mercury_compile_middle_passes.m"
{
#line 1194 "mercury_compile_middle_passes.m"
  {
#line 1194 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1194 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1194 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1194 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1194 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Control_14;
#line 1194 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ContainsParConj_15;

#line 1195 "mercury_compile_middle_passes.m"
    {
#line 1195 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1196 "mercury_compile_middle_passes.m"
    {
#line 1196 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 212, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1197 "mercury_compile_middle_passes.m"
    {
#line 1197 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 250, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1198 "mercury_compile_middle_passes.m"
    {
#line 1198 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 664, &top_level__mercury_compile_middle_passes__Control_14);
    }
#line 1199 "mercury_compile_middle_passes.m"
    {
#line 1199 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_contains_par_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__ContainsParConj_15);
    }
#line 1202 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1202 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1202 "mercury_compile_middle_passes.m"
      {
#line 1203 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ContainsParConj_15 == (MR_Integer) 1);
#line 1202 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1202 "mercury_compile_middle_passes.m"
          {
#line 1207 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1202 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1210 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Control_14 == (MR_Integer) 1);
#line 1202 "mercury_compile_middle_passes.m"
          }
#line 1202 "mercury_compile_middle_passes.m"
      }
#line 1231 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1212 "mercury_compile_middle_passes.m"
      {
#line 1212 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1212 "mercury_compile_middle_passes.m"
        {
#line 1212 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1221 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 0))
#line 1214 "mercury_compile_middle_passes.m"
          {
#line 1215 "mercury_compile_middle_passes.m"
            {
#line 1215 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Granularity control transformation...\n");
            }
#line 1217 "mercury_compile_middle_passes.m"
            {
#line 1217 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
            }
#line 1218 "mercury_compile_middle_passes.m"
            {
#line 1218 "mercury_compile_middle_passes.m"
              transform_hlds__granularity__control_granularity_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
            }
#line 1219 "mercury_compile_middle_passes.m"
            {
#line 1219 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
            }
#line 1220 "mercury_compile_middle_passes.m"
            {
#line 1220 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1220 "mercury_compile_middle_passes.m"
              return;
            }
#line 1214 "mercury_compile_middle_passes.m"
          }
#line 1221 "mercury_compile_middle_passes.m"
        else
#line 1221 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 2))
#line 1223 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1221 "mercury_compile_middle_passes.m"
          else
#line 1221 "mercury_compile_middle_passes.m"
            if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 5))
#line 1226 "mercury_compile_middle_passes.m"
              *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1221 "mercury_compile_middle_passes.m"
            else
#line 1221 "mercury_compile_middle_passes.m"
              if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 1))
#line 1222 "mercury_compile_middle_passes.m"
                *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1221 "mercury_compile_middle_passes.m"
              else
#line 1221 "mercury_compile_middle_passes.m"
                if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 3))
#line 1224 "mercury_compile_middle_passes.m"
                  *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1221 "mercury_compile_middle_passes.m"
                else
#line 1225 "mercury_compile_middle_passes.m"
                  *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1212 "mercury_compile_middle_passes.m"
      }
#line 1231 "mercury_compile_middle_passes.m"
    else
#line 1232 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1194 "mercury_compile_middle_passes.m"
  }
#line 1191 "mercury_compile_middle_passes.m"
}

#line 1172 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1172 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1172 "mercury_compile_middle_passes.m"
{
#line 1175 "mercury_compile_middle_passes.m"
  {
#line 1175 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1175 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1175 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_12;

#line 1176 "mercury_compile_middle_passes.m"
    {
#line 1176 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1177 "mercury_compile_middle_passes.m"
    {
#line 1177 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 396, &top_level__mercury_compile_middle_passes__TablingAnalysis_12);
    }
#line 1185 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TablingAnalysis_12 == (MR_Integer) 0))
#line 1186 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1185 "mercury_compile_middle_passes.m"
    else
#line 1179 "mercury_compile_middle_passes.m"
      {
#line 1180 "mercury_compile_middle_passes.m"
        {
#line 1180 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing minimal model tabling...\n");
        }
#line 1182 "mercury_compile_middle_passes.m"
        {
#line 1182 "mercury_compile_middle_passes.m"
          transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1183 "mercury_compile_middle_passes.m"
        {
#line 1183 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1184 "mercury_compile_middle_passes.m"
        {
#line 1184 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1184 "mercury_compile_middle_passes.m"
          return;
        }
#line 1179 "mercury_compile_middle_passes.m"
      }
#line 1175 "mercury_compile_middle_passes.m"
  }
#line 1172 "mercury_compile_middle_passes.m"
}

#line 1152 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1152 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1152 "mercury_compile_middle_passes.m"
{
#line 1155 "mercury_compile_middle_passes.m"
  {
#line 1155 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1155 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1155 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LCO_12;

#line 1156 "mercury_compile_middle_passes.m"
    {
#line 1156 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1157 "mercury_compile_middle_passes.m"
    {
#line 1157 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 364, &top_level__mercury_compile_middle_passes__LCO_12);
    }
#line 1166 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__LCO_12 == (MR_Integer) 0))
#line 1167 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1166 "mercury_compile_middle_passes.m"
    else
#line 1159 "mercury_compile_middle_passes.m"
      {
#line 1160 "mercury_compile_middle_passes.m"
        {
#line 1160 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Looking for LCO modulo constructor application ...\n");
        }
#line 1162 "mercury_compile_middle_passes.m"
        {
#line 1162 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1163 "mercury_compile_middle_passes.m"
        {
#line 1163 "mercury_compile_middle_passes.m"
          transform_hlds__lco__lco_modulo_constructors_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1164 "mercury_compile_middle_passes.m"
        {
#line 1164 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1165 "mercury_compile_middle_passes.m"
        {
#line 1165 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1165 "mercury_compile_middle_passes.m"
          return;
        }
#line 1159 "mercury_compile_middle_passes.m"
      }
#line 1155 "mercury_compile_middle_passes.m"
  }
#line 1152 "mercury_compile_middle_passes.m"
}

#line 1142 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1142 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1142 "mercury_compile_middle_passes.m"
{
#line 1142 "mercury_compile_middle_passes.m"
  {
#line 1142 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1142 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3;
#line 1142 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5;

#line 1142 "mercury_compile_middle_passes.m"
    {
#line 1142 "mercury_compile_middle_passes.m"
      transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5);
    }
#line 1142 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3));
#line 1142 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5));
#line 1142 "mercury_compile_middle_passes.m"
  }
#line 1142 "mercury_compile_middle_passes.m"
}

#line 1131 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1131 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1131 "mercury_compile_middle_passes.m"
{
#line 1134 "mercury_compile_middle_passes.m"
  {
#line 1134 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1134 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1134 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UnneededCode_12;

#line 1135 "mercury_compile_middle_passes.m"
    {
#line 1135 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1136 "mercury_compile_middle_passes.m"
    {
#line 1136 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 355, &top_level__mercury_compile_middle_passes__UnneededCode_12);
    }
#line 1146 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__UnneededCode_12 == (MR_Integer) 0))
#line 1147 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1146 "mercury_compile_middle_passes.m"
    else
#line 1138 "mercury_compile_middle_passes.m"
      {
#line 1139 "mercury_compile_middle_passes.m"
        {
#line 1139 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Removing unneeded code from procedure bodies...\n");
        }
#line 1141 "mercury_compile_middle_passes.m"
        {
#line 1141 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1142 "mercury_compile_middle_passes.m"
        {
#line 1142 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[3]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1144 "mercury_compile_middle_passes.m"
        {
#line 1144 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1145 "mercury_compile_middle_passes.m"
        {
#line 1145 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1145 "mercury_compile_middle_passes.m"
          return;
        }
#line 1138 "mercury_compile_middle_passes.m"
      }
#line 1134 "mercury_compile_middle_passes.m"
  }
#line 1131 "mercury_compile_middle_passes.m"
}

#line 1113 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1113 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1113 "mercury_compile_middle_passes.m"
{
#line 1116 "mercury_compile_middle_passes.m"
  {
#line 1116 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1116 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1116 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalyseTrail_12;

#line 1117 "mercury_compile_middle_passes.m"
    {
#line 1117 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1118 "mercury_compile_middle_passes.m"
    {
#line 1118 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 393, &top_level__mercury_compile_middle_passes__AnalyseTrail_12);
    }
#line 1125 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__AnalyseTrail_12 == (MR_Integer) 0))
#line 1126 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1125 "mercury_compile_middle_passes.m"
    else
#line 1120 "mercury_compile_middle_passes.m"
      {
#line 1121 "mercury_compile_middle_passes.m"
        {
#line 1121 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing trail usage...\n");
        }
#line 1122 "mercury_compile_middle_passes.m"
        {
#line 1122 "mercury_compile_middle_passes.m"
          transform_hlds__trailing_analysis__analyse_trail_usage_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1123 "mercury_compile_middle_passes.m"
        {
#line 1123 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Trail usage analysis done.\n");
        }
#line 1124 "mercury_compile_middle_passes.m"
        {
#line 1124 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1124 "mercury_compile_middle_passes.m"
          return;
        }
#line 1120 "mercury_compile_middle_passes.m"
      }
#line 1116 "mercury_compile_middle_passes.m"
  }
#line 1113 "mercury_compile_middle_passes.m"
}

#line 1069 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1069 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1069 "mercury_compile_middle_passes.m"
{
#line 1072 "mercury_compile_middle_passes.m"
  {
#line 1072 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1072 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1072 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;

#line 1073 "mercury_compile_middle_passes.m"
    {
#line 1073 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1074 "mercury_compile_middle_passes.m"
    {
#line 1074 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 408, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 1083 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ReuseAnalysis_12 == (MR_Integer) 0))
#line 1084 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1083 "mercury_compile_middle_passes.m"
    else
#line 1077 "mercury_compile_middle_passes.m"
      {
#line 1078 "mercury_compile_middle_passes.m"
        {
#line 1078 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure reuse analysis...\n");
        }
#line 1079 "mercury_compile_middle_passes.m"
        {
#line 1079 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1080 "mercury_compile_middle_passes.m"
        {
#line 1080 "mercury_compile_middle_passes.m"
          transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1081 "mercury_compile_middle_passes.m"
        {
#line 1081 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1082 "mercury_compile_middle_passes.m"
        {
#line 1082 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1082 "mercury_compile_middle_passes.m"
          return;
        }
#line 1077 "mercury_compile_middle_passes.m"
      }
#line 1072 "mercury_compile_middle_passes.m"
  }
#line 1069 "mercury_compile_middle_passes.m"
}

#line 1050 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1050 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1050 "mercury_compile_middle_passes.m"
{
#line 1053 "mercury_compile_middle_passes.m"
  {
#line 1053 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1053 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1053 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Sharing_12;

#line 1054 "mercury_compile_middle_passes.m"
    {
#line 1054 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1055 "mercury_compile_middle_passes.m"
    {
#line 1055 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 406, &top_level__mercury_compile_middle_passes__Sharing_12);
    }
#line 1063 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Sharing_12 == (MR_Integer) 0))
#line 1064 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1063 "mercury_compile_middle_passes.m"
    else
#line 1057 "mercury_compile_middle_passes.m"
      {
#line 1058 "mercury_compile_middle_passes.m"
        {
#line 1058 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure sharing analysis...\n");
        }
#line 1059 "mercury_compile_middle_passes.m"
        {
#line 1059 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1060 "mercury_compile_middle_passes.m"
        {
#line 1060 "mercury_compile_middle_passes.m"
          transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1061 "mercury_compile_middle_passes.m"
        {
#line 1061 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1062 "mercury_compile_middle_passes.m"
        {
#line 1062 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1062 "mercury_compile_middle_passes.m"
          return;
        }
#line 1057 "mercury_compile_middle_passes.m"
      }
#line 1053 "mercury_compile_middle_passes.m"
  }
#line 1050 "mercury_compile_middle_passes.m"
}

#line 1040 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1040 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1040 "mercury_compile_middle_passes.m"
{
#line 1040 "mercury_compile_middle_passes.m"
  {
#line 1040 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1040 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1040 "mercury_compile_middle_passes.m"
    {
#line 1040 "mercury_compile_middle_passes.m"
      transform_hlds__delay_construct__delay_construct_proc_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1040 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1040 "mercury_compile_middle_passes.m"
  }
#line 1040 "mercury_compile_middle_passes.m"
}

#line 1029 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1029 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1029 "mercury_compile_middle_passes.m"
{
#line 1032 "mercury_compile_middle_passes.m"
  {
#line 1032 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1032 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1032 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__DelayConstruct_12;

#line 1033 "mercury_compile_middle_passes.m"
    {
#line 1033 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1034 "mercury_compile_middle_passes.m"
    {
#line 1034 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 385, &top_level__mercury_compile_middle_passes__DelayConstruct_12);
    }
#line 1044 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__DelayConstruct_12 == (MR_Integer) 0))
#line 1045 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1044 "mercury_compile_middle_passes.m"
    else
#line 1036 "mercury_compile_middle_passes.m"
      {
#line 1037 "mercury_compile_middle_passes.m"
        {
#line 1037 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Delaying construction unifications ...\n");
        }
#line 1039 "mercury_compile_middle_passes.m"
        {
#line 1039 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1040 "mercury_compile_middle_passes.m"
        {
#line 1040 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[0]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1042 "mercury_compile_middle_passes.m"
        {
#line 1042 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1043 "mercury_compile_middle_passes.m"
        {
#line 1043 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1043 "mercury_compile_middle_passes.m"
          return;
        }
#line 1036 "mercury_compile_middle_passes.m"
      }
#line 1032 "mercury_compile_middle_passes.m"
  }
#line 1029 "mercury_compile_middle_passes.m"
}

#line 986 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 986 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 986 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 986 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 986 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 986 "mercury_compile_middle_passes.m"
{
#line 989 "mercury_compile_middle_passes.m"
  {
#line 989 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 989 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 989 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Deforest_12;
#line 989 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Constraints_13;

#line 990 "mercury_compile_middle_passes.m"
    {
#line 990 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 991 "mercury_compile_middle_passes.m"
    {
#line 991 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 388, &top_level__mercury_compile_middle_passes__Deforest_12);
    }
#line 994 "mercury_compile_middle_passes.m"
    {
#line 994 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 349, &top_level__mercury_compile_middle_passes__Constraints_13);
    }
#line 997 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Deforest_12 == (MR_Integer) 1);
#line 998 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 998 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 1);
#line 1023 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1017 "mercury_compile_middle_passes.m"
      {
#line 1017 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__Msg_14;

#line 1005 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__Deforest_12 == (MR_Integer) 0))
#line 1005 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 0))
#line 1002 "mercury_compile_middle_passes.m"
            {
#line 1004 "mercury_compile_middle_passes.m"
              {
#line 1004 "mercury_compile_middle_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", (MR_String) "no no");
#line 1004 "mercury_compile_middle_passes.m"
                return;
              }
#line 1002 "mercury_compile_middle_passes.m"
            }
#line 1005 "mercury_compile_middle_passes.m"
          else
#line 1016 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Constraint propagation...\n";
#line 1005 "mercury_compile_middle_passes.m"
        else
#line 1005 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 0))
#line 1012 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation...\n";
#line 1005 "mercury_compile_middle_passes.m"
          else
#line 1008 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation and constraint propagation...\n";
#line 1018 "mercury_compile_middle_passes.m"
        {
#line 1018 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Msg_14);
        }
#line 1019 "mercury_compile_middle_passes.m"
        {
#line 1019 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1020 "mercury_compile_middle_passes.m"
        {
#line 1020 "mercury_compile_middle_passes.m"
          transform_hlds__deforest__deforestation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
        }
#line 1021 "mercury_compile_middle_passes.m"
        {
#line 1021 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1022 "mercury_compile_middle_passes.m"
        {
#line 1022 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1022 "mercury_compile_middle_passes.m"
          return;
        }
#line 1017 "mercury_compile_middle_passes.m"
      }
#line 1023 "mercury_compile_middle_passes.m"
    else
#line 1024 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 989 "mercury_compile_middle_passes.m"
  }
#line 986 "mercury_compile_middle_passes.m"
}

#line 977 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 977 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6)
#line 977 "mercury_compile_middle_passes.m"
{
#line 977 "mercury_compile_middle_passes.m"
  {
#line 977 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 977 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 977 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 977 "mercury_compile_middle_passes.m"
    {
#line 977 "mercury_compile_middle_passes.m"
      transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 977 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 977 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 977 "mercury_compile_middle_passes.m"
  }
#line 977 "mercury_compile_middle_passes.m"
}

#line 960 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 960 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19)
#line 960 "mercury_compile_middle_passes.m"
{
#line 964 "mercury_compile_middle_passes.m"
  {
#line 964 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 964 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_14;
#line 964 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopInv_15;

#line 965 "mercury_compile_middle_passes.m"
    {
#line 965 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_14);
    }
#line 966 "mercury_compile_middle_passes.m"
    {
#line 966 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_14, (MR_Integer) 384, &top_level__mercury_compile_middle_passes__LoopInv_15);
    }
#line 980 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__LoopInv_15 == (MR_Integer) 0))
#line 981 "mercury_compile_middle_passes.m"
      {
#line 981 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 981 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18;
#line 981 "mercury_compile_middle_passes.m"
      }
#line 980 "mercury_compile_middle_passes.m"
    else
#line 968 "mercury_compile_middle_passes.m"
      {
#line 968 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;

#line 971 "mercury_compile_middle_passes.m"
        {
#line 971 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__Stats_10, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
        }
#line 972 "mercury_compile_middle_passes.m"
        {
#line 972 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 148, (MR_String) "mark_static", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
        }
#line 974 "mercury_compile_middle_passes.m"
        {
#line 974 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Hoisting loop invariants...\n");
        }
#line 975 "mercury_compile_middle_passes.m"
        {
#line 975 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
        }
#line 976 "mercury_compile_middle_passes.m"
        {
#line 976 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[2]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 978 "mercury_compile_middle_passes.m"
        {
#line 978 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% done.\n");
        }
#line 979 "mercury_compile_middle_passes.m"
        {
#line 979 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_10);
#line 979 "mercury_compile_middle_passes.m"
          return;
        }
#line 968 "mercury_compile_middle_passes.m"
      }
#line 964 "mercury_compile_middle_passes.m"
  }
#line 960 "mercury_compile_middle_passes.m"
}

#line 933 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 933 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 933 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 933 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 933 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 933 "mercury_compile_middle_passes.m"
{
#line 936 "mercury_compile_middle_passes.m"
  {
#line 936 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 936 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 936 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Allow_12;
#line 936 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Simple_13;
#line 936 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SingleUse_14;
#line 936 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Threshold_15;

#line 937 "mercury_compile_middle_passes.m"
    {
#line 937 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 938 "mercury_compile_middle_passes.m"
    {
#line 938 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 333, &top_level__mercury_compile_middle_passes__Allow_12);
    }
#line 939 "mercury_compile_middle_passes.m"
    {
#line 939 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 335, &top_level__mercury_compile_middle_passes__Simple_13);
    }
#line 940 "mercury_compile_middle_passes.m"
    {
#line 940 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 337, &top_level__mercury_compile_middle_passes__SingleUse_14);
    }
#line 941 "mercury_compile_middle_passes.m"
    {
#line 941 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 339, &top_level__mercury_compile_middle_passes__Threshold_15);
    }
#line 943 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Allow_12 == (MR_Integer) 1);
#line 943 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 943 "mercury_compile_middle_passes.m"
      {
#line 944 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Simple_13 == (MR_Integer) 1);
#line 945 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 945 "mercury_compile_middle_passes.m"
          {
#line 945 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SingleUse_14 == (MR_Integer) 1);
#line 945 "mercury_compile_middle_passes.m"
            if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 946 "mercury_compile_middle_passes.m"
              {
#line 946 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Threshold_15 > (MR_Integer) 0);
#line 946 "mercury_compile_middle_passes.m"
              }
#line 945 "mercury_compile_middle_passes.m"
          }
#line 943 "mercury_compile_middle_passes.m"
      }
#line 954 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 949 "mercury_compile_middle_passes.m"
      {
#line 949 "mercury_compile_middle_passes.m"
        {
#line 949 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inlining...\n");
        }
#line 950 "mercury_compile_middle_passes.m"
        {
#line 950 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 951 "mercury_compile_middle_passes.m"
        {
#line 951 "mercury_compile_middle_passes.m"
          transform_hlds__inlining__inlining_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 952 "mercury_compile_middle_passes.m"
        {
#line 952 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 953 "mercury_compile_middle_passes.m"
        {
#line 953 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 953 "mercury_compile_middle_passes.m"
          return;
        }
#line 949 "mercury_compile_middle_passes.m"
      }
#line 954 "mercury_compile_middle_passes.m"
    else
#line 955 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 936 "mercury_compile_middle_passes.m"
  }
#line 933 "mercury_compile_middle_passes.m"
}

#line 913 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 913 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8)
#line 913 "mercury_compile_middle_passes.m"
{
#line 913 "mercury_compile_middle_passes.m"
  {
#line 913 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 913 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4;
#line 913 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6;
#line 913 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8;

#line 913 "mercury_compile_middle_passes.m"
    {
#line 913 "mercury_compile_middle_passes.m"
      transform_hlds__accumulator__accu_transform_proc_8_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_7), &top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8);
    }
#line 913 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4));
#line 913 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6));
#line 913 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_8 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8));
#line 913 "mercury_compile_middle_passes.m"
  }
#line 913 "mercury_compile_middle_passes.m"
}

#line 901 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 901 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 901 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 901 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 901 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23)
#line 901 "mercury_compile_middle_passes.m"
{
#line 904 "mercury_compile_middle_passes.m"
  {
#line 904 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 904 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 904 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_12;

#line 905 "mercury_compile_middle_passes.m"
    {
#line 905 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 906 "mercury_compile_middle_passes.m"
    {
#line 906 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 361, &top_level__mercury_compile_middle_passes__Optimize_12);
    }
#line 927 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Optimize_12 == (MR_Integer) 0))
#line 928 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22;
#line 927 "mercury_compile_middle_passes.m"
    else
#line 908 "mercury_compile_middle_passes.m"
      {
#line 908 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__TypeInfo_43_43;
#line 908 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Cookie0_13;
#line 908 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Task0_14;
#line 908 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Task_15;
#line 908 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_19;
#line 908 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_21;
#line 908 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 920 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 916 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Cookie_17;
#line 916 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 917 "mercury_compile_middle_passes.m"
        MR_Box top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18;
#line 923 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_20;

#line 909 "mercury_compile_middle_passes.m"
        {
#line 909 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Attempting to introduce accumulators...\n");
        }
#line 911 "mercury_compile_middle_passes.m"
        {
#line 911 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 3343 "top_level.mercury_compile_middle_passes.c"
        top_level__mercury_compile_middle_passes__TypeInfo_43_43 = (MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[1];
#line 912 "mercury_compile_middle_passes.m"
        {
#line 912 "mercury_compile_middle_passes.m"
          mercury__univ__type_to_univ_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile_middle_passes__Cookie0_13);
        }
#line 913 "mercury_compile_middle_passes.m"
        {
#line 913 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__Task0_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 913 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 913 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
#line 913 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 2) = ((MR_Box) (top_level__mercury_compile_middle_passes__Cookie0_13));
#line 913 "mercury_compile_middle_passes.m"
        }
#line 914 "mercury_compile_middle_passes.m"
        {
#line 914 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(top_level__mercury_compile_middle_passes__Task0_14, &top_level__mercury_compile_middle_passes__Task_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
        }
#line 916 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = ((((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__Task_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 916 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 916 "mercury_compile_middle_passes.m"
          {
#line 916 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 1)));
#line 916 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Cookie_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 2)));
#line 917 "mercury_compile_middle_passes.m"
            {
#line 917 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = mercury__univ__univ_to_type_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, top_level__mercury_compile_middle_passes__Cookie_17, &top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
            }
#line 917 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 917 "mercury_compile_middle_passes.m"
              {
#line 917 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__SpecsPrime_18 = ((MR_Word) top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
#line 917 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = MR_TRUE;
#line 917 "mercury_compile_middle_passes.m"
              }
#line 916 "mercury_compile_middle_passes.m"
          }
#line 920 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 919 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__Specs_19 = top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 920 "mercury_compile_middle_passes.m"
        else
#line 921 "mercury_compile_middle_passes.m"
          {
#line 921 "mercury_compile_middle_passes.m"
            {
#line 921 "mercury_compile_middle_passes.m"
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/6", (MR_String) "bad task");
#line 921 "mercury_compile_middle_passes.m"
              return;
            }
#line 921 "mercury_compile_middle_passes.m"
          }
#line 923 "mercury_compile_middle_passes.m"
        {
#line 923 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_19, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_20, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_21);
        }
#line 924 "mercury_compile_middle_passes.m"
        {
#line 924 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_21, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);
        }
#line 925 "mercury_compile_middle_passes.m"
        {
#line 925 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 926 "mercury_compile_middle_passes.m"
        {
#line 926 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 926 "mercury_compile_middle_passes.m"
          return;
        }
#line 908 "mercury_compile_middle_passes.m"
      }
#line 904 "mercury_compile_middle_passes.m"
  }
#line 901 "mercury_compile_middle_passes.m"
}

#line 879 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 879 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 879 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 879 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 879 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 879 "mercury_compile_middle_passes.m"
{
#line 882 "mercury_compile_middle_passes.m"
  {
#line 882 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 882 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 882 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImplicitParallelism_12;

#line 883 "mercury_compile_middle_passes.m"
    {
#line 883 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 884 "mercury_compile_middle_passes.m"
    {
#line 884 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 666, &top_level__mercury_compile_middle_passes__ImplicitParallelism_12);
    }
#line 894 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ImplicitParallelism_12 == (MR_Integer) 0))
#line 896 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 894 "mercury_compile_middle_passes.m"
    else
#line 887 "mercury_compile_middle_passes.m"
      {
#line 888 "mercury_compile_middle_passes.m"
        {
#line 888 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying implicit parallelism...\n");
        }
#line 890 "mercury_compile_middle_passes.m"
        {
#line 890 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 891 "mercury_compile_middle_passes.m"
        {
#line 891 "mercury_compile_middle_passes.m"
          transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 892 "mercury_compile_middle_passes.m"
        {
#line 892 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 893 "mercury_compile_middle_passes.m"
        {
#line 893 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 893 "mercury_compile_middle_passes.m"
          return;
        }
#line 887 "mercury_compile_middle_passes.m"
      }
#line 882 "mercury_compile_middle_passes.m"
  }
#line 879 "mercury_compile_middle_passes.m"
}

#line 857 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 857 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 857 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 857 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 857 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 857 "mercury_compile_middle_passes.m"
{
#line 860 "mercury_compile_middle_passes.m"
  {
#line 860 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 860 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 860 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ForceDisableSSDB_12;

#line 861 "mercury_compile_middle_passes.m"
    {
#line 861 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 862 "mercury_compile_middle_passes.m"
    {
#line 862 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 131, &top_level__mercury_compile_middle_passes__ForceDisableSSDB_12);
    }
#line 865 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ForceDisableSSDB_12 == (MR_Integer) 0);
#line 873 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 869 "mercury_compile_middle_passes.m"
      {
#line 867 "mercury_compile_middle_passes.m"
        {
#line 867 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Maybe apply source to source debugging transformation ...\n");
        }
#line 870 "mercury_compile_middle_passes.m"
        {
#line 870 "mercury_compile_middle_passes.m"
          transform_hlds__ssdebug__ssdebug_transform_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 871 "mercury_compile_middle_passes.m"
        {
#line 871 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 872 "mercury_compile_middle_passes.m"
        {
#line 872 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 872 "mercury_compile_middle_passes.m"
          return;
        }
#line 869 "mercury_compile_middle_passes.m"
      }
#line 873 "mercury_compile_middle_passes.m"
    else
#line 874 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 860 "mercury_compile_middle_passes.m"
  }
#line 857 "mercury_compile_middle_passes.m"
}

#line 822 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 822 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 822 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 822 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 822 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20)
#line 822 "mercury_compile_middle_passes.m"
{
#line 825 "mercury_compile_middle_passes.m"
  {
#line 825 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 825 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 825 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HigherOrder_12;
#line 825 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Types_13;
#line 825 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecInfo_14;
#line 825 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecPreds_15;
#line 836 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 836 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_17_17;
#line 836 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_18_18;

#line 826 "mercury_compile_middle_passes.m"
    {
#line 826 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 827 "mercury_compile_middle_passes.m"
    {
#line 827 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 352, &top_level__mercury_compile_middle_passes__HigherOrder_12);
    }
#line 829 "mercury_compile_middle_passes.m"
    {
#line 829 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 360, &top_level__mercury_compile_middle_passes__Types_13);
    }
#line 835 "mercury_compile_middle_passes.m"
    {
#line 835 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__TypeSpecInfo_14);
    }
#line 836 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__TypeSpecPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 0)));
#line 836 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 1)));
#line 836 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 2)));
#line 836 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 3)));
#line 838 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HigherOrder_12 == (MR_Integer) 1);
#line 839 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 839 "mercury_compile_middle_passes.m"
      {
#line 839 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Types_13 == (MR_Integer) 1);
#line 839 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 840 "mercury_compile_middle_passes.m"
          {
#line 840 "mercury_compile_middle_passes.m"
            {
#line 840 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = mercury__set__empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, top_level__mercury_compile_middle_passes__TypeSpecPreds_15);
            }
#line 840 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = !(top_level__mercury_compile_middle_passes__succeeded);
#line 840 "mercury_compile_middle_passes.m"
          }
#line 839 "mercury_compile_middle_passes.m"
      }
#line 851 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 845 "mercury_compile_middle_passes.m"
      {
#line 843 "mercury_compile_middle_passes.m"
        {
#line 843 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
        }
#line 846 "mercury_compile_middle_passes.m"
        {
#line 846 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 848 "mercury_compile_middle_passes.m"
        {
#line 848 "mercury_compile_middle_passes.m"
          transform_hlds__higher_order__specialize_higher_order_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);
        }
#line 849 "mercury_compile_middle_passes.m"
        {
#line 849 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 850 "mercury_compile_middle_passes.m"
        {
#line 850 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 850 "mercury_compile_middle_passes.m"
          return;
        }
#line 845 "mercury_compile_middle_passes.m"
      }
#line 851 "mercury_compile_middle_passes.m"
    else
#line 852 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19;
#line 825 "mercury_compile_middle_passes.m"
  }
#line 822 "mercury_compile_middle_passes.m"
}

#line 803 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 803 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 803 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 803 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 803 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 803 "mercury_compile_middle_passes.m"
{
#line 806 "mercury_compile_middle_passes.m"
  {
#line 806 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 806 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 806 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Tuple_12;

#line 807 "mercury_compile_middle_passes.m"
    {
#line 807 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 808 "mercury_compile_middle_passes.m"
    {
#line 808 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 398, &top_level__mercury_compile_middle_passes__Tuple_12);
    }
#line 816 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Tuple_12 == (MR_Integer) 0))
#line 817 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 816 "mercury_compile_middle_passes.m"
    else
#line 810 "mercury_compile_middle_passes.m"
      {
#line 811 "mercury_compile_middle_passes.m"
        {
#line 811 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Tupling...\n");
        }
#line 812 "mercury_compile_middle_passes.m"
        {
#line 812 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 813 "mercury_compile_middle_passes.m"
        {
#line 813 "mercury_compile_middle_passes.m"
          transform_hlds__tupling__tuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 814 "mercury_compile_middle_passes.m"
        {
#line 814 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 815 "mercury_compile_middle_passes.m"
        {
#line 815 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 815 "mercury_compile_middle_passes.m"
          return;
        }
#line 810 "mercury_compile_middle_passes.m"
      }
#line 806 "mercury_compile_middle_passes.m"
  }
#line 803 "mercury_compile_middle_passes.m"
}

#line 794 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 794 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg)
#line 794 "mercury_compile_middle_passes.m"
{
#line 794 "mercury_compile_middle_passes.m"
  {
#line 794 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 794 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;

#line 794 "mercury_compile_middle_passes.m"
    {
#line 794 "mercury_compile_middle_passes.m"
      return top_level__mercury_compile_middle_passes__succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__794__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))));
    }
#line 794 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 794 "mercury_compile_middle_passes.m"
  }
#line 794 "mercury_compile_middle_passes.m"
}

#line 780 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 780 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 780 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 780 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 780 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 780 "mercury_compile_middle_passes.m"
{
#line 783 "mercury_compile_middle_passes.m"
  {
#line 783 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 783 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 783 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Untuple_12;

#line 784 "mercury_compile_middle_passes.m"
    {
#line 784 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 785 "mercury_compile_middle_passes.m"
    {
#line 785 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 397, &top_level__mercury_compile_middle_passes__Untuple_12);
    }
#line 797 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Untuple_12 == (MR_Integer) 0))
#line 798 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 797 "mercury_compile_middle_passes.m"
    else
#line 787 "mercury_compile_middle_passes.m"
      {
#line 787 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__SimplifySpecs_13;
#line 787 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 787 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_31_31;
#line 787 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_35_35;

#line 788 "mercury_compile_middle_passes.m"
        {
#line 788 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Untupling...\n");
        }
#line 789 "mercury_compile_middle_passes.m"
        {
#line 789 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 790 "mercury_compile_middle_passes.m"
        {
#line 790 "mercury_compile_middle_passes.m"
          transform_hlds__untupling__untuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
        }
#line 791 "mercury_compile_middle_passes.m"
        {
#line 791 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 792 "mercury_compile_middle_passes.m"
        {
#line 792 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 1, top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Stats_8, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__SimplifySpecs_13);
        }
#line 794 "mercury_compile_middle_passes.m"
        {
#line 794 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_35_35 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_middle_passes__Globals_11, top_level__mercury_compile_middle_passes__SimplifySpecs_13);
        }
#line 794 "mercury_compile_middle_passes.m"
        {
#line 794 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 794 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_2[0]));
#line 794 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1));
#line 794 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 794 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_35_35));
#line 794 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 794 "mercury_compile_middle_passes.m"
        }
#line 794 "mercury_compile_middle_passes.m"
        {
#line 794 "mercury_compile_middle_passes.m"
          mercury__require__expect_4_p_0(top_level__mercury_compile_middle_passes__V_31_31, (MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_untuple_arguments\'/6", (MR_String) "simplify has errors");
        }
#line 796 "mercury_compile_middle_passes.m"
        {
#line 796 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 796 "mercury_compile_middle_passes.m"
          return;
        }
#line 787 "mercury_compile_middle_passes.m"
      }
#line 783 "mercury_compile_middle_passes.m"
  }
#line 780 "mercury_compile_middle_passes.m"
}

#line 742 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_9,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_10,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_11,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_12,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_22,
#line 742 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_23)
#line 742 "mercury_compile_middle_passes.m"
{
#line 745 "mercury_compile_middle_passes.m"
  {
#line 745 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 745 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_15;
#line 745 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__GenBytecode_16;

#line 746 "mercury_compile_middle_passes.m"
    {
#line 746 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__HLDS0_9, &top_level__mercury_compile_middle_passes__Globals_15);
    }
#line 747 "mercury_compile_middle_passes.m"
    {
#line 747 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_15, (MR_Integer) 132, &top_level__mercury_compile_middle_passes__GenBytecode_16);
    }
#line 774 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__GenBytecode_16 == (MR_Integer) 0))
#line 775 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_22;
#line 774 "mercury_compile_middle_passes.m"
    else
#line 749 "mercury_compile_middle_passes.m"
      {
#line 749 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__HLDS1_17;
#line 749 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Bytecode_19;
#line 749 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__BytedebugFile_20;
#line 749 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__BytecodeFile_21;
#line 754 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes___HLDS2_18;

#line 750 "mercury_compile_middle_passes.m"
        {
#line 750 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__HLDS0_9, &top_level__mercury_compile_middle_passes__HLDS1_17);
        }
#line 751 "mercury_compile_middle_passes.m"
        {
#line 751 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__HLDS1_17, (MR_Integer) 505, (MR_String) "bytecode_args_to_regs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_23);
        }
#line 752 "mercury_compile_middle_passes.m"
        {
#line 752 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Generating bytecodes...\n");
        }
#line 753 "mercury_compile_middle_passes.m"
        {
#line 753 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
        }
#line 754 "mercury_compile_middle_passes.m"
        {
#line 754 "mercury_compile_middle_passes.m"
          bytecode_backend__bytecode_gen__gen_module_5_p_0(top_level__mercury_compile_middle_passes__HLDS1_17, &top_level__mercury_compile_middle_passes___HLDS2_18, &top_level__mercury_compile_middle_passes__Bytecode_19);
        }
#line 755 "mercury_compile_middle_passes.m"
        {
#line 755 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% done.\n");
        }
#line 756 "mercury_compile_middle_passes.m"
        {
#line 756 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_12);
        }
#line 757 "mercury_compile_middle_passes.m"
        {
#line 757 "mercury_compile_middle_passes.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_15, top_level__mercury_compile_middle_passes__ModuleName_10, (MR_String) ".bytedebug", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytedebugFile_20);
        }
#line 759 "mercury_compile_middle_passes.m"
        {
#line 759 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Writing bytecodes to \140");
        }
#line 760 "mercury_compile_middle_passes.m"
        {
#line 760 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__BytedebugFile_20);
        }
#line 761 "mercury_compile_middle_passes.m"
        {
#line 761 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "\'...");
        }
#line 762 "mercury_compile_middle_passes.m"
        {
#line 762 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
        }
#line 763 "mercury_compile_middle_passes.m"
        {
#line 763 "mercury_compile_middle_passes.m"
          bytecode_backend__bytecode__debug_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytedebugFile_20, top_level__mercury_compile_middle_passes__Bytecode_19);
        }
#line 764 "mercury_compile_middle_passes.m"
        {
#line 764 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) " done.\n");
        }
#line 765 "mercury_compile_middle_passes.m"
        {
#line 765 "mercury_compile_middle_passes.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_15, top_level__mercury_compile_middle_passes__ModuleName_10, (MR_String) ".mbc", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytecodeFile_21);
        }
#line 767 "mercury_compile_middle_passes.m"
        {
#line 767 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Writing bytecodes to \140");
        }
#line 768 "mercury_compile_middle_passes.m"
        {
#line 768 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__BytecodeFile_21);
        }
#line 769 "mercury_compile_middle_passes.m"
        {
#line 769 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "\'...");
        }
#line 770 "mercury_compile_middle_passes.m"
        {
#line 770 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
        }
#line 771 "mercury_compile_middle_passes.m"
        {
#line 771 "mercury_compile_middle_passes.m"
          bytecode_backend__bytecode__output_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytecodeFile_21, top_level__mercury_compile_middle_passes__Bytecode_19);
        }
#line 772 "mercury_compile_middle_passes.m"
        {
#line 772 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) " done.\n");
        }
#line 773 "mercury_compile_middle_passes.m"
        {
#line 773 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_12);
#line 773 "mercury_compile_middle_passes.m"
          return;
        }
#line 749 "mercury_compile_middle_passes.m"
      }
#line 745 "mercury_compile_middle_passes.m"
  }
#line 742 "mercury_compile_middle_passes.m"
}

#line 703 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 703 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 703 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 703 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 703 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 703 "mercury_compile_middle_passes.m"
{
#line 706 "mercury_compile_middle_passes.m"
  {
#line 706 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 706 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 706 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__WarnDead_12;

#line 707 "mercury_compile_middle_passes.m"
    {
#line 707 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 708 "mercury_compile_middle_passes.m"
    {
#line 708 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 29, &top_level__mercury_compile_middle_passes__WarnDead_12);
    }
#line 736 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__WarnDead_12 == (MR_Integer) 0))
#line 737 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 736 "mercury_compile_middle_passes.m"
    else
#line 710 "mercury_compile_middle_passes.m"
      {
#line 710 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 710 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 714 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes___HLDS1_13;
#line 717 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 711 "mercury_compile_middle_passes.m"
        {
#line 711 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Warning about dead procedures...\n");
        }
#line 713 "mercury_compile_middle_passes.m"
        {
#line 713 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 714 "mercury_compile_middle_passes.m"
        {
#line 714 "mercury_compile_middle_passes.m"
          transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes___HLDS1_13, &top_level__mercury_compile_middle_passes__Specs_14);
        }
#line 715 "mercury_compile_middle_passes.m"
        {
#line 715 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 716 "mercury_compile_middle_passes.m"
        {
#line 716 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
        }
#line 717 "mercury_compile_middle_passes.m"
        {
#line 717 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
        }
#line 718 "mercury_compile_middle_passes.m"
        {
#line 718 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
#line 718 "mercury_compile_middle_passes.m"
          return;
        }
#line 710 "mercury_compile_middle_passes.m"
      }
#line 706 "mercury_compile_middle_passes.m"
  }
#line 703 "mercury_compile_middle_passes.m"
}

#line 683 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 683 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 683 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 683 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 683 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 683 "mercury_compile_middle_passes.m"
{
#line 686 "mercury_compile_middle_passes.m"
  {
#line 686 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 686 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 686 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeCtorInfo_12;

#line 687 "mercury_compile_middle_passes.m"
    {
#line 687 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 688 "mercury_compile_middle_passes.m"
    {
#line 688 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 276, &top_level__mercury_compile_middle_passes__TypeCtorInfo_12);
    }
#line 697 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TypeCtorInfo_12 == (MR_Integer) 0))
#line 698 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 697 "mercury_compile_middle_passes.m"
    else
#line 690 "mercury_compile_middle_passes.m"
      {
#line 691 "mercury_compile_middle_passes.m"
        {
#line 691 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Generating type_ctor_info structures...");
        }
#line 693 "mercury_compile_middle_passes.m"
        {
#line 693 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 694 "mercury_compile_middle_passes.m"
        {
#line 694 "mercury_compile_middle_passes.m"
          backend_libs__type_ctor_info__generate_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 695 "mercury_compile_middle_passes.m"
        {
#line 695 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
        }
#line 696 "mercury_compile_middle_passes.m"
        {
#line 696 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 696 "mercury_compile_middle_passes.m"
          return;
        }
#line 690 "mercury_compile_middle_passes.m"
      }
#line 686 "mercury_compile_middle_passes.m"
  }
#line 683 "mercury_compile_middle_passes.m"
}

#line 660 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 660 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 660 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 660 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 660 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 660 "mercury_compile_middle_passes.m"
{
#line 663 "mercury_compile_middle_passes.m"
  {
#line 663 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 663 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 663 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Polymorphism_12;
#line 663 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_13;

#line 664 "mercury_compile_middle_passes.m"
    {
#line 664 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 665 "mercury_compile_middle_passes.m"
    {
#line 665 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 303, &top_level__mercury_compile_middle_passes__Polymorphism_12);
    }
#line 666 "mercury_compile_middle_passes.m"
    {
#line 666 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 421, &top_level__mercury_compile_middle_passes__Termination2_13);
    }
#line 670 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Polymorphism_12 == (MR_Integer) 1);
#line 670 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 671 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Termination2_13 == (MR_Integer) 1);
#line 677 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 673 "mercury_compile_middle_passes.m"
      {
#line 673 "mercury_compile_middle_passes.m"
        {
#line 673 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination 2...\n");
        }
#line 674 "mercury_compile_middle_passes.m"
        {
#line 674 "mercury_compile_middle_passes.m"
          transform_hlds__term_constr_main__pass_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);
        }
#line 675 "mercury_compile_middle_passes.m"
        {
#line 675 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination 2 checking done.\n");
        }
#line 676 "mercury_compile_middle_passes.m"
        {
#line 676 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 676 "mercury_compile_middle_passes.m"
          return;
        }
#line 673 "mercury_compile_middle_passes.m"
      }
#line 677 "mercury_compile_middle_passes.m"
    else
#line 678 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 663 "mercury_compile_middle_passes.m"
  }
#line 660 "mercury_compile_middle_passes.m"
}

#line 635 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 635 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 635 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 635 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 635 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 635 "mercury_compile_middle_passes.m"
{
#line 638 "mercury_compile_middle_passes.m"
  {
#line 638 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 638 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 638 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Polymorphism_12;
#line 638 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_13;

#line 639 "mercury_compile_middle_passes.m"
    {
#line 639 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 640 "mercury_compile_middle_passes.m"
    {
#line 640 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 303, &top_level__mercury_compile_middle_passes__Polymorphism_12);
    }
#line 641 "mercury_compile_middle_passes.m"
    {
#line 641 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 414, &top_level__mercury_compile_middle_passes__Termination_13);
    }
#line 645 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Polymorphism_12 == (MR_Integer) 1);
#line 645 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 646 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Termination_13 == (MR_Integer) 1);
#line 654 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 648 "mercury_compile_middle_passes.m"
      {
#line 648 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 648 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 648 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25;
#line 651 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 648 "mercury_compile_middle_passes.m"
        {
#line 648 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination...\n");
        }
#line 649 "mercury_compile_middle_passes.m"
        {
#line 649 "mercury_compile_middle_passes.m"
          transform_hlds__termination__analyse_termination_in_module_5_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_middle_passes__Specs_14);
        }
#line 650 "mercury_compile_middle_passes.m"
        {
#line 650 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination checking done.\n");
        }
#line 651 "mercury_compile_middle_passes.m"
        {
#line 651 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
        }
#line 652 "mercury_compile_middle_passes.m"
        {
#line 652 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
        }
#line 653 "mercury_compile_middle_passes.m"
        {
#line 653 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 653 "mercury_compile_middle_passes.m"
          return;
        }
#line 648 "mercury_compile_middle_passes.m"
      }
#line 654 "mercury_compile_middle_passes.m"
    else
#line 655 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 638 "mercury_compile_middle_passes.m"
  }
#line 635 "mercury_compile_middle_passes.m"
}

#line 617 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 617 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 617 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 617 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 617 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 617 "mercury_compile_middle_passes.m"
{
#line 620 "mercury_compile_middle_passes.m"
  {
#line 620 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 620 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 620 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_12;

#line 621 "mercury_compile_middle_passes.m"
    {
#line 621 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 622 "mercury_compile_middle_passes.m"
    {
#line 622 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 429, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_12);
    }
#line 629 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ExceptionAnalysis_12 == (MR_Integer) 0))
#line 630 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 629 "mercury_compile_middle_passes.m"
    else
#line 624 "mercury_compile_middle_passes.m"
      {
#line 625 "mercury_compile_middle_passes.m"
        {
#line 625 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing exceptions...\n");
        }
#line 626 "mercury_compile_middle_passes.m"
        {
#line 626 "mercury_compile_middle_passes.m"
          transform_hlds__exception_analysis__analyse_exceptions_in_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 627 "mercury_compile_middle_passes.m"
        {
#line 627 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 628 "mercury_compile_middle_passes.m"
        {
#line 628 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 628 "mercury_compile_middle_passes.m"
          return;
        }
#line 624 "mercury_compile_middle_passes.m"
      }
#line 620 "mercury_compile_middle_passes.m"
  }
#line 617 "mercury_compile_middle_passes.m"
}

#line 599 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 599 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 599 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 599 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 599 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 599 "mercury_compile_middle_passes.m"
{
#line 602 "mercury_compile_middle_passes.m"
  {
#line 602 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 602 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 602 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;

#line 603 "mercury_compile_middle_passes.m"
    {
#line 603 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 604 "mercury_compile_middle_passes.m"
    {
#line 604 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 430, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 611 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 0))
#line 612 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 611 "mercury_compile_middle_passes.m"
    else
#line 606 "mercury_compile_middle_passes.m"
      {
#line 607 "mercury_compile_middle_passes.m"
        {
#line 607 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing closures...\n");
        }
#line 608 "mercury_compile_middle_passes.m"
        {
#line 608 "mercury_compile_middle_passes.m"
          transform_hlds__closure_analysis__process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 609 "mercury_compile_middle_passes.m"
        {
#line 609 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 610 "mercury_compile_middle_passes.m"
        {
#line 610 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 610 "mercury_compile_middle_passes.m"
          return;
        }
#line 606 "mercury_compile_middle_passes.m"
      }
#line 602 "mercury_compile_middle_passes.m"
  }
#line 599 "mercury_compile_middle_passes.m"
}

#line 587 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 587 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 587 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 587 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 587 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 587 "mercury_compile_middle_passes.m"
{
#line 590 "mercury_compile_middle_passes.m"
  {
#line 590 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 591 "mercury_compile_middle_passes.m"
    {
#line 591 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Fully expanding equivalence types...");
    }
#line 592 "mercury_compile_middle_passes.m"
    {
#line 592 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 593 "mercury_compile_middle_passes.m"
    {
#line 593 "mercury_compile_middle_passes.m"
      transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 594 "mercury_compile_middle_passes.m"
    {
#line 594 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 595 "mercury_compile_middle_passes.m"
    {
#line 595 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 595 "mercury_compile_middle_passes.m"
      return;
    }
#line 590 "mercury_compile_middle_passes.m"
  }
#line 587 "mercury_compile_middle_passes.m"
}

#line 575 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 575 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 575 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 575 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 575 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 575 "mercury_compile_middle_passes.m"
{
#line 578 "mercury_compile_middle_passes.m"
  {
#line 578 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 579 "mercury_compile_middle_passes.m"
    {
#line 579 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming stm expressions...");
    }
#line 580 "mercury_compile_middle_passes.m"
    {
#line 580 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 581 "mercury_compile_middle_passes.m"
    {
#line 581 "mercury_compile_middle_passes.m"
      transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 582 "mercury_compile_middle_passes.m"
    {
#line 582 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 583 "mercury_compile_middle_passes.m"
    {
#line 583 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 583 "mercury_compile_middle_passes.m"
      return;
    }
#line 578 "mercury_compile_middle_passes.m"
  }
#line 575 "mercury_compile_middle_passes.m"
}

#line 563 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 563 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 563 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 563 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 563 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 563 "mercury_compile_middle_passes.m"
{
#line 566 "mercury_compile_middle_passes.m"
  {
#line 566 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 567 "mercury_compile_middle_passes.m"
    {
#line 567 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming lambda expressions...");
    }
#line 568 "mercury_compile_middle_passes.m"
    {
#line 568 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 569 "mercury_compile_middle_passes.m"
    {
#line 569 "mercury_compile_middle_passes.m"
      transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 570 "mercury_compile_middle_passes.m"
    {
#line 570 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 571 "mercury_compile_middle_passes.m"
    {
#line 571 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 571 "mercury_compile_middle_passes.m"
      return;
    }
#line 566 "mercury_compile_middle_passes.m"
  }
#line 563 "mercury_compile_middle_passes.m"
}

#line 548 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 548 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 548 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 548 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 548 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 548 "mercury_compile_middle_passes.m"
{
#line 551 "mercury_compile_middle_passes.m"
  {
#line 551 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 551 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Specs_11;
#line 551 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 551 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__NumErrors_14;
#line 551 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 558 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_13;

#line 552 "mercury_compile_middle_passes.m"
    {
#line 552 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming tabled predicates...");
    }
#line 553 "mercury_compile_middle_passes.m"
    {
#line 553 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 554 "mercury_compile_middle_passes.m"
    {
#line 554 "mercury_compile_middle_passes.m"
      transform_hlds__table_gen__table_gen_process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__Specs_11);
    }
#line 555 "mercury_compile_middle_passes.m"
    {
#line 555 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 556 "mercury_compile_middle_passes.m"
    {
#line 556 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
    }
#line 557 "mercury_compile_middle_passes.m"
    {
#line 557 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 558 "mercury_compile_middle_passes.m"
    {
#line 558 "mercury_compile_middle_passes.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_11, top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_13, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_14);
    }
#line 559 "mercury_compile_middle_passes.m"
    {
#line 559 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 559 "mercury_compile_middle_passes.m"
      return;
    }
#line 551 "mercury_compile_middle_passes.m"
  }
#line 548 "mercury_compile_middle_passes.m"
}

#line 499 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 499 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 499 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 499 "mercury_compile_middle_passes.m"
{
#line 502 "mercury_compile_middle_passes.m"
  {
#line 502 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 502 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 502 "mercury_compile_middle_passes.m"
    MR_String top_level__mercury_compile_middle_passes__FileName_8;
#line 502 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9;
#line 502 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10;
#line 502 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizes_11;

#line 503 "mercury_compile_middle_passes.m"
    {
#line 503 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 504 "mercury_compile_middle_passes.m"
    {
#line 504 "mercury_compile_middle_passes.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__FileName_8);
    }
#line 505 "mercury_compile_middle_passes.m"
    {
#line 505 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 208, &top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9);
    }
#line 507 "mercury_compile_middle_passes.m"
    {
#line 507 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 209, &top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10);
    }
#line 509 "mercury_compile_middle_passes.m"
    {
#line 509 "mercury_compile_middle_passes.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9, top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10, &top_level__mercury_compile_middle_passes__RecordTermSizes_11);
    }
#line 510 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (strcmp(top_level__mercury_compile_middle_passes__FileName_8, (MR_String) "") == 0);
#line 527 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 526 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 527 "mercury_compile_middle_passes.m"
    else
#line 534 "mercury_compile_middle_passes.m"
      {
#line 534 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_12;

#line 530 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__RecordTermSizes_11 == (MR_Integer) 0))
#line 531 "mercury_compile_middle_passes.m"
          {
#line 532 "mercury_compile_middle_passes.m"
            {
#line 532 "mercury_compile_middle_passes.m"
              libs__file_util__report_error_3_p_0((MR_String) "the --experimental-complexity option requires a term size profiling grade");
            }
#line 531 "mercury_compile_middle_passes.m"
          }
#line 530 "mercury_compile_middle_passes.m"
        else
#line 529 "mercury_compile_middle_passes.m"
          {
#line 529 "mercury_compile_middle_passes.m"
          }
#line 535 "mercury_compile_middle_passes.m"
        {
#line 535 "mercury_compile_middle_passes.m"
          transform_hlds__complexity__read_spec_file_4_p_0(top_level__mercury_compile_middle_passes__FileName_8, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_12);
        }
#line 540 "mercury_compile_middle_passes.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__MaybeNumProcMap_12)) == (MR_mktag((MR_Integer) 1))))
#line 541 "mercury_compile_middle_passes.m"
          {
#line 541 "mercury_compile_middle_passes.m"
            MR_String top_level__mercury_compile_middle_passes__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));

#line 542 "mercury_compile_middle_passes.m"
            {
#line 542 "mercury_compile_middle_passes.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_middle_passes__Msg_15);
            }
#line 542 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 541 "mercury_compile_middle_passes.m"
          }
#line 540 "mercury_compile_middle_passes.m"
        else
#line 537 "mercury_compile_middle_passes.m"
          {
#line 537 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));
#line 537 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_30_30;

#line 538 "mercury_compile_middle_passes.m"
            {
#line 538 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 538 "mercury_compile_middle_passes.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_29_29));
#line 538 "mercury_compile_middle_passes.m"
            }
#line 538 "mercury_compile_middle_passes.m"
            {
#line 538 "mercury_compile_middle_passes.m"
              hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
#line 538 "mercury_compile_middle_passes.m"
              return;
            }
#line 537 "mercury_compile_middle_passes.m"
          }
#line 534 "mercury_compile_middle_passes.m"
      }
#line 502 "mercury_compile_middle_passes.m"
  }
#line 499 "mercury_compile_middle_passes.m"
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
#line 1089 "mercury_compile_middle_passes.m"
  {
#line 1089 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1089 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1089 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Intermod_12;
#line 1089 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_13;
#line 1089 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Warn_14;

#line 1090 "mercury_compile_middle_passes.m"
    {
#line 1090 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1091 "mercury_compile_middle_passes.m"
    {
#line 1091 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 351, &top_level__mercury_compile_middle_passes__Intermod_12);
    }
#line 1092 "mercury_compile_middle_passes.m"
    {
#line 1092 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 350, &top_level__mercury_compile_middle_passes__Optimize_13);
    }
#line 1093 "mercury_compile_middle_passes.m"
    {
#line 1093 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 10, &top_level__mercury_compile_middle_passes__Warn_14);
    }
#line 1095 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Optimize_13 == (MR_Integer) 1);
#line 1096 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1096 "mercury_compile_middle_passes.m"
      {
#line 1096 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Warn_14 == (MR_Integer) 1);
#line 1096 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1097 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Intermod_12 == (MR_Integer) 1);
#line 1096 "mercury_compile_middle_passes.m"
      }
#line 1107 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1100 "mercury_compile_middle_passes.m"
      {
#line 1100 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_15;
#line 1100 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_17;
#line 1100 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28;
#line 1103 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_16;

#line 1100 "mercury_compile_middle_passes.m"
        {
#line 1100 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Finding unused arguments ...\n");
        }
#line 1101 "mercury_compile_middle_passes.m"
        {
#line 1101 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1102 "mercury_compile_middle_passes.m"
        {
#line 1102 "mercury_compile_middle_passes.m"
          transform_hlds__unused_args__unused_args_process_module_6_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__Specs_15);
        }
#line 1103 "mercury_compile_middle_passes.m"
        {
#line 1103 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_15, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_16, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_17);
        }
#line 1104 "mercury_compile_middle_passes.m"
        {
#line 1104 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19);
        }
#line 1105 "mercury_compile_middle_passes.m"
        {
#line 1105 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1106 "mercury_compile_middle_passes.m"
        {
#line 1106 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1106 "mercury_compile_middle_passes.m"
          return;
        }
#line 1100 "mercury_compile_middle_passes.m"
      }
#line 1107 "mercury_compile_middle_passes.m"
    else
#line 1108 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18;
#line 1089 "mercury_compile_middle_passes.m"
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
#line 431 "mercury_compile_middle_passes.m"
  {
#line 431 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalysisInfo_14;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImportedModules_15;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_91_91;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_97_97;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_103_103;
#line 431 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105;
#line 487 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___AnalysisInfo_16;

#line 432 "mercury_compile_middle_passes.m"
    {
#line 432 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 433 "mercury_compile_middle_passes.m"
    {
#line 433 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 44, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 434 "mercury_compile_middle_passes.m"
    {
#line 434 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 54, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 435 "mercury_compile_middle_passes.m"
    {
#line 435 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 430, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 436 "mercury_compile_middle_passes.m"
    {
#line 436 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 406, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 442 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 443 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 443 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 447 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 446 "mercury_compile_middle_passes.m"
      {
#line 446 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26);
      }
#line 447 "mercury_compile_middle_passes.m"
    else
#line 448 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 450 "mercury_compile_middle_passes.m"
    {
#line 450 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30);
    }
#line 451 "mercury_compile_middle_passes.m"
    {
#line 451 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
    }
#line 452 "mercury_compile_middle_passes.m"
    {
#line 452 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36);
    }
#line 453 "mercury_compile_middle_passes.m"
    {
#line 453 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38);
    }
#line 454 "mercury_compile_middle_passes.m"
    {
#line 454 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42);
    }
#line 455 "mercury_compile_middle_passes.m"
    {
#line 455 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44);
    }
#line 456 "mercury_compile_middle_passes.m"
    {
#line 456 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48);
    }
#line 457 "mercury_compile_middle_passes.m"
    {
#line 457 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50);
    }
#line 458 "mercury_compile_middle_passes.m"
    {
#line 458 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54);
    }
#line 471 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 0))
#line 472 "mercury_compile_middle_passes.m"
      {
#line 472 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 472 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54;
#line 472 "mercury_compile_middle_passes.m"
      }
#line 471 "mercury_compile_middle_passes.m"
    else
#line 460 "mercury_compile_middle_passes.m"
      {
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56;
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60;
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62;
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68;
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_69_69;
#line 460 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73;

#line 463 "mercury_compile_middle_passes.m"
        {
#line 463 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56);
        }
#line 464 "mercury_compile_middle_passes.m"
        {
#line 464 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60);
        }
#line 465 "mercury_compile_middle_passes.m"
        {
#line 465 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62);
        }
#line 466 "mercury_compile_middle_passes.m"
        {
#line 466 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
        }
#line 467 "mercury_compile_middle_passes.m"
        {
#line 467 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_69_69);
        }
#line 468 "mercury_compile_middle_passes.m"
        {
#line 468 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73);
        }
#line 469 "mercury_compile_middle_passes.m"
        {
#line 469 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75);
        }
#line 470 "mercury_compile_middle_passes.m"
        {
#line 470 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79);
        }
#line 460 "mercury_compile_middle_passes.m"
      }
#line 474 "mercury_compile_middle_passes.m"
    {
#line 474 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81);
    }
#line 475 "mercury_compile_middle_passes.m"
    {
#line 475 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85);
    }
#line 476 "mercury_compile_middle_passes.m"
    {
#line 476 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87);
    }
#line 477 "mercury_compile_middle_passes.m"
    {
#line 477 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_91_91);
    }
#line 478 "mercury_compile_middle_passes.m"
    {
#line 478 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93);
    }
#line 479 "mercury_compile_middle_passes.m"
    {
#line 479 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_91_91, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_97_97);
    }
#line 480 "mercury_compile_middle_passes.m"
    {
#line 480 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99);
    }
#line 481 "mercury_compile_middle_passes.m"
    {
#line 481 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_97_97, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_103_103);
    }
#line 482 "mercury_compile_middle_passes.m"
    {
#line 482 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105);
    }
#line 483 "mercury_compile_middle_passes.m"
    {
#line 483 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_103_103, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
    }
#line 485 "mercury_compile_middle_passes.m"
    {
#line 485 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, &top_level__mercury_compile_middle_passes__AnalysisInfo_14);
    }
#line 486 "mercury_compile_middle_passes.m"
    {
#line 486 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, &top_level__mercury_compile_middle_passes__ImportedModules_15);
    }
#line 487 "mercury_compile_middle_passes.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 487 "mercury_compile_middle_passes.m"
    {
#line 487 "mercury_compile_middle_passes.m"
      analysis__write_analysis_files_7_p_0((MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[0], ((MR_Box) ((MR_Integer) 0)), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, top_level__mercury_compile_middle_passes__ImportedModules_15, top_level__mercury_compile_middle_passes__AnalysisInfo_14, &top_level__mercury_compile_middle_passes___AnalysisInfo_16);
    }
#line 431 "mercury_compile_middle_passes.m"
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
#line 376 "mercury_compile_middle_passes.m"
  {
#line 376 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94;
#line 376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96;

#line 377 "mercury_compile_middle_passes.m"
    {
#line 377 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 378 "mercury_compile_middle_passes.m"
    {
#line 378 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 44, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 379 "mercury_compile_middle_passes.m"
    {
#line 379 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 54, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 380 "mercury_compile_middle_passes.m"
    {
#line 380 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 430, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 381 "mercury_compile_middle_passes.m"
    {
#line 381 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 406, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 387 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 388 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 388 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 392 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 391 "mercury_compile_middle_passes.m"
      {
#line 391 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
      }
#line 392 "mercury_compile_middle_passes.m"
    else
#line 393 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 395 "mercury_compile_middle_passes.m"
    {
#line 395 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27);
    }
#line 396 "mercury_compile_middle_passes.m"
    {
#line 396 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29);
    }
#line 397 "mercury_compile_middle_passes.m"
    {
#line 397 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33);
    }
#line 398 "mercury_compile_middle_passes.m"
    {
#line 398 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35);
    }
#line 399 "mercury_compile_middle_passes.m"
    {
#line 399 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39);
    }
#line 400 "mercury_compile_middle_passes.m"
    {
#line 400 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41);
    }
#line 401 "mercury_compile_middle_passes.m"
    {
#line 401 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45);
    }
#line 402 "mercury_compile_middle_passes.m"
    {
#line 402 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47);
    }
#line 403 "mercury_compile_middle_passes.m"
    {
#line 403 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51);
    }
#line 416 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 0))
#line 417 "mercury_compile_middle_passes.m"
      {
#line 417 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 417 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 417 "mercury_compile_middle_passes.m"
      }
#line 416 "mercury_compile_middle_passes.m"
    else
#line 405 "mercury_compile_middle_passes.m"
      {
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57;
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59;
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63;
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65;
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 405 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70;

#line 408 "mercury_compile_middle_passes.m"
        {
#line 408 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53);
        }
#line 409 "mercury_compile_middle_passes.m"
        {
#line 409 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57);
        }
#line 410 "mercury_compile_middle_passes.m"
        {
#line 410 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59);
        }
#line 411 "mercury_compile_middle_passes.m"
        {
#line 411 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63);
        }
#line 412 "mercury_compile_middle_passes.m"
        {
#line 412 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
        }
#line 413 "mercury_compile_middle_passes.m"
        {
#line 413 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70);
        }
#line 414 "mercury_compile_middle_passes.m"
        {
#line 414 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72);
        }
#line 415 "mercury_compile_middle_passes.m"
        {
#line 415 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76);
        }
#line 405 "mercury_compile_middle_passes.m"
      }
#line 419 "mercury_compile_middle_passes.m"
    {
#line 419 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78);
    }
#line 420 "mercury_compile_middle_passes.m"
    {
#line 420 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82);
    }
#line 421 "mercury_compile_middle_passes.m"
    {
#line 421 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84);
    }
#line 422 "mercury_compile_middle_passes.m"
    {
#line 422 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88);
    }
#line 423 "mercury_compile_middle_passes.m"
    {
#line 423 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90);
    }
#line 424 "mercury_compile_middle_passes.m"
    {
#line 424 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94);
    }
#line 425 "mercury_compile_middle_passes.m"
    {
#line 425 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
    }
#line 426 "mercury_compile_middle_passes.m"
    {
#line 426 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16);
    }
#line 427 "mercury_compile_middle_passes.m"
    {
#line 427 "mercury_compile_middle_passes.m"
      transform_hlds__trans_opt__write_trans_opt_file_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
#line 427 "mercury_compile_middle_passes.m"
      return;
    }
#line 376 "mercury_compile_middle_passes.m"
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
#line 286 "mercury_compile_middle_passes.m"
  {
#line 286 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__IntermodArgs_8;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_9;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_10;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_11;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_13;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_14;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TrailingAnalysis_15;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_16;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_17;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_18;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52;

#line 291 "mercury_compile_middle_passes.m"
    {
#line 291 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 292 "mercury_compile_middle_passes.m"
    {
#line 292 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 351, &top_level__mercury_compile_middle_passes__IntermodArgs_8);
    }
#line 293 "mercury_compile_middle_passes.m"
    {
#line 293 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 414, &top_level__mercury_compile_middle_passes__Termination_9);
    }
#line 294 "mercury_compile_middle_passes.m"
    {
#line 294 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 421, &top_level__mercury_compile_middle_passes__Termination2_10);
    }
#line 295 "mercury_compile_middle_passes.m"
    {
#line 295 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 406, &top_level__mercury_compile_middle_passes__SharingAnalysis_11);
    }
#line 297 "mercury_compile_middle_passes.m"
    {
#line 297 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 408, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 299 "mercury_compile_middle_passes.m"
    {
#line 299 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 429, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_13);
    }
#line 301 "mercury_compile_middle_passes.m"
    {
#line 301 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 430, &top_level__mercury_compile_middle_passes__ClosureAnalysis_14);
    }
#line 303 "mercury_compile_middle_passes.m"
    {
#line 303 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 393, &top_level__mercury_compile_middle_passes__TrailingAnalysis_15);
    }
#line 305 "mercury_compile_middle_passes.m"
    {
#line 305 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 396, &top_level__mercury_compile_middle_passes__TablingAnalysis_16);
    }
#line 307 "mercury_compile_middle_passes.m"
    {
#line 307 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 44, &top_level__mercury_compile_middle_passes__Verbose_17);
    }
#line 308 "mercury_compile_middle_passes.m"
    {
#line 308 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 54, &top_level__mercury_compile_middle_passes__Stats_18);
    }
#line 314 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_14 == (MR_Integer) 1);
#line 315 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 315 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_11 == (MR_Integer) 1);
#line 321 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 318 "mercury_compile_middle_passes.m"
      {
#line 318 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34;
#line 318 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_36_36;

#line 567 "mercury_compile_middle_passes.m"
        {
#line 567 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming lambda expressions...");
        }
#line 568 "mercury_compile_middle_passes.m"
        {
#line 568 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 569 "mercury_compile_middle_passes.m"
        {
#line 569 "mercury_compile_middle_passes.m"
          transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34);
        }
#line 570 "mercury_compile_middle_passes.m"
        {
#line 570 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 571 "mercury_compile_middle_passes.m"
        {
#line 571 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 579 "mercury_compile_middle_passes.m"
        {
#line 579 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming stm expressions...");
        }
#line 580 "mercury_compile_middle_passes.m"
        {
#line 580 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 581 "mercury_compile_middle_passes.m"
        {
#line 581 "mercury_compile_middle_passes.m"
          transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_36_36);
        }
#line 582 "mercury_compile_middle_passes.m"
        {
#line 582 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 583 "mercury_compile_middle_passes.m"
        {
#line 583 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 320 "mercury_compile_middle_passes.m"
        {
#line 320 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38);
        }
#line 318 "mercury_compile_middle_passes.m"
      }
#line 321 "mercury_compile_middle_passes.m"
    else
#line 322 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19;
#line 327 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ExceptionAnalysis_13 == (MR_Integer) 0))
#line 328 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 327 "mercury_compile_middle_passes.m"
    else
#line 326 "mercury_compile_middle_passes.m"
      {
#line 326 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40);
      }
#line 333 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__IntermodArgs_8 == (MR_Integer) 0))
#line 334 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40;
#line 333 "mercury_compile_middle_passes.m"
    else
#line 332 "mercury_compile_middle_passes.m"
      {
#line 332 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42);
      }
#line 339 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Termination_9 == (MR_Integer) 0))
#line 340 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42;
#line 339 "mercury_compile_middle_passes.m"
    else
#line 338 "mercury_compile_middle_passes.m"
      {
#line 338 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44);
      }
#line 345 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Termination2_10 == (MR_Integer) 0))
#line 346 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 345 "mercury_compile_middle_passes.m"
    else
#line 344 "mercury_compile_middle_passes.m"
      {
#line 344 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46);
      }
#line 352 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__SharingAnalysis_11 == (MR_Integer) 0))
#line 353 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46;
#line 352 "mercury_compile_middle_passes.m"
    else
#line 350 "mercury_compile_middle_passes.m"
      {
#line 350 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48);
      }
#line 358 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ReuseAnalysis_12 == (MR_Integer) 0))
#line 359 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48;
#line 358 "mercury_compile_middle_passes.m"
    else
#line 357 "mercury_compile_middle_passes.m"
      {
#line 357 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50);
      }
#line 364 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TrailingAnalysis_15 == (MR_Integer) 0))
#line 365 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 364 "mercury_compile_middle_passes.m"
    else
#line 363 "mercury_compile_middle_passes.m"
      {
#line 363 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52);
      }
#line 370 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TablingAnalysis_16 == (MR_Integer) 0))
#line 371 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52;
#line 370 "mercury_compile_middle_passes.m"
    else
#line 369 "mercury_compile_middle_passes.m"
      {
#line 369 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);
#line 369 "mercury_compile_middle_passes.m"
        return;
      }
#line 286 "mercury_compile_middle_passes.m"
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
#line 111 "mercury_compile_middle_passes.m"
  {
#line 111 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_13;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_14;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_87_87;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_93_93;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_99_99;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_105_105;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_111_111;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_117_117;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_123_123;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_126_126;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_130_130;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_136_136;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_142_142;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_148_148;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_154_154;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_160_160;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_166_166;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_172_172;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_181_181;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_187_187;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_193_193;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_199_199;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_205_205;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_211_211;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_217_217;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_223_223;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_229_229;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_238_238;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_244_244;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_250_250;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_256_256;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_262_262;
#line 111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_268_268;
#line 218 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_15;
#line 252 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_16;

#line 112 "mercury_compile_middle_passes.m"
    {
#line 112 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 113 "mercury_compile_middle_passes.m"
    {
#line 113 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 44, &top_level__mercury_compile_middle_passes__Verbose_13);
    }
#line 114 "mercury_compile_middle_passes.m"
    {
#line 114 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 54, &top_level__mercury_compile_middle_passes__Stats_14);
    }
#line 116 "mercury_compile_middle_passes.m"
    {
#line 116 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25);
    }
#line 118 "mercury_compile_middle_passes.m"
    {
#line 118 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27);
    }
#line 119 "mercury_compile_middle_passes.m"
    {
#line 119 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, (MR_Integer) 105, (MR_String) "tabling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31);
    }
#line 121 "mercury_compile_middle_passes.m"
    {
#line 121 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33);
    }
#line 122 "mercury_compile_middle_passes.m"
    {
#line 122 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37);
    }
#line 124 "mercury_compile_middle_passes.m"
    {
#line 124 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_stms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39);
    }
#line 125 "mercury_compile_middle_passes.m"
    {
#line 125 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, (MR_Integer) 113, (MR_String) "stm", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43);
    }
#line 127 "mercury_compile_middle_passes.m"
    {
#line 127 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45);
    }
#line 128 "mercury_compile_middle_passes.m"
    {
#line 128 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 115, (MR_String) "equiv_types", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49);
    }
#line 130 "mercury_compile_middle_passes.m"
    {
#line 130 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51);
    }
#line 131 "mercury_compile_middle_passes.m"
    {
#line 131 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55);
    }
#line 152 "mercury_compile_middle_passes.m"
    {
#line 152 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57);
    }
#line 153 "mercury_compile_middle_passes.m"
    {
#line 153 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 155 "mercury_compile_middle_passes.m"
    {
#line 155 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63);
    }
#line 156 "mercury_compile_middle_passes.m"
    {
#line 156 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67);
    }
#line 158 "mercury_compile_middle_passes.m"
    {
#line 158 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69);
    }
#line 159 "mercury_compile_middle_passes.m"
    {
#line 159 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 121, (MR_String) "termination2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73);
    }
#line 161 "mercury_compile_middle_passes.m"
    {
#line 161 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75);
    }
#line 162 "mercury_compile_middle_passes.m"
    {
#line 162 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 125, (MR_String) "type_ctor_infos", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79);
    }
#line 169 "mercury_compile_middle_passes.m"
    {
#line 169 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81);
    }
#line 170 "mercury_compile_middle_passes.m"
    {
#line 170 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, (MR_Integer) 130, (MR_String) "warn_dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85);
    }
#line 172 "mercury_compile_middle_passes.m"
    {
#line 172 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, top_level__mercury_compile_middle_passes__ModuleName_8, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_87_87);
    }
#line 174 "mercury_compile_middle_passes.m"
    {
#line 174 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89);
    }
#line 175 "mercury_compile_middle_passes.m"
    {
#line 175 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89, (MR_Integer) 133, (MR_String) "untupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_87_87, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_93_93);
    }
#line 177 "mercury_compile_middle_passes.m"
    {
#line 177 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95);
    }
#line 178 "mercury_compile_middle_passes.m"
    {
#line 178 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95, (MR_Integer) 134, (MR_String) "tupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_93_93, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_99_99);
    }
#line 180 "mercury_compile_middle_passes.m"
    {
#line 180 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101);
    }
#line 181 "mercury_compile_middle_passes.m"
    {
#line 181 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_99_99, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_105_105);
    }
#line 183 "mercury_compile_middle_passes.m"
    {
#line 183 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107);
    }
#line 184 "mercury_compile_middle_passes.m"
    {
#line 184 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107, (MR_Integer) 137, (MR_String) "ssdb", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_105_105, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_111_111);
    }
#line 186 "mercury_compile_middle_passes.m"
    {
#line 186 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113);
    }
#line 187 "mercury_compile_middle_passes.m"
    {
#line 187 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113, (MR_Integer) 140, (MR_String) "accum", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_111_111, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_117_117);
    }
#line 189 "mercury_compile_middle_passes.m"
    {
#line 189 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119);
    }
#line 190 "mercury_compile_middle_passes.m"
    {
#line 190 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_117_117, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_123_123);
    }
#line 194 "mercury_compile_middle_passes.m"
    {
#line 194 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_123_123, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_126_126);
    }
#line 195 "mercury_compile_middle_passes.m"
    {
#line 195 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_126_126, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_130_130);
    }
#line 197 "mercury_compile_middle_passes.m"
    {
#line 197 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132);
    }
#line 198 "mercury_compile_middle_passes.m"
    {
#line 198 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_130_130, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_136_136);
    }
#line 200 "mercury_compile_middle_passes.m"
    {
#line 200 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138);
    }
#line 201 "mercury_compile_middle_passes.m"
    {
#line 201 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138, (MR_Integer) 160, (MR_String) "delay_construct", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_136_136, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_142_142);
    }
#line 203 "mercury_compile_middle_passes.m"
    {
#line 203 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144);
    }
#line 204 "mercury_compile_middle_passes.m"
    {
#line 204 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_142_142, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_148_148);
    }
#line 206 "mercury_compile_middle_passes.m"
    {
#line 206 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150);
    }
#line 207 "mercury_compile_middle_passes.m"
    {
#line 207 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_148_148, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_154_154);
    }
#line 209 "mercury_compile_middle_passes.m"
    {
#line 209 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156);
    }
#line 210 "mercury_compile_middle_passes.m"
    {
#line 210 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_154_154, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_160_160);
    }
#line 212 "mercury_compile_middle_passes.m"
    {
#line 212 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162);
    }
#line 213 "mercury_compile_middle_passes.m"
    {
#line 213 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_160_160, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_166_166);
    }
#line 215 "mercury_compile_middle_passes.m"
    {
#line 215 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168);
    }
#line 216 "mercury_compile_middle_passes.m"
    {
#line 216 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168, (MR_Integer) 170, (MR_String) "unneeded_code", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_166_166, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_172_172);
    }
#line 218 "mercury_compile_middle_passes.m"
    {
#line 218 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_15);
    }
#line 220 "mercury_compile_middle_passes.m"
    {
#line 220 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_172_172, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_181_181);
    }
#line 223 "mercury_compile_middle_passes.m"
    {
#line 223 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183);
    }
#line 224 "mercury_compile_middle_passes.m"
    {
#line 224 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183, (MR_Integer) 173, (MR_String) "implicit_parallelism", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_181_181, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_187_187);
    }
#line 226 "mercury_compile_middle_passes.m"
    {
#line 226 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189);
    }
#line 227 "mercury_compile_middle_passes.m"
    {
#line 227 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_187_187, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_193_193);
    }
#line 229 "mercury_compile_middle_passes.m"
    {
#line 229 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195);
    }
#line 230 "mercury_compile_middle_passes.m"
    {
#line 230 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195, (MR_Integer) 200, (MR_String) "granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_193_193, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_199_199);
    }
#line 232 "mercury_compile_middle_passes.m"
    {
#line 232 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201);
    }
#line 233 "mercury_compile_middle_passes.m"
    {
#line 233 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201, (MR_Integer) 201, (MR_String) "distance_granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_199_199, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_205_205);
    }
#line 235 "mercury_compile_middle_passes.m"
    {
#line 235 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207);
    }
#line 236 "mercury_compile_middle_passes.m"
    {
#line 236 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207, (MR_Integer) 205, (MR_String) "dependent_par_conj", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_205_205, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_211_211);
    }
#line 238 "mercury_compile_middle_passes.m"
    {
#line 238 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213);
    }
#line 239 "mercury_compile_middle_passes.m"
    {
#line 239 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213, (MR_Integer) 206, (MR_String) "par_loop_control", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_211_211, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_217_217);
    }
#line 241 "mercury_compile_middle_passes.m"
    {
#line 241 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219);
    }
#line 242 "mercury_compile_middle_passes.m"
    {
#line 242 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219, (MR_Integer) 210, (MR_String) "lco", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_217_217, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_223_223);
    }
#line 244 "mercury_compile_middle_passes.m"
    {
#line 244 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225);
    }
#line 245 "mercury_compile_middle_passes.m"
    {
#line 245 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225, (MR_Integer) 213, (MR_String) "float_reg_wrapper", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_223_223, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_229_229);
    }
#line 252 "mercury_compile_middle_passes.m"
    {
#line 252 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_16);
    }
#line 254 "mercury_compile_middle_passes.m"
    {
#line 254 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_229_229, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_238_238);
    }
#line 260 "mercury_compile_middle_passes.m"
    {
#line 260 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240);
    }
#line 261 "mercury_compile_middle_passes.m"
    {
#line 261 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240, (MR_Integer) 220, (MR_String) "term_size_prof", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_238_238, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_244_244);
    }
#line 266 "mercury_compile_middle_passes.m"
    {
#line 266 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246);
    }
#line 267 "mercury_compile_middle_passes.m"
    {
#line 267 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246, (MR_Integer) 225, (MR_String) "deep_profiling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_244_244, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_250_250);
    }
#line 272 "mercury_compile_middle_passes.m"
    {
#line 272 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252);
    }
#line 273 "mercury_compile_middle_passes.m"
    {
#line 273 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252, (MR_Integer) 230, (MR_String) "complexity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_250_250, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_256_256);
    }
#line 276 "mercury_compile_middle_passes.m"
    {
#line 276 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258);
    }
#line 277 "mercury_compile_middle_passes.m"
    {
#line 277 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258, (MR_Integer) 240, (MR_String) "region_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_256_256, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_262_262);
    }
#line 279 "mercury_compile_middle_passes.m"
    {
#line 279 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
    }
#line 280 "mercury_compile_middle_passes.m"
    {
#line 280 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, (MR_Integer) 250, (MR_String) "dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_262_262, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_268_268);
    }
#line 282 "mercury_compile_middle_passes.m"
    {
#line 282 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, (MR_Integer) 299, (MR_String) "middle_pass", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_268_268, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20);
#line 282 "mercury_compile_middle_passes.m"
      return;
    }
#line 111 "mercury_compile_middle_passes.m"
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
