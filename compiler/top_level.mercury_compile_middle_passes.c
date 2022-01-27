/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version rotd-2015-10-06
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
#include "backend_libs.mih"
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
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




#line 215 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 800 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__800__1_2_p_0(
#line 800 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 800 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 1455 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1436 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1428 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1415 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1395 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1386 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1356 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1334 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1314 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1297 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1285 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 1240 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1196 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1177 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1157 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1147 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1136 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1118 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1074 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1055 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1045 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1034 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 991 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 991 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 991 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 991 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 991 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 982 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6);

#line 965 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);

#line 938 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 938 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 938 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 938 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 938 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 918 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8);

#line 906 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 906 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 906 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 906 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 906 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);

#line 884 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 884 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 884 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 884 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 884 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 863 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 863 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 863 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 863 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 863 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 828 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 828 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 828 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 828 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 828 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);

#line 809 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 809 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 809 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 809 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 809 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 800 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 800 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg);

#line 786 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 786 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 786 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 786 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 786 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 748 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_9,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_10,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_11,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_12,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22);

#line 709 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 709 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 709 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 709 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 709 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 689 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 689 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 689 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 689 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 689 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 664 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 664 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 664 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 664 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 664 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 639 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 639 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 639 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 639 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 639 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 621 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 621 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 621 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 621 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 621 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 603 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 603 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 603 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 603 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 603 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 591 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 591 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 591 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 591 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 591 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 579 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 579 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 579 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 579 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 579 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 567 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 567 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 567 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 567 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 567 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 552 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 552 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 552 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 552 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 552 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 503 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 503 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 503 "mercury_compile_middle_passes.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1012 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 800 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__800__1_2_p_0(
#line 800 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 800 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36)
#line 800 "mercury_compile_middle_passes.m"
{
#line 800 "mercury_compile_middle_passes.m"
  {
#line 800 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HeadVar__1_35 == top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 800 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 800 "mercury_compile_middle_passes.m"
  }
#line 800 "mercury_compile_middle_passes.m"
}

#line 1455 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1455 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1455 "mercury_compile_middle_passes.m"
{
#line 1458 "mercury_compile_middle_passes.m"
  {
#line 1458 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1458 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1458 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Dead_12;

#line 1459 "mercury_compile_middle_passes.m"
    {
#line 1459 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1460 "mercury_compile_middle_passes.m"
    {
#line 1460 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 382, &top_level__mercury_compile_middle_passes__Dead_12);
    }
#line 1469 "mercury_compile_middle_passes.m"
#line 1469 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Dead_12) {
#line 1469 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1469 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1470 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1469 "mercury_compile_middle_passes.m"
        break;
#line 1469 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1462 "mercury_compile_middle_passes.m"
        {
#line 1466 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_13;

#line 1463 "mercury_compile_middle_passes.m"
          {
#line 1463 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Eliminating dead procedures...\n");
          }
#line 1464 "mercury_compile_middle_passes.m"
          {
#line 1464 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1466 "mercury_compile_middle_passes.m"
          {
#line 1466 "mercury_compile_middle_passes.m"
            transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 0, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, &top_level__mercury_compile_middle_passes___ElimSpecs_13);
          }
#line 1467 "mercury_compile_middle_passes.m"
          {
#line 1467 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1468 "mercury_compile_middle_passes.m"
          {
#line 1468 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1468 "mercury_compile_middle_passes.m"
            return;
          }
#line 1462 "mercury_compile_middle_passes.m"
        }
#line 1469 "mercury_compile_middle_passes.m"
        break;
#line 1469 "mercury_compile_middle_passes.m"
    }
#line 1458 "mercury_compile_middle_passes.m"
  }
#line 1455 "mercury_compile_middle_passes.m"
}

#line 1436 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1436 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1436 "mercury_compile_middle_passes.m"
{
#line 1439 "mercury_compile_middle_passes.m"
  {
#line 1439 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1439 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1439 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Analysis_12;

#line 1440 "mercury_compile_middle_passes.m"
    {
#line 1440 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1441 "mercury_compile_middle_passes.m"
    {
#line 1441 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 400, &top_level__mercury_compile_middle_passes__Analysis_12);
    }
#line 1449 "mercury_compile_middle_passes.m"
#line 1449 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Analysis_12) {
#line 1449 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1449 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1450 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1449 "mercury_compile_middle_passes.m"
        break;
#line 1449 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1443 "mercury_compile_middle_passes.m"
        {
#line 1444 "mercury_compile_middle_passes.m"
          {
#line 1444 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing regions ...\n");
          }
#line 1445 "mercury_compile_middle_passes.m"
          {
#line 1445 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1446 "mercury_compile_middle_passes.m"
          {
#line 1446 "mercury_compile_middle_passes.m"
            transform_hlds__rbmm__do_region_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1447 "mercury_compile_middle_passes.m"
          {
#line 1447 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1448 "mercury_compile_middle_passes.m"
          {
#line 1448 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1448 "mercury_compile_middle_passes.m"
            return;
          }
#line 1443 "mercury_compile_middle_passes.m"
        }
#line 1449 "mercury_compile_middle_passes.m"
        break;
#line 1449 "mercury_compile_middle_passes.m"
    }
#line 1439 "mercury_compile_middle_passes.m"
  }
#line 1436 "mercury_compile_middle_passes.m"
}

#line 1428 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1428 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1428 "mercury_compile_middle_passes.m"
{
#line 1428 "mercury_compile_middle_passes.m"
  {
#line 1428 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1428 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5;
#line 1428 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7;

#line 1428 "mercury_compile_middle_passes.m"
    {
#line 1428 "mercury_compile_middle_passes.m"
      transform_hlds__complexity__complexity_process_proc_msg_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7);
    }
#line 1428 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5));
#line 1428 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7));
#line 1428 "mercury_compile_middle_passes.m"
  }
#line 1428 "mercury_compile_middle_passes.m"
}

#line 1415 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1415 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1415 "mercury_compile_middle_passes.m"
{
#line 1418 "mercury_compile_middle_passes.m"
  {
#line 1418 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1418 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_11;

#line 1419 "mercury_compile_middle_passes.m"
    {
#line 1419 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_11);
    }
#line 1422 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeNumProcMap_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1421 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1422 "mercury_compile_middle_passes.m"
    else
#line 1423 "mercury_compile_middle_passes.m"
      {
#line 1423 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumProcs_12;
#line 1423 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__ProcMap_13;
#line 1423 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_11, (MR_Integer) 0)));
#line 1423 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_22_22;
#line 1423 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_24_24;

#line 1423 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__NumProcs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 0)));
#line 1423 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__ProcMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 1)));
#line 1424 "mercury_compile_middle_passes.m"
        {
#line 1424 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying complexity experiment transformation...\n");
        }
#line 1426 "mercury_compile_middle_passes.m"
        {
#line 1426 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1428 "mercury_compile_middle_passes.m"
        {
#line 1428 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_9[0]));
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1));
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__NumProcs_12));
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 4) = ((MR_Box) (top_level__mercury_compile_middle_passes__ProcMap_13));
#line 1428 "mercury_compile_middle_passes.m"
        }
#line 1428 "mercury_compile_middle_passes.m"
        {
#line 1428 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1428 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_22_22, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_24_24));
#line 1428 "mercury_compile_middle_passes.m"
        }
#line 1427 "mercury_compile_middle_passes.m"
        {
#line 1427 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);
        }
#line 1430 "mercury_compile_middle_passes.m"
        {
#line 1430 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1431 "mercury_compile_middle_passes.m"
        {
#line 1431 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1431 "mercury_compile_middle_passes.m"
          return;
        }
#line 1423 "mercury_compile_middle_passes.m"
      }
#line 1418 "mercury_compile_middle_passes.m"
  }
#line 1415 "mercury_compile_middle_passes.m"
}

#line 1395 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1395 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1395 "mercury_compile_middle_passes.m"
{
#line 1398 "mercury_compile_middle_passes.m"
  {
#line 1398 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1398 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1398 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ProfileDeep_12;

#line 1399 "mercury_compile_middle_passes.m"
    {
#line 1399 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1400 "mercury_compile_middle_passes.m"
    {
#line 1400 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 192, &top_level__mercury_compile_middle_passes__ProfileDeep_12);
    }
#line 1409 "mercury_compile_middle_passes.m"
#line 1409 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ProfileDeep_12) {
#line 1409 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1409 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1410 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1409 "mercury_compile_middle_passes.m"
        break;
#line 1409 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1402 "mercury_compile_middle_passes.m"
        {
#line 1403 "mercury_compile_middle_passes.m"
          {
#line 1403 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying deep profiling transformation...\n");
          }
#line 1405 "mercury_compile_middle_passes.m"
          {
#line 1405 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1406 "mercury_compile_middle_passes.m"
          {
#line 1406 "mercury_compile_middle_passes.m"
            ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1407 "mercury_compile_middle_passes.m"
          {
#line 1407 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1408 "mercury_compile_middle_passes.m"
          {
#line 1408 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1408 "mercury_compile_middle_passes.m"
            return;
          }
#line 1402 "mercury_compile_middle_passes.m"
        }
#line 1409 "mercury_compile_middle_passes.m"
        break;
#line 1409 "mercury_compile_middle_passes.m"
    }
#line 1398 "mercury_compile_middle_passes.m"
  }
#line 1395 "mercury_compile_middle_passes.m"
}

#line 1386 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1386 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1386 "mercury_compile_middle_passes.m"
{
#line 1386 "mercury_compile_middle_passes.m"
  {
#line 1386 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1386 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 1386 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 1386 "mercury_compile_middle_passes.m"
    {
#line 1386 "mercury_compile_middle_passes.m"
      transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 1386 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 1386 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 1386 "mercury_compile_middle_passes.m"
  }
#line 1386 "mercury_compile_middle_passes.m"
}

#line 1356 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1356 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1356 "mercury_compile_middle_passes.m"
{
#line 1359 "mercury_compile_middle_passes.m"
  {
#line 1359 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1359 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1359 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsWords_12;
#line 1359 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsCells_13;
#line 1359 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeTransform_14;

#line 1360 "mercury_compile_middle_passes.m"
    {
#line 1360 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1361 "mercury_compile_middle_passes.m"
    {
#line 1361 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 209, &top_level__mercury_compile_middle_passes__AsWords_12);
    }
#line 1362 "mercury_compile_middle_passes.m"
    {
#line 1362 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__AsCells_13);
    }
#line 1367 "mercury_compile_middle_passes.m"
#line 1367 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__AsWords_12) {
#line 1367 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1367 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1367 "mercury_compile_middle_passes.m"
#line 1367 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__AsCells_13) {
#line 1367 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1367 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1378 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1367 "mercury_compile_middle_passes.m"
            break;
#line 1367 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1372 "mercury_compile_middle_passes.m"
            {
#line 1374 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[2]);
#line 1372 "mercury_compile_middle_passes.m"
            }
#line 1367 "mercury_compile_middle_passes.m"
            break;
#line 1367 "mercury_compile_middle_passes.m"
        }
#line 1367 "mercury_compile_middle_passes.m"
        break;
#line 1367 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1367 "mercury_compile_middle_passes.m"
#line 1367 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__AsCells_13) {
#line 1367 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1367 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1368 "mercury_compile_middle_passes.m"
            {
#line 1370 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[3]);
#line 1368 "mercury_compile_middle_passes.m"
            }
#line 1367 "mercury_compile_middle_passes.m"
            break;
#line 1367 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1364 "mercury_compile_middle_passes.m"
            {
#line 1366 "mercury_compile_middle_passes.m"
              {
#line 1366 "mercury_compile_middle_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", (MR_String) "as_words and as_cells");
#line 1366 "mercury_compile_middle_passes.m"
                return;
              }
#line 1364 "mercury_compile_middle_passes.m"
            }
#line 1367 "mercury_compile_middle_passes.m"
            break;
#line 1367 "mercury_compile_middle_passes.m"
        }
#line 1367 "mercury_compile_middle_passes.m"
        break;
#line 1367 "mercury_compile_middle_passes.m"
    }
#line 1389 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeTransform_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1390 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1389 "mercury_compile_middle_passes.m"
    else
#line 1381 "mercury_compile_middle_passes.m"
      {
#line 1381 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Transform_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeTransform_14, (MR_Integer) 0)));
#line 1381 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_30_30;
#line 1381 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_32_32;

#line 1382 "mercury_compile_middle_passes.m"
        {
#line 1382 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying term size profiling transformation...\n");
        }
#line 1384 "mercury_compile_middle_passes.m"
        {
#line 1384 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1386 "mercury_compile_middle_passes.m"
        {
#line 1386 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1386 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]));
#line 1386 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1));
#line 1386 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1386 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__Transform_15));
#line 1386 "mercury_compile_middle_passes.m"
        }
#line 1386 "mercury_compile_middle_passes.m"
        {
#line 1386 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1386 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_32_32));
#line 1386 "mercury_compile_middle_passes.m"
        }
#line 1385 "mercury_compile_middle_passes.m"
        {
#line 1385 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 1387 "mercury_compile_middle_passes.m"
        {
#line 1387 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1388 "mercury_compile_middle_passes.m"
        {
#line 1388 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1388 "mercury_compile_middle_passes.m"
          return;
        }
#line 1381 "mercury_compile_middle_passes.m"
      }
#line 1359 "mercury_compile_middle_passes.m"
  }
#line 1356 "mercury_compile_middle_passes.m"
}

#line 1334 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1334 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1334 "mercury_compile_middle_passes.m"
{
#line 1337 "mercury_compile_middle_passes.m"
  {
#line 1337 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1337 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1337 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UseFloatRegs_12;

#line 1338 "mercury_compile_middle_passes.m"
    {
#line 1338 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1339 "mercury_compile_middle_passes.m"
    {
#line 1339 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 250, &top_level__mercury_compile_middle_passes__UseFloatRegs_12);
    }
#line 1350 "mercury_compile_middle_passes.m"
#line 1350 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__UseFloatRegs_12) {
#line 1350 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1350 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1351 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1350 "mercury_compile_middle_passes.m"
        break;
#line 1350 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1341 "mercury_compile_middle_passes.m"
        {
#line 1341 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_13;
#line 1341 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_15;
#line 1341 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24;
#line 1346 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_14;

#line 1342 "mercury_compile_middle_passes.m"
          {
#line 1342 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inserting float register wrappers...");
          }
#line 1344 "mercury_compile_middle_passes.m"
          {
#line 1344 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1345 "mercury_compile_middle_passes.m"
          {
#line 1345 "mercury_compile_middle_passes.m"
            transform_hlds__float_regs__insert_reg_wrappers_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_middle_passes__Specs_13);
          }
#line 1346 "mercury_compile_middle_passes.m"
          {
#line 1346 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_13, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_14, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_15);
          }
#line 1347 "mercury_compile_middle_passes.m"
          {
#line 1347 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
          }
#line 1348 "mercury_compile_middle_passes.m"
          {
#line 1348 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
          }
#line 1349 "mercury_compile_middle_passes.m"
          {
#line 1349 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1349 "mercury_compile_middle_passes.m"
            return;
          }
#line 1341 "mercury_compile_middle_passes.m"
        }
#line 1350 "mercury_compile_middle_passes.m"
        break;
#line 1350 "mercury_compile_middle_passes.m"
    }
#line 1337 "mercury_compile_middle_passes.m"
  }
#line 1334 "mercury_compile_middle_passes.m"
}

#line 1314 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1314 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1314 "mercury_compile_middle_passes.m"
{
#line 1317 "mercury_compile_middle_passes.m"
  {
#line 1317 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1317 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1317 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopControl_12;

#line 1318 "mercury_compile_middle_passes.m"
    {
#line 1318 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1319 "mercury_compile_middle_passes.m"
    {
#line 1319 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 663, &top_level__mercury_compile_middle_passes__LoopControl_12);
    }
#line 1328 "mercury_compile_middle_passes.m"
#line 1328 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__LoopControl_12) {
#line 1328 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1328 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1329 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1328 "mercury_compile_middle_passes.m"
        break;
#line 1328 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1321 "mercury_compile_middle_passes.m"
        {
#line 1322 "mercury_compile_middle_passes.m"
          {
#line 1322 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying parallel loop control transformation...\n");
          }
#line 1324 "mercury_compile_middle_passes.m"
          {
#line 1324 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1325 "mercury_compile_middle_passes.m"
          {
#line 1325 "mercury_compile_middle_passes.m"
            transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1326 "mercury_compile_middle_passes.m"
          {
#line 1326 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1327 "mercury_compile_middle_passes.m"
          {
#line 1327 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1327 "mercury_compile_middle_passes.m"
            return;
          }
#line 1321 "mercury_compile_middle_passes.m"
        }
#line 1328 "mercury_compile_middle_passes.m"
        break;
#line 1328 "mercury_compile_middle_passes.m"
    }
#line 1317 "mercury_compile_middle_passes.m"
  }
#line 1314 "mercury_compile_middle_passes.m"
}

#line 1297 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1297 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1297 "mercury_compile_middle_passes.m"
{
#line 1297 "mercury_compile_middle_passes.m"
  {
#line 1297 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1297 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1297 "mercury_compile_middle_passes.m"
    {
#line 1297 "mercury_compile_middle_passes.m"
      transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1297 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1297 "mercury_compile_middle_passes.m"
  }
#line 1297 "mercury_compile_middle_passes.m"
}

#line 1285 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1285 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 1285 "mercury_compile_middle_passes.m"
{
#line 1288 "mercury_compile_middle_passes.m"
  {
#line 1288 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_11;

#line 1289 "mercury_compile_middle_passes.m"
    {
#line 1289 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__HasParallelConj_11);
    }
#line 1308 "mercury_compile_middle_passes.m"
#line 1308 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__HasParallelConj_11) {
#line 1308 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1308 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1309 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 1308 "mercury_compile_middle_passes.m"
        break;
#line 1308 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1291 "mercury_compile_middle_passes.m"
        {
#line 1291 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 1291 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__SupportsParConj_13;

#line 1292 "mercury_compile_middle_passes.m"
          {
#line 1292 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_12);
          }
#line 1293 "mercury_compile_middle_passes.m"
          {
#line 1293 "mercury_compile_middle_passes.m"
            libs__globals__current_grade_supports_par_conj_2_p_0(top_level__mercury_compile_middle_passes__Globals_12, &top_level__mercury_compile_middle_passes__SupportsParConj_13);
          }
#line 1298 "mercury_compile_middle_passes.m"
#line 1298 "mercury_compile_middle_passes.m"
          switch (top_level__mercury_compile_middle_passes__SupportsParConj_13) {
#line 1298 "mercury_compile_middle_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1298 "mercury_compile_middle_passes.m"
            case (MR_Integer) 0:
#line 1295 "mercury_compile_middle_passes.m"
              {
#line 1296 "mercury_compile_middle_passes.m"
                {
#line 1296 "mercury_compile_middle_passes.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[1]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 1296 "mercury_compile_middle_passes.m"
                  return;
                }
#line 1295 "mercury_compile_middle_passes.m"
              }
#line 1298 "mercury_compile_middle_passes.m"
              break;
#line 1298 "mercury_compile_middle_passes.m"
            case (MR_Integer) 1:
#line 1299 "mercury_compile_middle_passes.m"
              {
#line 1299 "mercury_compile_middle_passes.m"
                MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 1304 "mercury_compile_middle_passes.m"
                MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_14;

#line 1300 "mercury_compile_middle_passes.m"
                {
#line 1300 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Dependent parallel conjunction transformation...\n");
                }
#line 1302 "mercury_compile_middle_passes.m"
                {
#line 1302 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
                }
#line 1303 "mercury_compile_middle_passes.m"
                {
#line 1303 "mercury_compile_middle_passes.m"
                  transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
                }
#line 1304 "mercury_compile_middle_passes.m"
                {
#line 1304 "mercury_compile_middle_passes.m"
                  transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16, &top_level__mercury_compile_middle_passes___ElimSpecs_14);
                }
#line 1305 "mercury_compile_middle_passes.m"
                {
#line 1305 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
                }
#line 1306 "mercury_compile_middle_passes.m"
                {
#line 1306 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1306 "mercury_compile_middle_passes.m"
                  return;
                }
#line 1299 "mercury_compile_middle_passes.m"
              }
#line 1298 "mercury_compile_middle_passes.m"
              break;
#line 1298 "mercury_compile_middle_passes.m"
          }
#line 1291 "mercury_compile_middle_passes.m"
        }
#line 1308 "mercury_compile_middle_passes.m"
        break;
#line 1308 "mercury_compile_middle_passes.m"
    }
#line 1288 "mercury_compile_middle_passes.m"
  }
#line 1285 "mercury_compile_middle_passes.m"
}

#line 1240 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1240 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1240 "mercury_compile_middle_passes.m"
{
#line 1243 "mercury_compile_middle_passes.m"
  {
#line 1243 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1243 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1243 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1243 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1243 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Distance_14;
#line 1243 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_15;
#line 1251 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__V_24_24;

#line 1244 "mercury_compile_middle_passes.m"
    {
#line 1244 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1245 "mercury_compile_middle_passes.m"
    {
#line 1245 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 213, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1246 "mercury_compile_middle_passes.m"
    {
#line 1246 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 251, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1247 "mercury_compile_middle_passes.m"
    {
#line 1247 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 660, &top_level__mercury_compile_middle_passes__Distance_14);
    }
#line 1248 "mercury_compile_middle_passes.m"
    {
#line 1248 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__HasParallelConj_15);
    }
#line 1251 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1251 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1251 "mercury_compile_middle_passes.m"
      {
#line 1252 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HasParallelConj_15 == (MR_Integer) 0);
#line 1251 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1251 "mercury_compile_middle_passes.m"
          {
#line 1256 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1251 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1251 "mercury_compile_middle_passes.m"
              {
#line 1260 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__V_24_24 = (MR_Integer) 0;
#line 1260 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Distance_14 > top_level__mercury_compile_middle_passes__V_24_24);
#line 1251 "mercury_compile_middle_passes.m"
              }
#line 1251 "mercury_compile_middle_passes.m"
          }
#line 1251 "mercury_compile_middle_passes.m"
      }
#line 1279 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1262 "mercury_compile_middle_passes.m"
      {
#line 1262 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1262 "mercury_compile_middle_passes.m"
        {
#line 1262 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1271 "mercury_compile_middle_passes.m"
#line 1271 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__Target_16) {
#line 1271 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1271 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1264 "mercury_compile_middle_passes.m"
            {
#line 1265 "mercury_compile_middle_passes.m"
              {
#line 1265 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Distance granularity transformation...\n");
              }
#line 1267 "mercury_compile_middle_passes.m"
              {
#line 1267 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
              }
#line 1268 "mercury_compile_middle_passes.m"
              {
#line 1268 "mercury_compile_middle_passes.m"
                transform_hlds__distance_granularity__control_distance_granularity_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_middle_passes__Distance_14);
              }
#line 1269 "mercury_compile_middle_passes.m"
              {
#line 1269 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
              }
#line 1270 "mercury_compile_middle_passes.m"
              {
#line 1270 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1270 "mercury_compile_middle_passes.m"
                return;
              }
#line 1264 "mercury_compile_middle_passes.m"
            }
#line 1271 "mercury_compile_middle_passes.m"
            break;
#line 1271 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1272 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1271 "mercury_compile_middle_passes.m"
            break;
#line 1271 "mercury_compile_middle_passes.m"
          case (MR_Integer) 3:
#line 1274 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1271 "mercury_compile_middle_passes.m"
            break;
#line 1271 "mercury_compile_middle_passes.m"
          case (MR_Integer) 2:
#line 1273 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1271 "mercury_compile_middle_passes.m"
            break;
#line 1271 "mercury_compile_middle_passes.m"
        }
#line 1262 "mercury_compile_middle_passes.m"
      }
#line 1279 "mercury_compile_middle_passes.m"
    else
#line 1280 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1243 "mercury_compile_middle_passes.m"
  }
#line 1240 "mercury_compile_middle_passes.m"
}

#line 1196 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1196 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1196 "mercury_compile_middle_passes.m"
{
#line 1199 "mercury_compile_middle_passes.m"
  {
#line 1199 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1199 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1199 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1199 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1199 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Control_14;
#line 1199 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_15;

#line 1200 "mercury_compile_middle_passes.m"
    {
#line 1200 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1201 "mercury_compile_middle_passes.m"
    {
#line 1201 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 213, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1202 "mercury_compile_middle_passes.m"
    {
#line 1202 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 251, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1203 "mercury_compile_middle_passes.m"
    {
#line 1203 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 659, &top_level__mercury_compile_middle_passes__Control_14);
    }
#line 1204 "mercury_compile_middle_passes.m"
    {
#line 1204 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__HasParallelConj_15);
    }
#line 1207 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1207 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1207 "mercury_compile_middle_passes.m"
      {
#line 1208 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HasParallelConj_15 == (MR_Integer) 0);
#line 1207 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1207 "mercury_compile_middle_passes.m"
          {
#line 1212 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1207 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1215 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Control_14 == (MR_Integer) 1);
#line 1207 "mercury_compile_middle_passes.m"
          }
#line 1207 "mercury_compile_middle_passes.m"
      }
#line 1234 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1217 "mercury_compile_middle_passes.m"
      {
#line 1217 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1217 "mercury_compile_middle_passes.m"
        {
#line 1217 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1226 "mercury_compile_middle_passes.m"
#line 1226 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__Target_16) {
#line 1226 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1226 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1219 "mercury_compile_middle_passes.m"
            {
#line 1220 "mercury_compile_middle_passes.m"
              {
#line 1220 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Granularity control transformation...\n");
              }
#line 1222 "mercury_compile_middle_passes.m"
              {
#line 1222 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
              }
#line 1223 "mercury_compile_middle_passes.m"
              {
#line 1223 "mercury_compile_middle_passes.m"
                transform_hlds__granularity__control_granularity_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
              }
#line 1224 "mercury_compile_middle_passes.m"
              {
#line 1224 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
              }
#line 1225 "mercury_compile_middle_passes.m"
              {
#line 1225 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1225 "mercury_compile_middle_passes.m"
                return;
              }
#line 1219 "mercury_compile_middle_passes.m"
            }
#line 1226 "mercury_compile_middle_passes.m"
            break;
#line 1226 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1227 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1226 "mercury_compile_middle_passes.m"
            break;
#line 1226 "mercury_compile_middle_passes.m"
          case (MR_Integer) 3:
#line 1229 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1226 "mercury_compile_middle_passes.m"
            break;
#line 1226 "mercury_compile_middle_passes.m"
          case (MR_Integer) 2:
#line 1228 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1226 "mercury_compile_middle_passes.m"
            break;
#line 1226 "mercury_compile_middle_passes.m"
        }
#line 1217 "mercury_compile_middle_passes.m"
      }
#line 1234 "mercury_compile_middle_passes.m"
    else
#line 1235 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1199 "mercury_compile_middle_passes.m"
  }
#line 1196 "mercury_compile_middle_passes.m"
}

#line 1177 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1177 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1177 "mercury_compile_middle_passes.m"
{
#line 1180 "mercury_compile_middle_passes.m"
  {
#line 1180 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1180 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1180 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_12;

#line 1181 "mercury_compile_middle_passes.m"
    {
#line 1181 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1182 "mercury_compile_middle_passes.m"
    {
#line 1182 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 391, &top_level__mercury_compile_middle_passes__TablingAnalysis_12);
    }
#line 1190 "mercury_compile_middle_passes.m"
#line 1190 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TablingAnalysis_12) {
#line 1190 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1190 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1191 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1190 "mercury_compile_middle_passes.m"
        break;
#line 1190 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1184 "mercury_compile_middle_passes.m"
        {
#line 1185 "mercury_compile_middle_passes.m"
          {
#line 1185 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing minimal model tabling...\n");
          }
#line 1187 "mercury_compile_middle_passes.m"
          {
#line 1187 "mercury_compile_middle_passes.m"
            transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1188 "mercury_compile_middle_passes.m"
          {
#line 1188 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1189 "mercury_compile_middle_passes.m"
          {
#line 1189 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1189 "mercury_compile_middle_passes.m"
            return;
          }
#line 1184 "mercury_compile_middle_passes.m"
        }
#line 1190 "mercury_compile_middle_passes.m"
        break;
#line 1190 "mercury_compile_middle_passes.m"
    }
#line 1180 "mercury_compile_middle_passes.m"
  }
#line 1177 "mercury_compile_middle_passes.m"
}

#line 1157 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1157 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1157 "mercury_compile_middle_passes.m"
{
#line 1160 "mercury_compile_middle_passes.m"
  {
#line 1160 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1160 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1160 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LCO_12;

#line 1161 "mercury_compile_middle_passes.m"
    {
#line 1161 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1162 "mercury_compile_middle_passes.m"
    {
#line 1162 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 359, &top_level__mercury_compile_middle_passes__LCO_12);
    }
#line 1171 "mercury_compile_middle_passes.m"
#line 1171 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__LCO_12) {
#line 1171 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1171 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1172 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1171 "mercury_compile_middle_passes.m"
        break;
#line 1171 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1164 "mercury_compile_middle_passes.m"
        {
#line 1165 "mercury_compile_middle_passes.m"
          {
#line 1165 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Looking for LCO modulo constructor application ...\n");
          }
#line 1167 "mercury_compile_middle_passes.m"
          {
#line 1167 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1168 "mercury_compile_middle_passes.m"
          {
#line 1168 "mercury_compile_middle_passes.m"
            transform_hlds__lco__lco_modulo_constructors_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1169 "mercury_compile_middle_passes.m"
          {
#line 1169 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1170 "mercury_compile_middle_passes.m"
          {
#line 1170 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1170 "mercury_compile_middle_passes.m"
            return;
          }
#line 1164 "mercury_compile_middle_passes.m"
        }
#line 1171 "mercury_compile_middle_passes.m"
        break;
#line 1171 "mercury_compile_middle_passes.m"
    }
#line 1160 "mercury_compile_middle_passes.m"
  }
#line 1157 "mercury_compile_middle_passes.m"
}

#line 1147 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1147 "mercury_compile_middle_passes.m"
{
#line 1147 "mercury_compile_middle_passes.m"
  {
#line 1147 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1147 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3;
#line 1147 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5;

#line 1147 "mercury_compile_middle_passes.m"
    {
#line 1147 "mercury_compile_middle_passes.m"
      transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5);
    }
#line 1147 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3));
#line 1147 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5));
#line 1147 "mercury_compile_middle_passes.m"
  }
#line 1147 "mercury_compile_middle_passes.m"
}

#line 1136 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1136 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1136 "mercury_compile_middle_passes.m"
{
#line 1139 "mercury_compile_middle_passes.m"
  {
#line 1139 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1139 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1139 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UnneededCode_12;

#line 1140 "mercury_compile_middle_passes.m"
    {
#line 1140 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1141 "mercury_compile_middle_passes.m"
    {
#line 1141 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 350, &top_level__mercury_compile_middle_passes__UnneededCode_12);
    }
#line 1151 "mercury_compile_middle_passes.m"
#line 1151 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__UnneededCode_12) {
#line 1151 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1151 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1152 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1151 "mercury_compile_middle_passes.m"
        break;
#line 1151 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1143 "mercury_compile_middle_passes.m"
        {
#line 1144 "mercury_compile_middle_passes.m"
          {
#line 1144 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Removing unneeded code from procedure bodies...\n");
          }
#line 1146 "mercury_compile_middle_passes.m"
          {
#line 1146 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1147 "mercury_compile_middle_passes.m"
          {
#line 1147 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[3]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1149 "mercury_compile_middle_passes.m"
          {
#line 1149 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1150 "mercury_compile_middle_passes.m"
          {
#line 1150 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1150 "mercury_compile_middle_passes.m"
            return;
          }
#line 1143 "mercury_compile_middle_passes.m"
        }
#line 1151 "mercury_compile_middle_passes.m"
        break;
#line 1151 "mercury_compile_middle_passes.m"
    }
#line 1139 "mercury_compile_middle_passes.m"
  }
#line 1136 "mercury_compile_middle_passes.m"
}

#line 1118 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1118 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1118 "mercury_compile_middle_passes.m"
{
#line 1121 "mercury_compile_middle_passes.m"
  {
#line 1121 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1121 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1121 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalyseTrail_12;

#line 1122 "mercury_compile_middle_passes.m"
    {
#line 1122 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1123 "mercury_compile_middle_passes.m"
    {
#line 1123 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 388, &top_level__mercury_compile_middle_passes__AnalyseTrail_12);
    }
#line 1130 "mercury_compile_middle_passes.m"
#line 1130 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__AnalyseTrail_12) {
#line 1130 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1130 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1131 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1130 "mercury_compile_middle_passes.m"
        break;
#line 1130 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1125 "mercury_compile_middle_passes.m"
        {
#line 1126 "mercury_compile_middle_passes.m"
          {
#line 1126 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing trail usage...\n");
          }
#line 1127 "mercury_compile_middle_passes.m"
          {
#line 1127 "mercury_compile_middle_passes.m"
            transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1128 "mercury_compile_middle_passes.m"
          {
#line 1128 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Trail usage analysis done.\n");
          }
#line 1129 "mercury_compile_middle_passes.m"
          {
#line 1129 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1129 "mercury_compile_middle_passes.m"
            return;
          }
#line 1125 "mercury_compile_middle_passes.m"
        }
#line 1130 "mercury_compile_middle_passes.m"
        break;
#line 1130 "mercury_compile_middle_passes.m"
    }
#line 1121 "mercury_compile_middle_passes.m"
  }
#line 1118 "mercury_compile_middle_passes.m"
}

#line 1074 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1074 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1074 "mercury_compile_middle_passes.m"
{
#line 1077 "mercury_compile_middle_passes.m"
  {
#line 1077 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1077 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1077 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;

#line 1078 "mercury_compile_middle_passes.m"
    {
#line 1078 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1079 "mercury_compile_middle_passes.m"
    {
#line 1079 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 403, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 1088 "mercury_compile_middle_passes.m"
#line 1088 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ReuseAnalysis_12) {
#line 1088 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1088 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1089 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1088 "mercury_compile_middle_passes.m"
        break;
#line 1088 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1082 "mercury_compile_middle_passes.m"
        {
#line 1083 "mercury_compile_middle_passes.m"
          {
#line 1083 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure reuse analysis...\n");
          }
#line 1084 "mercury_compile_middle_passes.m"
          {
#line 1084 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1085 "mercury_compile_middle_passes.m"
          {
#line 1085 "mercury_compile_middle_passes.m"
            transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1086 "mercury_compile_middle_passes.m"
          {
#line 1086 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1087 "mercury_compile_middle_passes.m"
          {
#line 1087 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1087 "mercury_compile_middle_passes.m"
            return;
          }
#line 1082 "mercury_compile_middle_passes.m"
        }
#line 1088 "mercury_compile_middle_passes.m"
        break;
#line 1088 "mercury_compile_middle_passes.m"
    }
#line 1077 "mercury_compile_middle_passes.m"
  }
#line 1074 "mercury_compile_middle_passes.m"
}

#line 1055 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1055 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1055 "mercury_compile_middle_passes.m"
{
#line 1058 "mercury_compile_middle_passes.m"
  {
#line 1058 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1058 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1058 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Sharing_12;

#line 1059 "mercury_compile_middle_passes.m"
    {
#line 1059 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1060 "mercury_compile_middle_passes.m"
    {
#line 1060 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 401, &top_level__mercury_compile_middle_passes__Sharing_12);
    }
#line 1068 "mercury_compile_middle_passes.m"
#line 1068 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Sharing_12) {
#line 1068 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1068 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1069 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1068 "mercury_compile_middle_passes.m"
        break;
#line 1068 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1062 "mercury_compile_middle_passes.m"
        {
#line 1063 "mercury_compile_middle_passes.m"
          {
#line 1063 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure sharing analysis...\n");
          }
#line 1064 "mercury_compile_middle_passes.m"
          {
#line 1064 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1065 "mercury_compile_middle_passes.m"
          {
#line 1065 "mercury_compile_middle_passes.m"
            transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1066 "mercury_compile_middle_passes.m"
          {
#line 1066 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1067 "mercury_compile_middle_passes.m"
          {
#line 1067 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1067 "mercury_compile_middle_passes.m"
            return;
          }
#line 1062 "mercury_compile_middle_passes.m"
        }
#line 1068 "mercury_compile_middle_passes.m"
        break;
#line 1068 "mercury_compile_middle_passes.m"
    }
#line 1058 "mercury_compile_middle_passes.m"
  }
#line 1055 "mercury_compile_middle_passes.m"
}

#line 1045 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1045 "mercury_compile_middle_passes.m"
{
#line 1045 "mercury_compile_middle_passes.m"
  {
#line 1045 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1045 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1045 "mercury_compile_middle_passes.m"
    {
#line 1045 "mercury_compile_middle_passes.m"
      transform_hlds__delay_construct__delay_construct_proc_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1045 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1045 "mercury_compile_middle_passes.m"
  }
#line 1045 "mercury_compile_middle_passes.m"
}

#line 1034 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1034 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1034 "mercury_compile_middle_passes.m"
{
#line 1037 "mercury_compile_middle_passes.m"
  {
#line 1037 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1037 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1037 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__DelayConstruct_12;

#line 1038 "mercury_compile_middle_passes.m"
    {
#line 1038 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1039 "mercury_compile_middle_passes.m"
    {
#line 1039 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 380, &top_level__mercury_compile_middle_passes__DelayConstruct_12);
    }
#line 1049 "mercury_compile_middle_passes.m"
#line 1049 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__DelayConstruct_12) {
#line 1049 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1049 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1050 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1049 "mercury_compile_middle_passes.m"
        break;
#line 1049 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1041 "mercury_compile_middle_passes.m"
        {
#line 1042 "mercury_compile_middle_passes.m"
          {
#line 1042 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Delaying construction unifications ...\n");
          }
#line 1044 "mercury_compile_middle_passes.m"
          {
#line 1044 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1045 "mercury_compile_middle_passes.m"
          {
#line 1045 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[0]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1047 "mercury_compile_middle_passes.m"
          {
#line 1047 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1048 "mercury_compile_middle_passes.m"
          {
#line 1048 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1048 "mercury_compile_middle_passes.m"
            return;
          }
#line 1041 "mercury_compile_middle_passes.m"
        }
#line 1049 "mercury_compile_middle_passes.m"
        break;
#line 1049 "mercury_compile_middle_passes.m"
    }
#line 1037 "mercury_compile_middle_passes.m"
  }
#line 1034 "mercury_compile_middle_passes.m"
}

#line 991 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 991 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 991 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 991 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 991 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 991 "mercury_compile_middle_passes.m"
{
#line 994 "mercury_compile_middle_passes.m"
  {
#line 994 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 994 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 994 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Deforest_12;
#line 994 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Constraints_13;

#line 995 "mercury_compile_middle_passes.m"
    {
#line 995 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 996 "mercury_compile_middle_passes.m"
    {
#line 996 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 383, &top_level__mercury_compile_middle_passes__Deforest_12);
    }
#line 999 "mercury_compile_middle_passes.m"
    {
#line 999 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 344, &top_level__mercury_compile_middle_passes__Constraints_13);
    }
#line 1002 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Deforest_12 == (MR_Integer) 1);
#line 1003 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1003 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 1);
#line 1028 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1022 "mercury_compile_middle_passes.m"
      {
#line 1022 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__Msg_14;

#line 1010 "mercury_compile_middle_passes.m"
#line 1010 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__Deforest_12) {
#line 1010 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1010 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1010 "mercury_compile_middle_passes.m"
#line 1010 "mercury_compile_middle_passes.m"
            switch (top_level__mercury_compile_middle_passes__Constraints_13) {
#line 1010 "mercury_compile_middle_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1010 "mercury_compile_middle_passes.m"
              case (MR_Integer) 0:
#line 1007 "mercury_compile_middle_passes.m"
                {
#line 1009 "mercury_compile_middle_passes.m"
                  {
#line 1009 "mercury_compile_middle_passes.m"
                    mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", (MR_String) "no no");
#line 1009 "mercury_compile_middle_passes.m"
                    return;
                  }
#line 1007 "mercury_compile_middle_passes.m"
                }
#line 1010 "mercury_compile_middle_passes.m"
                break;
#line 1010 "mercury_compile_middle_passes.m"
              case (MR_Integer) 1:
#line 1021 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Constraint propagation...\n";
#line 1010 "mercury_compile_middle_passes.m"
                break;
#line 1010 "mercury_compile_middle_passes.m"
            }
#line 1010 "mercury_compile_middle_passes.m"
            break;
#line 1010 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1010 "mercury_compile_middle_passes.m"
#line 1010 "mercury_compile_middle_passes.m"
            switch (top_level__mercury_compile_middle_passes__Constraints_13) {
#line 1010 "mercury_compile_middle_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1010 "mercury_compile_middle_passes.m"
              case (MR_Integer) 0:
#line 1017 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation...\n";
#line 1010 "mercury_compile_middle_passes.m"
                break;
#line 1010 "mercury_compile_middle_passes.m"
              case (MR_Integer) 1:
#line 1013 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation and constraint propagation...\n";
#line 1010 "mercury_compile_middle_passes.m"
                break;
#line 1010 "mercury_compile_middle_passes.m"
            }
#line 1010 "mercury_compile_middle_passes.m"
            break;
#line 1010 "mercury_compile_middle_passes.m"
        }
#line 1023 "mercury_compile_middle_passes.m"
        {
#line 1023 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Msg_14);
        }
#line 1024 "mercury_compile_middle_passes.m"
        {
#line 1024 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1025 "mercury_compile_middle_passes.m"
        {
#line 1025 "mercury_compile_middle_passes.m"
          transform_hlds__deforest__deforestation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
        }
#line 1026 "mercury_compile_middle_passes.m"
        {
#line 1026 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1027 "mercury_compile_middle_passes.m"
        {
#line 1027 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1027 "mercury_compile_middle_passes.m"
          return;
        }
#line 1022 "mercury_compile_middle_passes.m"
      }
#line 1028 "mercury_compile_middle_passes.m"
    else
#line 1029 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 994 "mercury_compile_middle_passes.m"
  }
#line 991 "mercury_compile_middle_passes.m"
}

#line 982 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 982 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6)
#line 982 "mercury_compile_middle_passes.m"
{
#line 982 "mercury_compile_middle_passes.m"
  {
#line 982 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 982 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 982 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 982 "mercury_compile_middle_passes.m"
    {
#line 982 "mercury_compile_middle_passes.m"
      transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 982 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 982 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 982 "mercury_compile_middle_passes.m"
  }
#line 982 "mercury_compile_middle_passes.m"
}

#line 965 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 965 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19)
#line 965 "mercury_compile_middle_passes.m"
{
#line 969 "mercury_compile_middle_passes.m"
  {
#line 969 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 969 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_14;
#line 969 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopInv_15;

#line 970 "mercury_compile_middle_passes.m"
    {
#line 970 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_14);
    }
#line 971 "mercury_compile_middle_passes.m"
    {
#line 971 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_14, (MR_Integer) 379, &top_level__mercury_compile_middle_passes__LoopInv_15);
    }
#line 985 "mercury_compile_middle_passes.m"
#line 985 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__LoopInv_15) {
#line 985 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 985 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 986 "mercury_compile_middle_passes.m"
        {
#line 986 "mercury_compile_middle_passes.m"
          *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 986 "mercury_compile_middle_passes.m"
          *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18;
#line 986 "mercury_compile_middle_passes.m"
        }
#line 985 "mercury_compile_middle_passes.m"
        break;
#line 985 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 973 "mercury_compile_middle_passes.m"
        {
#line 973 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;

#line 976 "mercury_compile_middle_passes.m"
          {
#line 976 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__Stats_10, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
          }
#line 977 "mercury_compile_middle_passes.m"
          {
#line 977 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 148, (MR_String) "mark_static", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
          }
#line 979 "mercury_compile_middle_passes.m"
          {
#line 979 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Hoisting loop invariants...\n");
          }
#line 980 "mercury_compile_middle_passes.m"
          {
#line 980 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
          }
#line 981 "mercury_compile_middle_passes.m"
          {
#line 981 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[2]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
          }
#line 983 "mercury_compile_middle_passes.m"
          {
#line 983 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% done.\n");
          }
#line 984 "mercury_compile_middle_passes.m"
          {
#line 984 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_10);
#line 984 "mercury_compile_middle_passes.m"
            return;
          }
#line 973 "mercury_compile_middle_passes.m"
        }
#line 985 "mercury_compile_middle_passes.m"
        break;
#line 985 "mercury_compile_middle_passes.m"
    }
#line 969 "mercury_compile_middle_passes.m"
  }
#line 965 "mercury_compile_middle_passes.m"
}

#line 938 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 938 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 938 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 938 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 938 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 938 "mercury_compile_middle_passes.m"
{
#line 941 "mercury_compile_middle_passes.m"
  {
#line 941 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 941 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 941 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Allow_12;
#line 941 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Simple_13;
#line 941 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SingleUse_14;
#line 941 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Threshold_15;

#line 942 "mercury_compile_middle_passes.m"
    {
#line 942 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 943 "mercury_compile_middle_passes.m"
    {
#line 943 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 329, &top_level__mercury_compile_middle_passes__Allow_12);
    }
#line 944 "mercury_compile_middle_passes.m"
    {
#line 944 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 331, &top_level__mercury_compile_middle_passes__Simple_13);
    }
#line 945 "mercury_compile_middle_passes.m"
    {
#line 945 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 333, &top_level__mercury_compile_middle_passes__SingleUse_14);
    }
#line 946 "mercury_compile_middle_passes.m"
    {
#line 946 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 335, &top_level__mercury_compile_middle_passes__Threshold_15);
    }
#line 948 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Allow_12 == (MR_Integer) 1);
#line 948 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 948 "mercury_compile_middle_passes.m"
      {
#line 949 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Simple_13 == (MR_Integer) 1);
#line 950 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 950 "mercury_compile_middle_passes.m"
          {
#line 950 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SingleUse_14 == (MR_Integer) 1);
#line 950 "mercury_compile_middle_passes.m"
            if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 951 "mercury_compile_middle_passes.m"
              {
#line 951 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Threshold_15 > (MR_Integer) 0);
#line 951 "mercury_compile_middle_passes.m"
              }
#line 950 "mercury_compile_middle_passes.m"
          }
#line 948 "mercury_compile_middle_passes.m"
      }
#line 959 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 954 "mercury_compile_middle_passes.m"
      {
#line 954 "mercury_compile_middle_passes.m"
        {
#line 954 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inlining...\n");
        }
#line 955 "mercury_compile_middle_passes.m"
        {
#line 955 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 956 "mercury_compile_middle_passes.m"
        {
#line 956 "mercury_compile_middle_passes.m"
          transform_hlds__inlining__inlining_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 957 "mercury_compile_middle_passes.m"
        {
#line 957 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 958 "mercury_compile_middle_passes.m"
        {
#line 958 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 958 "mercury_compile_middle_passes.m"
          return;
        }
#line 954 "mercury_compile_middle_passes.m"
      }
#line 959 "mercury_compile_middle_passes.m"
    else
#line 960 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 941 "mercury_compile_middle_passes.m"
  }
#line 938 "mercury_compile_middle_passes.m"
}

#line 918 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 918 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8)
#line 918 "mercury_compile_middle_passes.m"
{
#line 918 "mercury_compile_middle_passes.m"
  {
#line 918 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 918 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4;
#line 918 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6;
#line 918 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8;

#line 918 "mercury_compile_middle_passes.m"
    {
#line 918 "mercury_compile_middle_passes.m"
      transform_hlds__accumulator__accu_transform_proc_8_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_7), &top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8);
    }
#line 918 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4));
#line 918 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6));
#line 918 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_8 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8));
#line 918 "mercury_compile_middle_passes.m"
  }
#line 918 "mercury_compile_middle_passes.m"
}

#line 906 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 906 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 906 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 906 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 906 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23)
#line 906 "mercury_compile_middle_passes.m"
{
#line 909 "mercury_compile_middle_passes.m"
  {
#line 909 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 909 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 909 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_12;

#line 910 "mercury_compile_middle_passes.m"
    {
#line 910 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 911 "mercury_compile_middle_passes.m"
    {
#line 911 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 356, &top_level__mercury_compile_middle_passes__Optimize_12);
    }
#line 932 "mercury_compile_middle_passes.m"
#line 932 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Optimize_12) {
#line 932 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 932 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 933 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22;
#line 932 "mercury_compile_middle_passes.m"
        break;
#line 932 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 913 "mercury_compile_middle_passes.m"
        {
#line 913 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__TypeInfo_43_43;
#line 913 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Cookie0_13;
#line 913 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Task0_14;
#line 913 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Task_15;
#line 913 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_19;
#line 913 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_21;
#line 913 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 925 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 921 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Cookie_17;
#line 921 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 922 "mercury_compile_middle_passes.m"
          MR_Box top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18;
#line 928 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_20;

#line 914 "mercury_compile_middle_passes.m"
          {
#line 914 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Attempting to introduce accumulators...\n");
          }
#line 916 "mercury_compile_middle_passes.m"
          {
#line 916 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 3566 "top_level.mercury_compile_middle_passes.c"
          top_level__mercury_compile_middle_passes__TypeInfo_43_43 = (MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[1];
#line 917 "mercury_compile_middle_passes.m"
          {
#line 917 "mercury_compile_middle_passes.m"
            mercury__univ__type_to_univ_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile_middle_passes__Cookie0_13);
          }
#line 918 "mercury_compile_middle_passes.m"
          {
#line 918 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Task0_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 918 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 918 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
#line 918 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 2) = ((MR_Box) (top_level__mercury_compile_middle_passes__Cookie0_13));
#line 918 "mercury_compile_middle_passes.m"
          }
#line 919 "mercury_compile_middle_passes.m"
          {
#line 919 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(top_level__mercury_compile_middle_passes__Task0_14, &top_level__mercury_compile_middle_passes__Task_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
          }
#line 921 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__succeeded = ((((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__Task_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 921 "mercury_compile_middle_passes.m"
          if (top_level__mercury_compile_middle_passes__succeeded)
#line 921 "mercury_compile_middle_passes.m"
            {
#line 921 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 1)));
#line 921 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__Cookie_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 2)));
#line 922 "mercury_compile_middle_passes.m"
              {
#line 922 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = mercury__univ__univ_to_type_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, top_level__mercury_compile_middle_passes__Cookie_17, &top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
              }
#line 922 "mercury_compile_middle_passes.m"
              if (top_level__mercury_compile_middle_passes__succeeded)
#line 922 "mercury_compile_middle_passes.m"
                {
#line 922 "mercury_compile_middle_passes.m"
                  top_level__mercury_compile_middle_passes__SpecsPrime_18 = ((MR_Word) top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
#line 922 "mercury_compile_middle_passes.m"
                  top_level__mercury_compile_middle_passes__succeeded = MR_TRUE;
#line 922 "mercury_compile_middle_passes.m"
                }
#line 921 "mercury_compile_middle_passes.m"
            }
#line 925 "mercury_compile_middle_passes.m"
          if (top_level__mercury_compile_middle_passes__succeeded)
#line 924 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Specs_19 = top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 925 "mercury_compile_middle_passes.m"
          else
#line 926 "mercury_compile_middle_passes.m"
            {
#line 926 "mercury_compile_middle_passes.m"
              {
#line 926 "mercury_compile_middle_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/6", (MR_String) "bad task");
#line 926 "mercury_compile_middle_passes.m"
                return;
              }
#line 926 "mercury_compile_middle_passes.m"
            }
#line 928 "mercury_compile_middle_passes.m"
          {
#line 928 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_19, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_20, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_21);
          }
#line 929 "mercury_compile_middle_passes.m"
          {
#line 929 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_21, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);
          }
#line 930 "mercury_compile_middle_passes.m"
          {
#line 930 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 931 "mercury_compile_middle_passes.m"
          {
#line 931 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 931 "mercury_compile_middle_passes.m"
            return;
          }
#line 913 "mercury_compile_middle_passes.m"
        }
#line 932 "mercury_compile_middle_passes.m"
        break;
#line 932 "mercury_compile_middle_passes.m"
    }
#line 909 "mercury_compile_middle_passes.m"
  }
#line 906 "mercury_compile_middle_passes.m"
}

#line 884 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 884 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 884 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 884 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 884 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 884 "mercury_compile_middle_passes.m"
{
#line 887 "mercury_compile_middle_passes.m"
  {
#line 887 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 887 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 887 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImplicitParallelism_12;

#line 888 "mercury_compile_middle_passes.m"
    {
#line 888 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 889 "mercury_compile_middle_passes.m"
    {
#line 889 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 661, &top_level__mercury_compile_middle_passes__ImplicitParallelism_12);
    }
#line 899 "mercury_compile_middle_passes.m"
#line 899 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ImplicitParallelism_12) {
#line 899 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 899 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 901 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 899 "mercury_compile_middle_passes.m"
        break;
#line 899 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 892 "mercury_compile_middle_passes.m"
        {
#line 893 "mercury_compile_middle_passes.m"
          {
#line 893 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying implicit parallelism...\n");
          }
#line 895 "mercury_compile_middle_passes.m"
          {
#line 895 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 896 "mercury_compile_middle_passes.m"
          {
#line 896 "mercury_compile_middle_passes.m"
            transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 897 "mercury_compile_middle_passes.m"
          {
#line 897 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 898 "mercury_compile_middle_passes.m"
          {
#line 898 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 898 "mercury_compile_middle_passes.m"
            return;
          }
#line 892 "mercury_compile_middle_passes.m"
        }
#line 899 "mercury_compile_middle_passes.m"
        break;
#line 899 "mercury_compile_middle_passes.m"
    }
#line 887 "mercury_compile_middle_passes.m"
  }
#line 884 "mercury_compile_middle_passes.m"
}

#line 863 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 863 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 863 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 863 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 863 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 863 "mercury_compile_middle_passes.m"
{
#line 866 "mercury_compile_middle_passes.m"
  {
#line 866 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 866 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 866 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ForceDisableSSDB_12;

#line 867 "mercury_compile_middle_passes.m"
    {
#line 867 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 868 "mercury_compile_middle_passes.m"
    {
#line 868 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 135, &top_level__mercury_compile_middle_passes__ForceDisableSSDB_12);
    }
#line 878 "mercury_compile_middle_passes.m"
#line 878 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ForceDisableSSDB_12) {
#line 878 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 878 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 871 "mercury_compile_middle_passes.m"
        {
#line 872 "mercury_compile_middle_passes.m"
          {
#line 872 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Maybe apply source to source debugging transformation ...\n");
          }
#line 875 "mercury_compile_middle_passes.m"
          {
#line 875 "mercury_compile_middle_passes.m"
            transform_hlds__ssdebug__ssdebug_transform_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 876 "mercury_compile_middle_passes.m"
          {
#line 876 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 877 "mercury_compile_middle_passes.m"
          {
#line 877 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 877 "mercury_compile_middle_passes.m"
            return;
          }
#line 871 "mercury_compile_middle_passes.m"
        }
#line 878 "mercury_compile_middle_passes.m"
        break;
#line 878 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 879 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 878 "mercury_compile_middle_passes.m"
        break;
#line 878 "mercury_compile_middle_passes.m"
    }
#line 866 "mercury_compile_middle_passes.m"
  }
#line 863 "mercury_compile_middle_passes.m"
}

#line 828 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 828 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 828 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 828 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 828 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20)
#line 828 "mercury_compile_middle_passes.m"
{
#line 831 "mercury_compile_middle_passes.m"
  {
#line 831 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 831 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 831 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HigherOrder_12;
#line 831 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Types_13;
#line 831 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecInfo_14;
#line 831 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecPreds_15;
#line 842 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 842 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_17_17;
#line 842 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_18_18;

#line 832 "mercury_compile_middle_passes.m"
    {
#line 832 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 833 "mercury_compile_middle_passes.m"
    {
#line 833 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 347, &top_level__mercury_compile_middle_passes__HigherOrder_12);
    }
#line 835 "mercury_compile_middle_passes.m"
    {
#line 835 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 355, &top_level__mercury_compile_middle_passes__Types_13);
    }
#line 841 "mercury_compile_middle_passes.m"
    {
#line 841 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__TypeSpecInfo_14);
    }
#line 842 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__TypeSpecPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 0)));
#line 842 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 1)));
#line 842 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 2)));
#line 842 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 3)));
#line 844 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HigherOrder_12 == (MR_Integer) 1);
#line 845 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 845 "mercury_compile_middle_passes.m"
      {
#line 845 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Types_13 == (MR_Integer) 1);
#line 845 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 846 "mercury_compile_middle_passes.m"
          {
#line 846 "mercury_compile_middle_passes.m"
            {
#line 846 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, top_level__mercury_compile_middle_passes__TypeSpecPreds_15);
            }
#line 846 "mercury_compile_middle_passes.m"
          }
#line 845 "mercury_compile_middle_passes.m"
      }
#line 857 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 851 "mercury_compile_middle_passes.m"
      {
#line 849 "mercury_compile_middle_passes.m"
        {
#line 849 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
        }
#line 852 "mercury_compile_middle_passes.m"
        {
#line 852 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 854 "mercury_compile_middle_passes.m"
        {
#line 854 "mercury_compile_middle_passes.m"
          transform_hlds__higher_order__specialize_higher_order_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);
        }
#line 855 "mercury_compile_middle_passes.m"
        {
#line 855 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 856 "mercury_compile_middle_passes.m"
        {
#line 856 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 856 "mercury_compile_middle_passes.m"
          return;
        }
#line 851 "mercury_compile_middle_passes.m"
      }
#line 857 "mercury_compile_middle_passes.m"
    else
#line 858 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19;
#line 831 "mercury_compile_middle_passes.m"
  }
#line 828 "mercury_compile_middle_passes.m"
}

#line 809 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 809 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 809 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 809 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 809 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 809 "mercury_compile_middle_passes.m"
{
#line 812 "mercury_compile_middle_passes.m"
  {
#line 812 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 812 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 812 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Tuple_12;

#line 813 "mercury_compile_middle_passes.m"
    {
#line 813 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 814 "mercury_compile_middle_passes.m"
    {
#line 814 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 393, &top_level__mercury_compile_middle_passes__Tuple_12);
    }
#line 822 "mercury_compile_middle_passes.m"
#line 822 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Tuple_12) {
#line 822 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 822 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 823 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 822 "mercury_compile_middle_passes.m"
        break;
#line 822 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 816 "mercury_compile_middle_passes.m"
        {
#line 817 "mercury_compile_middle_passes.m"
          {
#line 817 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Tupling...\n");
          }
#line 818 "mercury_compile_middle_passes.m"
          {
#line 818 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 819 "mercury_compile_middle_passes.m"
          {
#line 819 "mercury_compile_middle_passes.m"
            transform_hlds__tupling__tuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 820 "mercury_compile_middle_passes.m"
          {
#line 820 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 821 "mercury_compile_middle_passes.m"
          {
#line 821 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 821 "mercury_compile_middle_passes.m"
            return;
          }
#line 816 "mercury_compile_middle_passes.m"
        }
#line 822 "mercury_compile_middle_passes.m"
        break;
#line 822 "mercury_compile_middle_passes.m"
    }
#line 812 "mercury_compile_middle_passes.m"
  }
#line 809 "mercury_compile_middle_passes.m"
}

#line 800 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 800 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg)
#line 800 "mercury_compile_middle_passes.m"
{
#line 800 "mercury_compile_middle_passes.m"
  {
#line 800 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 800 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;

#line 800 "mercury_compile_middle_passes.m"
    {
#line 800 "mercury_compile_middle_passes.m"
      return top_level__mercury_compile_middle_passes__succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__800__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))));
    }
#line 800 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 800 "mercury_compile_middle_passes.m"
  }
#line 800 "mercury_compile_middle_passes.m"
}

#line 786 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 786 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 786 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 786 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 786 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 786 "mercury_compile_middle_passes.m"
{
#line 789 "mercury_compile_middle_passes.m"
  {
#line 789 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 789 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 789 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Untuple_12;

#line 790 "mercury_compile_middle_passes.m"
    {
#line 790 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 791 "mercury_compile_middle_passes.m"
    {
#line 791 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 392, &top_level__mercury_compile_middle_passes__Untuple_12);
    }
#line 803 "mercury_compile_middle_passes.m"
#line 803 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Untuple_12) {
#line 803 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 803 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 804 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 803 "mercury_compile_middle_passes.m"
        break;
#line 803 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 793 "mercury_compile_middle_passes.m"
        {
#line 793 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__SimplifySpecs_13;
#line 793 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 793 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__V_31_31;
#line 793 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__V_35_35;

#line 794 "mercury_compile_middle_passes.m"
          {
#line 794 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Untupling...\n");
          }
#line 795 "mercury_compile_middle_passes.m"
          {
#line 795 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 796 "mercury_compile_middle_passes.m"
          {
#line 796 "mercury_compile_middle_passes.m"
            transform_hlds__untupling__untuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
          }
#line 797 "mercury_compile_middle_passes.m"
          {
#line 797 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 798 "mercury_compile_middle_passes.m"
          {
#line 798 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 1, top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Stats_8, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__SimplifySpecs_13);
          }
#line 800 "mercury_compile_middle_passes.m"
          {
#line 800 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__V_35_35 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_middle_passes__Globals_11, top_level__mercury_compile_middle_passes__SimplifySpecs_13);
          }
#line 800 "mercury_compile_middle_passes.m"
          {
#line 800 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 800 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_2[0]));
#line 800 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1));
#line 800 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 800 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_35_35));
#line 800 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 800 "mercury_compile_middle_passes.m"
          }
#line 800 "mercury_compile_middle_passes.m"
          {
#line 800 "mercury_compile_middle_passes.m"
            mercury__require__expect_4_p_0(top_level__mercury_compile_middle_passes__V_31_31, (MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_untuple_arguments\'/6", (MR_String) "simplify has errors");
          }
#line 802 "mercury_compile_middle_passes.m"
          {
#line 802 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 802 "mercury_compile_middle_passes.m"
            return;
          }
#line 793 "mercury_compile_middle_passes.m"
        }
#line 803 "mercury_compile_middle_passes.m"
        break;
#line 803 "mercury_compile_middle_passes.m"
    }
#line 789 "mercury_compile_middle_passes.m"
  }
#line 786 "mercury_compile_middle_passes.m"
}

#line 748 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_9,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_10,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_11,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_12,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21,
#line 748 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22)
#line 748 "mercury_compile_middle_passes.m"
{
#line 751 "mercury_compile_middle_passes.m"
  {
#line 751 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 751 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_15;
#line 751 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__GenBytecode_16;

#line 752 "mercury_compile_middle_passes.m"
    {
#line 752 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__HLDS0_9, &top_level__mercury_compile_middle_passes__Globals_15);
    }
#line 753 "mercury_compile_middle_passes.m"
    {
#line 753 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_15, (MR_Integer) 136, &top_level__mercury_compile_middle_passes__GenBytecode_16);
    }
#line 780 "mercury_compile_middle_passes.m"
#line 780 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__GenBytecode_16) {
#line 780 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 780 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 781 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21;
#line 780 "mercury_compile_middle_passes.m"
        break;
#line 780 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 755 "mercury_compile_middle_passes.m"
        {
#line 755 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__HLDS1_17;
#line 755 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Bytecode_18;
#line 755 "mercury_compile_middle_passes.m"
          MR_String top_level__mercury_compile_middle_passes__BytedebugFile_19;
#line 755 "mercury_compile_middle_passes.m"
          MR_String top_level__mercury_compile_middle_passes__BytecodeFile_20;

#line 756 "mercury_compile_middle_passes.m"
          {
#line 756 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__HLDS0_9, &top_level__mercury_compile_middle_passes__HLDS1_17);
          }
#line 757 "mercury_compile_middle_passes.m"
          {
#line 757 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__HLDS1_17, (MR_Integer) 505, (MR_String) "bytecode_args_to_regs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22);
          }
#line 758 "mercury_compile_middle_passes.m"
          {
#line 758 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Generating bytecodes...\n");
          }
#line 759 "mercury_compile_middle_passes.m"
          {
#line 759 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
          }
#line 760 "mercury_compile_middle_passes.m"
          {
#line 760 "mercury_compile_middle_passes.m"
            bytecode_backend__bytecode_gen__gen_module_4_p_0(top_level__mercury_compile_middle_passes__HLDS1_17, &top_level__mercury_compile_middle_passes__Bytecode_18);
          }
#line 761 "mercury_compile_middle_passes.m"
          {
#line 761 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% done.\n");
          }
#line 762 "mercury_compile_middle_passes.m"
          {
#line 762 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_12);
          }
#line 763 "mercury_compile_middle_passes.m"
          {
#line 763 "mercury_compile_middle_passes.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_15, top_level__mercury_compile_middle_passes__ModuleName_10, (MR_String) ".bytedebug", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytedebugFile_19);
          }
#line 765 "mercury_compile_middle_passes.m"
          {
#line 765 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Writing bytecodes to \140");
          }
#line 766 "mercury_compile_middle_passes.m"
          {
#line 766 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__BytedebugFile_19);
          }
#line 767 "mercury_compile_middle_passes.m"
          {
#line 767 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "\'...");
          }
#line 768 "mercury_compile_middle_passes.m"
          {
#line 768 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
          }
#line 769 "mercury_compile_middle_passes.m"
          {
#line 769 "mercury_compile_middle_passes.m"
            bytecode_backend__bytecode__debug_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytedebugFile_19, top_level__mercury_compile_middle_passes__Bytecode_18);
          }
#line 770 "mercury_compile_middle_passes.m"
          {
#line 770 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) " done.\n");
          }
#line 771 "mercury_compile_middle_passes.m"
          {
#line 771 "mercury_compile_middle_passes.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_15, top_level__mercury_compile_middle_passes__ModuleName_10, (MR_String) ".mbc", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytecodeFile_20);
          }
#line 773 "mercury_compile_middle_passes.m"
          {
#line 773 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Writing bytecodes to \140");
          }
#line 774 "mercury_compile_middle_passes.m"
          {
#line 774 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__BytecodeFile_20);
          }
#line 775 "mercury_compile_middle_passes.m"
          {
#line 775 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "\'...");
          }
#line 776 "mercury_compile_middle_passes.m"
          {
#line 776 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
          }
#line 777 "mercury_compile_middle_passes.m"
          {
#line 777 "mercury_compile_middle_passes.m"
            bytecode_backend__bytecode__output_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytecodeFile_20, top_level__mercury_compile_middle_passes__Bytecode_18);
          }
#line 778 "mercury_compile_middle_passes.m"
          {
#line 778 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) " done.\n");
          }
#line 779 "mercury_compile_middle_passes.m"
          {
#line 779 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_12);
#line 779 "mercury_compile_middle_passes.m"
            return;
          }
#line 755 "mercury_compile_middle_passes.m"
        }
#line 780 "mercury_compile_middle_passes.m"
        break;
#line 780 "mercury_compile_middle_passes.m"
    }
#line 751 "mercury_compile_middle_passes.m"
  }
#line 748 "mercury_compile_middle_passes.m"
}

#line 709 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 709 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 709 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 709 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 709 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 709 "mercury_compile_middle_passes.m"
{
#line 712 "mercury_compile_middle_passes.m"
  {
#line 712 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 712 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 712 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__WarnDead_12;

#line 713 "mercury_compile_middle_passes.m"
    {
#line 713 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 714 "mercury_compile_middle_passes.m"
    {
#line 714 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 29, &top_level__mercury_compile_middle_passes__WarnDead_12);
    }
#line 742 "mercury_compile_middle_passes.m"
#line 742 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__WarnDead_12) {
#line 742 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 742 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 743 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 742 "mercury_compile_middle_passes.m"
        break;
#line 742 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 716 "mercury_compile_middle_passes.m"
        {
#line 716 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 716 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 720 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes___HLDS1_13;
#line 723 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 717 "mercury_compile_middle_passes.m"
          {
#line 717 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Warning about dead procedures...\n");
          }
#line 719 "mercury_compile_middle_passes.m"
          {
#line 719 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 720 "mercury_compile_middle_passes.m"
          {
#line 720 "mercury_compile_middle_passes.m"
            transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes___HLDS1_13, &top_level__mercury_compile_middle_passes__Specs_14);
          }
#line 721 "mercury_compile_middle_passes.m"
          {
#line 721 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 722 "mercury_compile_middle_passes.m"
          {
#line 722 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
          }
#line 723 "mercury_compile_middle_passes.m"
          {
#line 723 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
          }
#line 724 "mercury_compile_middle_passes.m"
          {
#line 724 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
#line 724 "mercury_compile_middle_passes.m"
            return;
          }
#line 716 "mercury_compile_middle_passes.m"
        }
#line 742 "mercury_compile_middle_passes.m"
        break;
#line 742 "mercury_compile_middle_passes.m"
    }
#line 712 "mercury_compile_middle_passes.m"
  }
#line 709 "mercury_compile_middle_passes.m"
}

#line 689 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 689 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 689 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 689 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 689 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 689 "mercury_compile_middle_passes.m"
{
#line 692 "mercury_compile_middle_passes.m"
  {
#line 692 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 692 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 692 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeCtorInfo_12;

#line 693 "mercury_compile_middle_passes.m"
    {
#line 693 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 694 "mercury_compile_middle_passes.m"
    {
#line 694 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 272, &top_level__mercury_compile_middle_passes__TypeCtorInfo_12);
    }
#line 703 "mercury_compile_middle_passes.m"
#line 703 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TypeCtorInfo_12) {
#line 703 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 703 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 704 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 703 "mercury_compile_middle_passes.m"
        break;
#line 703 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 696 "mercury_compile_middle_passes.m"
        {
#line 697 "mercury_compile_middle_passes.m"
          {
#line 697 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Generating type_ctor_info structures...");
          }
#line 699 "mercury_compile_middle_passes.m"
          {
#line 699 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 700 "mercury_compile_middle_passes.m"
          {
#line 700 "mercury_compile_middle_passes.m"
            backend_libs__type_ctor_info__generate_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 701 "mercury_compile_middle_passes.m"
          {
#line 701 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
          }
#line 702 "mercury_compile_middle_passes.m"
          {
#line 702 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 702 "mercury_compile_middle_passes.m"
            return;
          }
#line 696 "mercury_compile_middle_passes.m"
        }
#line 703 "mercury_compile_middle_passes.m"
        break;
#line 703 "mercury_compile_middle_passes.m"
    }
#line 692 "mercury_compile_middle_passes.m"
  }
#line 689 "mercury_compile_middle_passes.m"
}

#line 664 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 664 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 664 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 664 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 664 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 664 "mercury_compile_middle_passes.m"
{
#line 667 "mercury_compile_middle_passes.m"
  {
#line 667 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 667 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 667 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Polymorphism_12;
#line 667 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_13;

#line 668 "mercury_compile_middle_passes.m"
    {
#line 668 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 669 "mercury_compile_middle_passes.m"
    {
#line 669 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 299, &top_level__mercury_compile_middle_passes__Polymorphism_12);
    }
#line 670 "mercury_compile_middle_passes.m"
    {
#line 670 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 416, &top_level__mercury_compile_middle_passes__Termination2_13);
    }
#line 674 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Polymorphism_12 == (MR_Integer) 1);
#line 674 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 675 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Termination2_13 == (MR_Integer) 1);
#line 683 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 677 "mercury_compile_middle_passes.m"
      {
#line 677 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 677 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 677 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25;
#line 679 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 677 "mercury_compile_middle_passes.m"
        {
#line 677 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination 2...\n");
        }
#line 678 "mercury_compile_middle_passes.m"
        {
#line 678 "mercury_compile_middle_passes.m"
          transform_hlds__term_constr_main__term2_analyse_module_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_middle_passes__Specs_14);
        }
#line 679 "mercury_compile_middle_passes.m"
        {
#line 679 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
        }
#line 680 "mercury_compile_middle_passes.m"
        {
#line 680 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
        }
#line 681 "mercury_compile_middle_passes.m"
        {
#line 681 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination 2 checking done.\n");
        }
#line 682 "mercury_compile_middle_passes.m"
        {
#line 682 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 682 "mercury_compile_middle_passes.m"
          return;
        }
#line 677 "mercury_compile_middle_passes.m"
      }
#line 683 "mercury_compile_middle_passes.m"
    else
#line 684 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 667 "mercury_compile_middle_passes.m"
  }
#line 664 "mercury_compile_middle_passes.m"
}

#line 639 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 639 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 639 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 639 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 639 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 639 "mercury_compile_middle_passes.m"
{
#line 642 "mercury_compile_middle_passes.m"
  {
#line 642 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 642 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 642 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Polymorphism_12;
#line 642 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_13;

#line 643 "mercury_compile_middle_passes.m"
    {
#line 643 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 644 "mercury_compile_middle_passes.m"
    {
#line 644 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 299, &top_level__mercury_compile_middle_passes__Polymorphism_12);
    }
#line 645 "mercury_compile_middle_passes.m"
    {
#line 645 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 409, &top_level__mercury_compile_middle_passes__Termination_13);
    }
#line 649 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Polymorphism_12 == (MR_Integer) 1);
#line 649 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 650 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Termination_13 == (MR_Integer) 1);
#line 658 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 652 "mercury_compile_middle_passes.m"
      {
#line 652 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 652 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 652 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25;
#line 655 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 652 "mercury_compile_middle_passes.m"
        {
#line 652 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination...\n");
        }
#line 653 "mercury_compile_middle_passes.m"
        {
#line 653 "mercury_compile_middle_passes.m"
          transform_hlds__termination__analyse_termination_in_module_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_middle_passes__Specs_14);
        }
#line 654 "mercury_compile_middle_passes.m"
        {
#line 654 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination checking done.\n");
        }
#line 655 "mercury_compile_middle_passes.m"
        {
#line 655 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
        }
#line 656 "mercury_compile_middle_passes.m"
        {
#line 656 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
        }
#line 657 "mercury_compile_middle_passes.m"
        {
#line 657 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 657 "mercury_compile_middle_passes.m"
          return;
        }
#line 652 "mercury_compile_middle_passes.m"
      }
#line 658 "mercury_compile_middle_passes.m"
    else
#line 659 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 642 "mercury_compile_middle_passes.m"
  }
#line 639 "mercury_compile_middle_passes.m"
}

#line 621 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 621 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 621 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 621 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 621 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 621 "mercury_compile_middle_passes.m"
{
#line 624 "mercury_compile_middle_passes.m"
  {
#line 624 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 624 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 624 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_12;

#line 625 "mercury_compile_middle_passes.m"
    {
#line 625 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 626 "mercury_compile_middle_passes.m"
    {
#line 626 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 424, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_12);
    }
#line 633 "mercury_compile_middle_passes.m"
#line 633 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ExceptionAnalysis_12) {
#line 633 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 633 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 634 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 633 "mercury_compile_middle_passes.m"
        break;
#line 633 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 628 "mercury_compile_middle_passes.m"
        {
#line 629 "mercury_compile_middle_passes.m"
          {
#line 629 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing exceptions...\n");
          }
#line 630 "mercury_compile_middle_passes.m"
          {
#line 630 "mercury_compile_middle_passes.m"
            transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 631 "mercury_compile_middle_passes.m"
          {
#line 631 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 632 "mercury_compile_middle_passes.m"
          {
#line 632 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 632 "mercury_compile_middle_passes.m"
            return;
          }
#line 628 "mercury_compile_middle_passes.m"
        }
#line 633 "mercury_compile_middle_passes.m"
        break;
#line 633 "mercury_compile_middle_passes.m"
    }
#line 624 "mercury_compile_middle_passes.m"
  }
#line 621 "mercury_compile_middle_passes.m"
}

#line 603 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 603 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 603 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 603 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 603 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 603 "mercury_compile_middle_passes.m"
{
#line 606 "mercury_compile_middle_passes.m"
  {
#line 606 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 606 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 606 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;

#line 607 "mercury_compile_middle_passes.m"
    {
#line 607 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 608 "mercury_compile_middle_passes.m"
    {
#line 608 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 425, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 615 "mercury_compile_middle_passes.m"
#line 615 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ClosureAnalysis_12) {
#line 615 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 615 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 616 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 615 "mercury_compile_middle_passes.m"
        break;
#line 615 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 610 "mercury_compile_middle_passes.m"
        {
#line 611 "mercury_compile_middle_passes.m"
          {
#line 611 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing closures...\n");
          }
#line 612 "mercury_compile_middle_passes.m"
          {
#line 612 "mercury_compile_middle_passes.m"
            transform_hlds__closure_analysis__closure_analyse_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 613 "mercury_compile_middle_passes.m"
          {
#line 613 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 614 "mercury_compile_middle_passes.m"
          {
#line 614 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 614 "mercury_compile_middle_passes.m"
            return;
          }
#line 610 "mercury_compile_middle_passes.m"
        }
#line 615 "mercury_compile_middle_passes.m"
        break;
#line 615 "mercury_compile_middle_passes.m"
    }
#line 606 "mercury_compile_middle_passes.m"
  }
#line 603 "mercury_compile_middle_passes.m"
}

#line 591 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 591 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 591 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 591 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 591 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 591 "mercury_compile_middle_passes.m"
{
#line 594 "mercury_compile_middle_passes.m"
  {
#line 594 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 595 "mercury_compile_middle_passes.m"
    {
#line 595 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Fully expanding equivalence types...");
    }
#line 596 "mercury_compile_middle_passes.m"
    {
#line 596 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 597 "mercury_compile_middle_passes.m"
    {
#line 597 "mercury_compile_middle_passes.m"
      transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 598 "mercury_compile_middle_passes.m"
    {
#line 598 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 599 "mercury_compile_middle_passes.m"
    {
#line 599 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 599 "mercury_compile_middle_passes.m"
      return;
    }
#line 594 "mercury_compile_middle_passes.m"
  }
#line 591 "mercury_compile_middle_passes.m"
}

#line 579 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 579 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 579 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 579 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 579 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 579 "mercury_compile_middle_passes.m"
{
#line 582 "mercury_compile_middle_passes.m"
  {
#line 582 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 583 "mercury_compile_middle_passes.m"
    {
#line 583 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming stm expressions...");
    }
#line 584 "mercury_compile_middle_passes.m"
    {
#line 584 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 585 "mercury_compile_middle_passes.m"
    {
#line 585 "mercury_compile_middle_passes.m"
      transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 586 "mercury_compile_middle_passes.m"
    {
#line 586 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 587 "mercury_compile_middle_passes.m"
    {
#line 587 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 587 "mercury_compile_middle_passes.m"
      return;
    }
#line 582 "mercury_compile_middle_passes.m"
  }
#line 579 "mercury_compile_middle_passes.m"
}

#line 567 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 567 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 567 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 567 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 567 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 567 "mercury_compile_middle_passes.m"
{
#line 570 "mercury_compile_middle_passes.m"
  {
#line 570 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 571 "mercury_compile_middle_passes.m"
    {
#line 571 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming lambda expressions...");
    }
#line 572 "mercury_compile_middle_passes.m"
    {
#line 572 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 573 "mercury_compile_middle_passes.m"
    {
#line 573 "mercury_compile_middle_passes.m"
      transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 574 "mercury_compile_middle_passes.m"
    {
#line 574 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 575 "mercury_compile_middle_passes.m"
    {
#line 575 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 575 "mercury_compile_middle_passes.m"
      return;
    }
#line 570 "mercury_compile_middle_passes.m"
  }
#line 567 "mercury_compile_middle_passes.m"
}

#line 552 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 552 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 552 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 552 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 552 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 552 "mercury_compile_middle_passes.m"
{
#line 555 "mercury_compile_middle_passes.m"
  {
#line 555 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 555 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Specs_11;
#line 555 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 555 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__NumErrors_14;
#line 555 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 562 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_13;

#line 556 "mercury_compile_middle_passes.m"
    {
#line 556 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming tabled predicates...");
    }
#line 557 "mercury_compile_middle_passes.m"
    {
#line 557 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 558 "mercury_compile_middle_passes.m"
    {
#line 558 "mercury_compile_middle_passes.m"
      transform_hlds__table_gen__table_gen_process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__Specs_11);
    }
#line 559 "mercury_compile_middle_passes.m"
    {
#line 559 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 560 "mercury_compile_middle_passes.m"
    {
#line 560 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
    }
#line 561 "mercury_compile_middle_passes.m"
    {
#line 561 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 562 "mercury_compile_middle_passes.m"
    {
#line 562 "mercury_compile_middle_passes.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_11, top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_13, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_14);
    }
#line 563 "mercury_compile_middle_passes.m"
    {
#line 563 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 563 "mercury_compile_middle_passes.m"
      return;
    }
#line 555 "mercury_compile_middle_passes.m"
  }
#line 552 "mercury_compile_middle_passes.m"
}

#line 503 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 503 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 503 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 503 "mercury_compile_middle_passes.m"
{
#line 506 "mercury_compile_middle_passes.m"
  {
#line 506 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 506 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 506 "mercury_compile_middle_passes.m"
    MR_String top_level__mercury_compile_middle_passes__FileName_8;
#line 506 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9;
#line 506 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10;
#line 506 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizes_11;

#line 507 "mercury_compile_middle_passes.m"
    {
#line 507 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 508 "mercury_compile_middle_passes.m"
    {
#line 508 "mercury_compile_middle_passes.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 211, &top_level__mercury_compile_middle_passes__FileName_8);
    }
#line 509 "mercury_compile_middle_passes.m"
    {
#line 509 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 209, &top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9);
    }
#line 511 "mercury_compile_middle_passes.m"
    {
#line 511 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10);
    }
#line 513 "mercury_compile_middle_passes.m"
    {
#line 513 "mercury_compile_middle_passes.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9, top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10, &top_level__mercury_compile_middle_passes__RecordTermSizes_11);
    }
#line 514 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (strcmp(top_level__mercury_compile_middle_passes__FileName_8, (MR_String) "") == 0);
#line 531 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 530 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 531 "mercury_compile_middle_passes.m"
    else
#line 538 "mercury_compile_middle_passes.m"
      {
#line 538 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_12;

#line 534 "mercury_compile_middle_passes.m"
#line 534 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__RecordTermSizes_11) {
#line 534 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 534 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 535 "mercury_compile_middle_passes.m"
            {
#line 536 "mercury_compile_middle_passes.m"
              {
#line 536 "mercury_compile_middle_passes.m"
                libs__file_util__report_error_3_p_0((MR_String) "the --experimental-complexity option requires a term size profiling grade");
              }
#line 535 "mercury_compile_middle_passes.m"
            }
#line 534 "mercury_compile_middle_passes.m"
            break;
#line 534 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 533 "mercury_compile_middle_passes.m"
            {
#line 533 "mercury_compile_middle_passes.m"
            }
#line 534 "mercury_compile_middle_passes.m"
            break;
#line 534 "mercury_compile_middle_passes.m"
        }
#line 539 "mercury_compile_middle_passes.m"
        {
#line 539 "mercury_compile_middle_passes.m"
          transform_hlds__complexity__read_spec_file_4_p_0(top_level__mercury_compile_middle_passes__FileName_8, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_12);
        }
#line 544 "mercury_compile_middle_passes.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__MaybeNumProcMap_12)) == (MR_mktag((MR_Integer) 1))))
#line 545 "mercury_compile_middle_passes.m"
          {
#line 545 "mercury_compile_middle_passes.m"
            MR_String top_level__mercury_compile_middle_passes__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));

#line 546 "mercury_compile_middle_passes.m"
            {
#line 546 "mercury_compile_middle_passes.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_middle_passes__Msg_15);
            }
#line 545 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 545 "mercury_compile_middle_passes.m"
          }
#line 544 "mercury_compile_middle_passes.m"
        else
#line 541 "mercury_compile_middle_passes.m"
          {
#line 541 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));
#line 541 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_30_30;

#line 542 "mercury_compile_middle_passes.m"
            {
#line 542 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "mercury_compile_middle_passes.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_29_29));
#line 542 "mercury_compile_middle_passes.m"
            }
#line 542 "mercury_compile_middle_passes.m"
            {
#line 542 "mercury_compile_middle_passes.m"
              hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
#line 542 "mercury_compile_middle_passes.m"
              return;
            }
#line 541 "mercury_compile_middle_passes.m"
          }
#line 538 "mercury_compile_middle_passes.m"
      }
#line 506 "mercury_compile_middle_passes.m"
  }
#line 503 "mercury_compile_middle_passes.m"
}

#line 39 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(
#line 39 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_8,
#line 39 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_9,
#line 39 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__UnusedArgsInfos_10,
#line 39 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20,
#line 39 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21)
#line 39 "mercury_compile_middle_passes.m"
{
#line 1094 "mercury_compile_middle_passes.m"
  {
#line 1094 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1094 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_13;
#line 1094 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Intermod_14;
#line 1094 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_15;
#line 1094 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Warn_16;

#line 1095 "mercury_compile_middle_passes.m"
    {
#line 1095 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__Globals_13);
    }
#line 1096 "mercury_compile_middle_passes.m"
    {
#line 1096 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 346, &top_level__mercury_compile_middle_passes__Intermod_14);
    }
#line 1097 "mercury_compile_middle_passes.m"
    {
#line 1097 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 345, &top_level__mercury_compile_middle_passes__Optimize_15);
    }
#line 1098 "mercury_compile_middle_passes.m"
    {
#line 1098 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 10, &top_level__mercury_compile_middle_passes__Warn_16);
    }
#line 1100 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Optimize_15 == (MR_Integer) 1);
#line 1101 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1101 "mercury_compile_middle_passes.m"
      {
#line 1101 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Warn_16 == (MR_Integer) 1);
#line 1101 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1102 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Intermod_14 == (MR_Integer) 1);
#line 1101 "mercury_compile_middle_passes.m"
      }
#line 1112 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1105 "mercury_compile_middle_passes.m"
      {
#line 1105 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_17;
#line 1105 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_19;
#line 1105 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_30_30;
#line 1108 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_18;

#line 1105 "mercury_compile_middle_passes.m"
        {
#line 1105 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_8, (MR_String) "% Finding unused arguments ...\n");
        }
#line 1106 "mercury_compile_middle_passes.m"
        {
#line 1106 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_8);
        }
#line 1107 "mercury_compile_middle_passes.m"
        {
#line 1107 "mercury_compile_middle_passes.m"
          transform_hlds__unused_args__unused_args_process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_30_30, &top_level__mercury_compile_middle_passes__Specs_17, top_level__mercury_compile_middle_passes__UnusedArgsInfos_10);
        }
#line 1108 "mercury_compile_middle_passes.m"
        {
#line 1108 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_17, top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_18, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_19);
        }
#line 1109 "mercury_compile_middle_passes.m"
        {
#line 1109 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21);
        }
#line 1110 "mercury_compile_middle_passes.m"
        {
#line 1110 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_8, (MR_String) "% done.\n");
        }
#line 1111 "mercury_compile_middle_passes.m"
        {
#line 1111 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_9);
#line 1111 "mercury_compile_middle_passes.m"
          return;
        }
#line 1105 "mercury_compile_middle_passes.m"
      }
#line 1112 "mercury_compile_middle_passes.m"
    else
#line 1113 "mercury_compile_middle_passes.m"
      {
#line 1113 "mercury_compile_middle_passes.m"
        {
#line 1113 "mercury_compile_middle_passes.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, top_level__mercury_compile_middle_passes__UnusedArgsInfos_10);
        }
#line 1113 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20;
#line 1113 "mercury_compile_middle_passes.m"
      }
#line 1094 "mercury_compile_middle_passes.m"
  }
#line 39 "mercury_compile_middle_passes.m"
}

#line 36 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(
#line 36 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18,
#line 36 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19,
#line 36 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20)
#line 36 "mercury_compile_middle_passes.m"
{
#line 435 "mercury_compile_middle_passes.m"
  {
#line 435 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalysisInfo_15;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImportedModules_16;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104;
#line 435 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106;
#line 482 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___UnusedArgsInfos_14;
#line 491 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___AnalysisInfo_17;

#line 436 "mercury_compile_middle_passes.m"
    {
#line 436 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 437 "mercury_compile_middle_passes.m"
    {
#line 437 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 438 "mercury_compile_middle_passes.m"
    {
#line 438 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 439 "mercury_compile_middle_passes.m"
    {
#line 439 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 425, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 440 "mercury_compile_middle_passes.m"
    {
#line 440 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 401, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 446 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 447 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 447 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 451 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 450 "mercury_compile_middle_passes.m"
      {
#line 450 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27);
      }
#line 451 "mercury_compile_middle_passes.m"
    else
#line 452 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18;
#line 454 "mercury_compile_middle_passes.m"
    {
#line 454 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31);
    }
#line 455 "mercury_compile_middle_passes.m"
    {
#line 455 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33);
    }
#line 456 "mercury_compile_middle_passes.m"
    {
#line 456 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37);
    }
#line 457 "mercury_compile_middle_passes.m"
    {
#line 457 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39);
    }
#line 458 "mercury_compile_middle_passes.m"
    {
#line 458 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43);
    }
#line 459 "mercury_compile_middle_passes.m"
    {
#line 459 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45);
    }
#line 460 "mercury_compile_middle_passes.m"
    {
#line 460 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49);
    }
#line 461 "mercury_compile_middle_passes.m"
    {
#line 461 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51);
    }
#line 462 "mercury_compile_middle_passes.m"
    {
#line 462 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55);
    }
#line 475 "mercury_compile_middle_passes.m"
#line 475 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__SharingAnalysis_13) {
#line 475 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 476 "mercury_compile_middle_passes.m"
        {
#line 476 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 476 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55;
#line 476 "mercury_compile_middle_passes.m"
        }
#line 475 "mercury_compile_middle_passes.m"
        break;
#line 475 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 464 "mercury_compile_middle_passes.m"
        {
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57;
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61;
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63;
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67;
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69;
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70;
#line 464 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74;

#line 467 "mercury_compile_middle_passes.m"
          {
#line 467 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57);
          }
#line 468 "mercury_compile_middle_passes.m"
          {
#line 468 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61);
          }
#line 469 "mercury_compile_middle_passes.m"
          {
#line 469 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63);
          }
#line 470 "mercury_compile_middle_passes.m"
          {
#line 470 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67);
          }
#line 471 "mercury_compile_middle_passes.m"
          {
#line 471 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70);
          }
#line 472 "mercury_compile_middle_passes.m"
          {
#line 472 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74);
          }
#line 473 "mercury_compile_middle_passes.m"
          {
#line 473 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76);
          }
#line 474 "mercury_compile_middle_passes.m"
          {
#line 474 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80);
          }
#line 464 "mercury_compile_middle_passes.m"
        }
#line 475 "mercury_compile_middle_passes.m"
        break;
#line 475 "mercury_compile_middle_passes.m"
    }
#line 478 "mercury_compile_middle_passes.m"
    {
#line 478 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82);
    }
#line 479 "mercury_compile_middle_passes.m"
    {
#line 479 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86);
    }
#line 480 "mercury_compile_middle_passes.m"
    {
#line 480 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88);
    }
#line 481 "mercury_compile_middle_passes.m"
    {
#line 481 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92);
    }
#line 482 "mercury_compile_middle_passes.m"
    {
#line 482 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, &top_level__mercury_compile_middle_passes___UnusedArgsInfos_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94);
    }
#line 483 "mercury_compile_middle_passes.m"
    {
#line 483 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98);
    }
#line 484 "mercury_compile_middle_passes.m"
    {
#line 484 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100);
    }
#line 485 "mercury_compile_middle_passes.m"
    {
#line 485 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104);
    }
#line 486 "mercury_compile_middle_passes.m"
    {
#line 486 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106);
    }
#line 487 "mercury_compile_middle_passes.m"
    {
#line 487 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20);
    }
#line 489 "mercury_compile_middle_passes.m"
    {
#line 489 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, &top_level__mercury_compile_middle_passes__AnalysisInfo_15);
    }
#line 490 "mercury_compile_middle_passes.m"
    {
#line 490 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, &top_level__mercury_compile_middle_passes__ImportedModules_16);
    }
#line 491 "mercury_compile_middle_passes.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 491 "mercury_compile_middle_passes.m"
    {
#line 491 "mercury_compile_middle_passes.m"
      analysis__write_analysis_files_7_p_0((MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[0], ((MR_Box) ((MR_Integer) 0)), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, top_level__mercury_compile_middle_passes__ImportedModules_16, top_level__mercury_compile_middle_passes__AnalysisInfo_15, &top_level__mercury_compile_middle_passes___AnalysisInfo_17);
    }
#line 435 "mercury_compile_middle_passes.m"
  }
#line 36 "mercury_compile_middle_passes.m"
}

#line 33 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(
#line 33 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 33 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15,
#line 33 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16)
#line 33 "mercury_compile_middle_passes.m"
{
#line 380 "mercury_compile_middle_passes.m"
  {
#line 380 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94;
#line 380 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96;

#line 381 "mercury_compile_middle_passes.m"
    {
#line 381 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 382 "mercury_compile_middle_passes.m"
    {
#line 382 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 383 "mercury_compile_middle_passes.m"
    {
#line 383 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 384 "mercury_compile_middle_passes.m"
    {
#line 384 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 425, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 385 "mercury_compile_middle_passes.m"
    {
#line 385 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 401, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 391 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 392 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 392 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 396 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 395 "mercury_compile_middle_passes.m"
      {
#line 395 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
      }
#line 396 "mercury_compile_middle_passes.m"
    else
#line 397 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 399 "mercury_compile_middle_passes.m"
    {
#line 399 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27);
    }
#line 400 "mercury_compile_middle_passes.m"
    {
#line 400 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29);
    }
#line 401 "mercury_compile_middle_passes.m"
    {
#line 401 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33);
    }
#line 402 "mercury_compile_middle_passes.m"
    {
#line 402 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35);
    }
#line 403 "mercury_compile_middle_passes.m"
    {
#line 403 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39);
    }
#line 404 "mercury_compile_middle_passes.m"
    {
#line 404 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41);
    }
#line 405 "mercury_compile_middle_passes.m"
    {
#line 405 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45);
    }
#line 406 "mercury_compile_middle_passes.m"
    {
#line 406 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47);
    }
#line 407 "mercury_compile_middle_passes.m"
    {
#line 407 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51);
    }
#line 420 "mercury_compile_middle_passes.m"
#line 420 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__SharingAnalysis_13) {
#line 420 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 420 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 421 "mercury_compile_middle_passes.m"
        {
#line 421 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 421 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 421 "mercury_compile_middle_passes.m"
        }
#line 420 "mercury_compile_middle_passes.m"
        break;
#line 420 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 409 "mercury_compile_middle_passes.m"
        {
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57;
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59;
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63;
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65;
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 409 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70;

#line 412 "mercury_compile_middle_passes.m"
          {
#line 412 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53);
          }
#line 413 "mercury_compile_middle_passes.m"
          {
#line 413 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57);
          }
#line 414 "mercury_compile_middle_passes.m"
          {
#line 414 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59);
          }
#line 415 "mercury_compile_middle_passes.m"
          {
#line 415 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63);
          }
#line 416 "mercury_compile_middle_passes.m"
          {
#line 416 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
          }
#line 417 "mercury_compile_middle_passes.m"
          {
#line 417 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70);
          }
#line 418 "mercury_compile_middle_passes.m"
          {
#line 418 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72);
          }
#line 419 "mercury_compile_middle_passes.m"
          {
#line 419 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76);
          }
#line 409 "mercury_compile_middle_passes.m"
        }
#line 420 "mercury_compile_middle_passes.m"
        break;
#line 420 "mercury_compile_middle_passes.m"
    }
#line 423 "mercury_compile_middle_passes.m"
    {
#line 423 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78);
    }
#line 424 "mercury_compile_middle_passes.m"
    {
#line 424 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82);
    }
#line 425 "mercury_compile_middle_passes.m"
    {
#line 425 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84);
    }
#line 426 "mercury_compile_middle_passes.m"
    {
#line 426 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88);
    }
#line 427 "mercury_compile_middle_passes.m"
    {
#line 427 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90);
    }
#line 428 "mercury_compile_middle_passes.m"
    {
#line 428 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94);
    }
#line 429 "mercury_compile_middle_passes.m"
    {
#line 429 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
    }
#line 430 "mercury_compile_middle_passes.m"
    {
#line 430 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16);
    }
#line 431 "mercury_compile_middle_passes.m"
    {
#line 431 "mercury_compile_middle_passes.m"
      transform_hlds__intermod__write_trans_opt_file_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
#line 431 "mercury_compile_middle_passes.m"
      return;
    }
#line 380 "mercury_compile_middle_passes.m"
  }
#line 33 "mercury_compile_middle_passes.m"
}

#line 30 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(
#line 30 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20,
#line 30 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21)
#line 30 "mercury_compile_middle_passes.m"
{
#line 288 "mercury_compile_middle_passes.m"
  {
#line 288 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__IntermodArgs_8;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_9;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_10;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_11;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_13;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_14;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TrailingAnalysis_15;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_16;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_17;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_18;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UnusedArgsInfos_19;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 288 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;

#line 293 "mercury_compile_middle_passes.m"
    {
#line 293 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 294 "mercury_compile_middle_passes.m"
    {
#line 294 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 346, &top_level__mercury_compile_middle_passes__IntermodArgs_8);
    }
#line 295 "mercury_compile_middle_passes.m"
    {
#line 295 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 409, &top_level__mercury_compile_middle_passes__Termination_9);
    }
#line 296 "mercury_compile_middle_passes.m"
    {
#line 296 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 416, &top_level__mercury_compile_middle_passes__Termination2_10);
    }
#line 297 "mercury_compile_middle_passes.m"
    {
#line 297 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 401, &top_level__mercury_compile_middle_passes__SharingAnalysis_11);
    }
#line 299 "mercury_compile_middle_passes.m"
    {
#line 299 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 403, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 301 "mercury_compile_middle_passes.m"
    {
#line 301 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 424, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_13);
    }
#line 303 "mercury_compile_middle_passes.m"
    {
#line 303 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 425, &top_level__mercury_compile_middle_passes__ClosureAnalysis_14);
    }
#line 305 "mercury_compile_middle_passes.m"
    {
#line 305 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 388, &top_level__mercury_compile_middle_passes__TrailingAnalysis_15);
    }
#line 307 "mercury_compile_middle_passes.m"
    {
#line 307 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 391, &top_level__mercury_compile_middle_passes__TablingAnalysis_16);
    }
#line 309 "mercury_compile_middle_passes.m"
    {
#line 309 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_17);
    }
#line 310 "mercury_compile_middle_passes.m"
    {
#line 310 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_18);
    }
#line 316 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_14 == (MR_Integer) 1);
#line 317 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 317 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_11 == (MR_Integer) 1);
#line 323 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 320 "mercury_compile_middle_passes.m"
      {
#line 320 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35;
#line 320 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_37_37;

#line 571 "mercury_compile_middle_passes.m"
        {
#line 571 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming lambda expressions...");
        }
#line 572 "mercury_compile_middle_passes.m"
        {
#line 572 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 573 "mercury_compile_middle_passes.m"
        {
#line 573 "mercury_compile_middle_passes.m"
          transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35);
        }
#line 574 "mercury_compile_middle_passes.m"
        {
#line 574 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 575 "mercury_compile_middle_passes.m"
        {
#line 575 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 583 "mercury_compile_middle_passes.m"
        {
#line 583 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming stm expressions...");
        }
#line 584 "mercury_compile_middle_passes.m"
        {
#line 584 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 585 "mercury_compile_middle_passes.m"
        {
#line 585 "mercury_compile_middle_passes.m"
          transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_37_37);
        }
#line 586 "mercury_compile_middle_passes.m"
        {
#line 586 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 587 "mercury_compile_middle_passes.m"
        {
#line 587 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 322 "mercury_compile_middle_passes.m"
        {
#line 322 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_37_37, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39);
        }
#line 320 "mercury_compile_middle_passes.m"
      }
#line 323 "mercury_compile_middle_passes.m"
    else
#line 324 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20;
#line 329 "mercury_compile_middle_passes.m"
#line 329 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ExceptionAnalysis_13) {
#line 329 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 329 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 330 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 329 "mercury_compile_middle_passes.m"
        break;
#line 329 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 328 "mercury_compile_middle_passes.m"
        {
#line 328 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41);
        }
#line 329 "mercury_compile_middle_passes.m"
        break;
#line 329 "mercury_compile_middle_passes.m"
    }
#line 335 "mercury_compile_middle_passes.m"
#line 335 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__IntermodArgs_8) {
#line 335 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 335 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 336 "mercury_compile_middle_passes.m"
        {
#line 337 "mercury_compile_middle_passes.m"
          {
#line 337 "mercury_compile_middle_passes.m"
            mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, &top_level__mercury_compile_middle_passes__UnusedArgsInfos_19);
          }
#line 336 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 336 "mercury_compile_middle_passes.m"
        }
#line 335 "mercury_compile_middle_passes.m"
        break;
#line 335 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 334 "mercury_compile_middle_passes.m"
        {
#line 334 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, &top_level__mercury_compile_middle_passes__UnusedArgsInfos_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43);
        }
#line 335 "mercury_compile_middle_passes.m"
        break;
#line 335 "mercury_compile_middle_passes.m"
    }
#line 342 "mercury_compile_middle_passes.m"
#line 342 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Termination_9) {
#line 342 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 342 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 343 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43;
#line 342 "mercury_compile_middle_passes.m"
        break;
#line 342 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 341 "mercury_compile_middle_passes.m"
        {
#line 341 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45);
        }
#line 342 "mercury_compile_middle_passes.m"
        break;
#line 342 "mercury_compile_middle_passes.m"
    }
#line 348 "mercury_compile_middle_passes.m"
#line 348 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Termination2_10) {
#line 348 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 348 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 349 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 348 "mercury_compile_middle_passes.m"
        break;
#line 348 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 347 "mercury_compile_middle_passes.m"
        {
#line 347 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47);
        }
#line 348 "mercury_compile_middle_passes.m"
        break;
#line 348 "mercury_compile_middle_passes.m"
    }
#line 355 "mercury_compile_middle_passes.m"
#line 355 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__SharingAnalysis_11) {
#line 355 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 355 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 356 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 355 "mercury_compile_middle_passes.m"
        break;
#line 355 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 353 "mercury_compile_middle_passes.m"
        {
#line 353 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49);
        }
#line 355 "mercury_compile_middle_passes.m"
        break;
#line 355 "mercury_compile_middle_passes.m"
    }
#line 361 "mercury_compile_middle_passes.m"
#line 361 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ReuseAnalysis_12) {
#line 361 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 361 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 362 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49;
#line 361 "mercury_compile_middle_passes.m"
        break;
#line 361 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 360 "mercury_compile_middle_passes.m"
        {
#line 360 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51);
        }
#line 361 "mercury_compile_middle_passes.m"
        break;
#line 361 "mercury_compile_middle_passes.m"
    }
#line 367 "mercury_compile_middle_passes.m"
#line 367 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TrailingAnalysis_15) {
#line 367 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 367 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 368 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 367 "mercury_compile_middle_passes.m"
        break;
#line 367 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 366 "mercury_compile_middle_passes.m"
        {
#line 366 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53);
        }
#line 367 "mercury_compile_middle_passes.m"
        break;
#line 367 "mercury_compile_middle_passes.m"
    }
#line 373 "mercury_compile_middle_passes.m"
#line 373 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TablingAnalysis_16) {
#line 373 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 373 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 374 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;
#line 373 "mercury_compile_middle_passes.m"
        break;
#line 373 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 372 "mercury_compile_middle_passes.m"
        {
#line 372 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21);
        }
#line 373 "mercury_compile_middle_passes.m"
        break;
#line 373 "mercury_compile_middle_passes.m"
    }
#line 376 "mercury_compile_middle_passes.m"
    {
#line 376 "mercury_compile_middle_passes.m"
      transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_middle_passes__UnusedArgsInfos_19);
#line 376 "mercury_compile_middle_passes.m"
      return;
    }
#line 288 "mercury_compile_middle_passes.m"
  }
#line 30 "mercury_compile_middle_passes.m"
}

#line 27 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_7_p_0(
#line 27 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_8,
#line 27 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18,
#line 27 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19,
#line 27 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_20,
#line 27 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_21)
#line 27 "mercury_compile_middle_passes.m"
{
#line 113 "mercury_compile_middle_passes.m"
  {
#line 113 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_13;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_14;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_32_32;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_38_38;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_44_44;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_50_50;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_56_56;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_58_58;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_62_62;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_64_64;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_68_68;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_70_70;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_100_100;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_102_102;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_106_106;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_108_108;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_112_112;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_114_114;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_118_118;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_120_120;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_124_124;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_126_126;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_127_127;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_131_131;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_133_133;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_137_137;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_139_139;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_143_143;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_145_145;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_149_149;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_151_151;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_155_155;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_157_157;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_161_161;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_163_163;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_167_167;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_169_169;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_173_173;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_177_177;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_182_182;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_184_184;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_188_188;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_190_190;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_194_194;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_196_196;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_200_200;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_202_202;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_206_206;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_208_208;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_212_212;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_214_214;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_218_218;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_220_220;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_224_224;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_226_226;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_230_230;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_234_234;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_239_239;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_241_241;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_245_245;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_247_247;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_251_251;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_253_253;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_257_257;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_259_259;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_263_263;
#line 113 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_269_269;
#line 211 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___UnusedArgsInfos_15;
#line 220 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_16;
#line 254 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_17;

#line 114 "mercury_compile_middle_passes.m"
    {
#line 114 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 115 "mercury_compile_middle_passes.m"
    {
#line 115 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_13);
    }
#line 116 "mercury_compile_middle_passes.m"
    {
#line 116 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_14);
    }
#line 118 "mercury_compile_middle_passes.m"
    {
#line 118 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26);
    }
#line 120 "mercury_compile_middle_passes.m"
    {
#line 120 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28);
    }
#line 121 "mercury_compile_middle_passes.m"
    {
#line 121 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28, (MR_Integer) 105, (MR_String) "tabling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_20, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_32_32);
    }
#line 123 "mercury_compile_middle_passes.m"
    {
#line 123 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34);
    }
#line 124 "mercury_compile_middle_passes.m"
    {
#line 124 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_32_32, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_38_38);
    }
#line 126 "mercury_compile_middle_passes.m"
    {
#line 126 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_stms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40);
    }
#line 127 "mercury_compile_middle_passes.m"
    {
#line 127 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40, (MR_Integer) 113, (MR_String) "stm", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_38_38, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_44_44);
    }
#line 129 "mercury_compile_middle_passes.m"
    {
#line 129 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46);
    }
#line 130 "mercury_compile_middle_passes.m"
    {
#line 130 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46, (MR_Integer) 115, (MR_String) "equiv_types", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_44_44, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_50_50);
    }
#line 132 "mercury_compile_middle_passes.m"
    {
#line 132 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52);
    }
#line 133 "mercury_compile_middle_passes.m"
    {
#line 133 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_50_50, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_56_56);
    }
#line 154 "mercury_compile_middle_passes.m"
    {
#line 154 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_58_58);
    }
#line 155 "mercury_compile_middle_passes.m"
    {
#line 155 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_58_58, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_56_56, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_62_62);
    }
#line 157 "mercury_compile_middle_passes.m"
    {
#line 157 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_58_58, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_64_64);
    }
#line 158 "mercury_compile_middle_passes.m"
    {
#line 158 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_64_64, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_62_62, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_68_68);
    }
#line 160 "mercury_compile_middle_passes.m"
    {
#line 160 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_64_64, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_70_70);
    }
#line 161 "mercury_compile_middle_passes.m"
    {
#line 161 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_70_70, (MR_Integer) 121, (MR_String) "termination2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_68_68, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74);
    }
#line 163 "mercury_compile_middle_passes.m"
    {
#line 163 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76);
    }
#line 164 "mercury_compile_middle_passes.m"
    {
#line 164 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 125, (MR_String) "type_ctor_infos", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80);
    }
#line 171 "mercury_compile_middle_passes.m"
    {
#line 171 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82);
    }
#line 172 "mercury_compile_middle_passes.m"
    {
#line 172 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 130, (MR_String) "warn_dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86);
    }
#line 174 "mercury_compile_middle_passes.m"
    {
#line 174 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, top_level__mercury_compile_middle_passes__ModuleName_8, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88);
    }
#line 176 "mercury_compile_middle_passes.m"
    {
#line 176 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90);
    }
#line 177 "mercury_compile_middle_passes.m"
    {
#line 177 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 133, (MR_String) "untupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94);
    }
#line 179 "mercury_compile_middle_passes.m"
    {
#line 179 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
    }
#line 180 "mercury_compile_middle_passes.m"
    {
#line 180 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 134, (MR_String) "tupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_100_100);
    }
#line 182 "mercury_compile_middle_passes.m"
    {
#line 182 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_102_102);
    }
#line 183 "mercury_compile_middle_passes.m"
    {
#line 183 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_102_102, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_100_100, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_106_106);
    }
#line 185 "mercury_compile_middle_passes.m"
    {
#line 185 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_102_102, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_108_108);
    }
#line 186 "mercury_compile_middle_passes.m"
    {
#line 186 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_108_108, (MR_Integer) 137, (MR_String) "ssdb", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_106_106, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_112_112);
    }
#line 188 "mercury_compile_middle_passes.m"
    {
#line 188 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_108_108, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_114_114);
    }
#line 189 "mercury_compile_middle_passes.m"
    {
#line 189 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_114_114, (MR_Integer) 140, (MR_String) "accum", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_112_112, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_118_118);
    }
#line 191 "mercury_compile_middle_passes.m"
    {
#line 191 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_114_114, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_120_120);
    }
#line 192 "mercury_compile_middle_passes.m"
    {
#line 192 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_120_120, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_118_118, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_124_124);
    }
#line 196 "mercury_compile_middle_passes.m"
    {
#line 196 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_120_120, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_126_126, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_124_124, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_127_127);
    }
#line 197 "mercury_compile_middle_passes.m"
    {
#line 197 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_126_126, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_127_127, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_131_131);
    }
#line 199 "mercury_compile_middle_passes.m"
    {
#line 199 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_126_126, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_133_133);
    }
#line 200 "mercury_compile_middle_passes.m"
    {
#line 200 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_133_133, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_131_131, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_137_137);
    }
#line 202 "mercury_compile_middle_passes.m"
    {
#line 202 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_133_133, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_139_139);
    }
#line 203 "mercury_compile_middle_passes.m"
    {
#line 203 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_139_139, (MR_Integer) 160, (MR_String) "delay_construct", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_137_137, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_143_143);
    }
#line 205 "mercury_compile_middle_passes.m"
    {
#line 205 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_139_139, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_145_145);
    }
#line 206 "mercury_compile_middle_passes.m"
    {
#line 206 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_145_145, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_143_143, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_149_149);
    }
#line 208 "mercury_compile_middle_passes.m"
    {
#line 208 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_145_145, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_151_151);
    }
#line 209 "mercury_compile_middle_passes.m"
    {
#line 209 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_151_151, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_149_149, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_155_155);
    }
#line 211 "mercury_compile_middle_passes.m"
    {
#line 211 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, &top_level__mercury_compile_middle_passes___UnusedArgsInfos_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_151_151, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_157_157);
    }
#line 212 "mercury_compile_middle_passes.m"
    {
#line 212 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_157_157, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_155_155, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_161_161);
    }
#line 214 "mercury_compile_middle_passes.m"
    {
#line 214 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_157_157, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_163_163);
    }
#line 215 "mercury_compile_middle_passes.m"
    {
#line 215 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_163_163, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_161_161, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_167_167);
    }
#line 217 "mercury_compile_middle_passes.m"
    {
#line 217 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_163_163, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_169_169);
    }
#line 218 "mercury_compile_middle_passes.m"
    {
#line 218 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_169_169, (MR_Integer) 170, (MR_String) "unneeded_code", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_167_167, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_173_173);
    }
#line 220 "mercury_compile_middle_passes.m"
    {
#line 220 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_169_169, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_177_177, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_16);
    }
#line 222 "mercury_compile_middle_passes.m"
    {
#line 222 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_177_177, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_173_173, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_182_182);
    }
#line 225 "mercury_compile_middle_passes.m"
    {
#line 225 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_177_177, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_184_184);
    }
#line 226 "mercury_compile_middle_passes.m"
    {
#line 226 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_184_184, (MR_Integer) 173, (MR_String) "implicit_parallelism", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_182_182, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_188_188);
    }
#line 228 "mercury_compile_middle_passes.m"
    {
#line 228 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_184_184, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_190_190);
    }
#line 229 "mercury_compile_middle_passes.m"
    {
#line 229 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_190_190, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_188_188, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_194_194);
    }
#line 231 "mercury_compile_middle_passes.m"
    {
#line 231 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_190_190, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_196_196);
    }
#line 232 "mercury_compile_middle_passes.m"
    {
#line 232 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_196_196, (MR_Integer) 200, (MR_String) "granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_194_194, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_200_200);
    }
#line 234 "mercury_compile_middle_passes.m"
    {
#line 234 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_196_196, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_202_202);
    }
#line 235 "mercury_compile_middle_passes.m"
    {
#line 235 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_202_202, (MR_Integer) 201, (MR_String) "distance_granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_200_200, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_206_206);
    }
#line 237 "mercury_compile_middle_passes.m"
    {
#line 237 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_202_202, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_208_208);
    }
#line 238 "mercury_compile_middle_passes.m"
    {
#line 238 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_208_208, (MR_Integer) 205, (MR_String) "dependent_par_conj", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_206_206, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_212_212);
    }
#line 240 "mercury_compile_middle_passes.m"
    {
#line 240 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_208_208, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_214_214);
    }
#line 241 "mercury_compile_middle_passes.m"
    {
#line 241 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_214_214, (MR_Integer) 206, (MR_String) "par_loop_control", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_212_212, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_218_218);
    }
#line 243 "mercury_compile_middle_passes.m"
    {
#line 243 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_214_214, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_220_220);
    }
#line 244 "mercury_compile_middle_passes.m"
    {
#line 244 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_220_220, (MR_Integer) 210, (MR_String) "lco", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_218_218, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_224_224);
    }
#line 246 "mercury_compile_middle_passes.m"
    {
#line 246 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_220_220, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_226_226);
    }
#line 247 "mercury_compile_middle_passes.m"
    {
#line 247 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_226_226, (MR_Integer) 213, (MR_String) "float_reg_wrapper", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_224_224, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_230_230);
    }
#line 254 "mercury_compile_middle_passes.m"
    {
#line 254 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_226_226, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_234_234, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_17);
    }
#line 256 "mercury_compile_middle_passes.m"
    {
#line 256 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_234_234, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_230_230, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_239_239);
    }
#line 262 "mercury_compile_middle_passes.m"
    {
#line 262 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_234_234, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_241_241);
    }
#line 263 "mercury_compile_middle_passes.m"
    {
#line 263 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_241_241, (MR_Integer) 220, (MR_String) "term_size_prof", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_239_239, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_245_245);
    }
#line 268 "mercury_compile_middle_passes.m"
    {
#line 268 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_241_241, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_247_247);
    }
#line 269 "mercury_compile_middle_passes.m"
    {
#line 269 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_247_247, (MR_Integer) 225, (MR_String) "deep_profiling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_245_245, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_251_251);
    }
#line 274 "mercury_compile_middle_passes.m"
    {
#line 274 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_247_247, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_253_253);
    }
#line 275 "mercury_compile_middle_passes.m"
    {
#line 275 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_253_253, (MR_Integer) 230, (MR_String) "complexity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_251_251, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_257_257);
    }
#line 278 "mercury_compile_middle_passes.m"
    {
#line 278 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_253_253, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_259_259);
    }
#line 279 "mercury_compile_middle_passes.m"
    {
#line 279 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_259_259, (MR_Integer) 240, (MR_String) "region_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_257_257, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_263_263);
    }
#line 281 "mercury_compile_middle_passes.m"
    {
#line 281 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_259_259, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19);
    }
#line 282 "mercury_compile_middle_passes.m"
    {
#line 282 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19, (MR_Integer) 250, (MR_String) "dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_263_263, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_269_269);
    }
#line 284 "mercury_compile_middle_passes.m"
    {
#line 284 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19, (MR_Integer) 299, (MR_String) "middle_pass", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_269_269, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_21);
#line 284 "mercury_compile_middle_passes.m"
      return;
    }
#line 113 "mercury_compile_middle_passes.m"
  }
#line 27 "mercury_compile_middle_passes.m"
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
