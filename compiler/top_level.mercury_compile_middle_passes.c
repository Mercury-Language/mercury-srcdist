/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version 2015-10-27
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
#include "libs.op_mode.mih"
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




#line 216 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 790 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_p_0(
#line 790 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 790 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 1445 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1426 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1418 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1405 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1385 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1376 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1346 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1324 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1304 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1287 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1275 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 1230 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1186 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1167 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1147 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1137 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1126 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1108 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1064 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1045 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1035 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1024 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 981 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 981 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 981 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 981 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 981 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 972 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6);

#line 955 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);

#line 928 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 928 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 928 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 928 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 928 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 908 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8);

#line 896 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 896 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 896 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 896 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 896 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);

#line 874 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 874 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 874 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 874 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 874 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 853 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 853 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 853 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 853 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 853 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 818 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 818 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 818 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 818 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 818 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);

#line 799 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 799 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 799 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 799 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 799 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 790 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 790 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg);

#line 776 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 776 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 776 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 776 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 776 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 737 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_8,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_20,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_21);

#line 698 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 698 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 698 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 698 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 698 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 678 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 678 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 678 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 678 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 678 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 658 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 658 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 658 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 658 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 658 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 638 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 638 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 638 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 638 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 638 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 620 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 620 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 620 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 620 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 620 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 602 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 602 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 602 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 602 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 602 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 590 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 590 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 590 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 590 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 590 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 578 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 578 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 578 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 578 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 578 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 566 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 566 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 566 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 566 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 566 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 551 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 551 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 551 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 551 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 551 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 502 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 502 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 502 "mercury_compile_middle_passes.m"
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



#line 1011 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 790 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_p_0(
#line 790 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 790 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36)
#line 790 "mercury_compile_middle_passes.m"
{
#line 790 "mercury_compile_middle_passes.m"
  {
#line 790 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HeadVar__1_35 == top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 790 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 790 "mercury_compile_middle_passes.m"
  }
#line 790 "mercury_compile_middle_passes.m"
}

#line 1445 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1445 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1445 "mercury_compile_middle_passes.m"
{
#line 1448 "mercury_compile_middle_passes.m"
  {
#line 1448 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1448 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1448 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Dead_12;

#line 1449 "mercury_compile_middle_passes.m"
    {
#line 1449 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1450 "mercury_compile_middle_passes.m"
    {
#line 1450 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 381, &top_level__mercury_compile_middle_passes__Dead_12);
    }
#line 1459 "mercury_compile_middle_passes.m"
#line 1459 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Dead_12) {
#line 1459 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1459 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1460 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1459 "mercury_compile_middle_passes.m"
        break;
#line 1459 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1452 "mercury_compile_middle_passes.m"
        {
#line 1456 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_13;

#line 1453 "mercury_compile_middle_passes.m"
          {
#line 1453 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Eliminating dead procedures...\n");
          }
#line 1454 "mercury_compile_middle_passes.m"
          {
#line 1454 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1456 "mercury_compile_middle_passes.m"
          {
#line 1456 "mercury_compile_middle_passes.m"
            transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 0, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, &top_level__mercury_compile_middle_passes___ElimSpecs_13);
          }
#line 1457 "mercury_compile_middle_passes.m"
          {
#line 1457 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1458 "mercury_compile_middle_passes.m"
          {
#line 1458 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1458 "mercury_compile_middle_passes.m"
            return;
          }
#line 1452 "mercury_compile_middle_passes.m"
        }
#line 1459 "mercury_compile_middle_passes.m"
        break;
#line 1459 "mercury_compile_middle_passes.m"
    }
#line 1448 "mercury_compile_middle_passes.m"
  }
#line 1445 "mercury_compile_middle_passes.m"
}

#line 1426 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1426 "mercury_compile_middle_passes.m"
{
#line 1429 "mercury_compile_middle_passes.m"
  {
#line 1429 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1429 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1429 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Analysis_12;

#line 1430 "mercury_compile_middle_passes.m"
    {
#line 1430 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1431 "mercury_compile_middle_passes.m"
    {
#line 1431 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 399, &top_level__mercury_compile_middle_passes__Analysis_12);
    }
#line 1439 "mercury_compile_middle_passes.m"
#line 1439 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Analysis_12) {
#line 1439 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1439 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1440 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1439 "mercury_compile_middle_passes.m"
        break;
#line 1439 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1433 "mercury_compile_middle_passes.m"
        {
#line 1434 "mercury_compile_middle_passes.m"
          {
#line 1434 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing regions ...\n");
          }
#line 1435 "mercury_compile_middle_passes.m"
          {
#line 1435 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1436 "mercury_compile_middle_passes.m"
          {
#line 1436 "mercury_compile_middle_passes.m"
            transform_hlds__rbmm__do_region_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1437 "mercury_compile_middle_passes.m"
          {
#line 1437 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1438 "mercury_compile_middle_passes.m"
          {
#line 1438 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1438 "mercury_compile_middle_passes.m"
            return;
          }
#line 1433 "mercury_compile_middle_passes.m"
        }
#line 1439 "mercury_compile_middle_passes.m"
        break;
#line 1439 "mercury_compile_middle_passes.m"
    }
#line 1429 "mercury_compile_middle_passes.m"
  }
#line 1426 "mercury_compile_middle_passes.m"
}

#line 1418 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1418 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1418 "mercury_compile_middle_passes.m"
{
#line 1418 "mercury_compile_middle_passes.m"
  {
#line 1418 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1418 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5;
#line 1418 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7;

#line 1418 "mercury_compile_middle_passes.m"
    {
#line 1418 "mercury_compile_middle_passes.m"
      transform_hlds__complexity__complexity_process_proc_msg_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7);
    }
#line 1418 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5));
#line 1418 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7));
#line 1418 "mercury_compile_middle_passes.m"
  }
#line 1418 "mercury_compile_middle_passes.m"
}

#line 1405 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1405 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1405 "mercury_compile_middle_passes.m"
{
#line 1408 "mercury_compile_middle_passes.m"
  {
#line 1408 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1408 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_11;

#line 1409 "mercury_compile_middle_passes.m"
    {
#line 1409 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_11);
    }
#line 1412 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeNumProcMap_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1411 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1412 "mercury_compile_middle_passes.m"
    else
#line 1413 "mercury_compile_middle_passes.m"
      {
#line 1413 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumProcs_12;
#line 1413 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__ProcMap_13;
#line 1413 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_11, (MR_Integer) 0)));
#line 1413 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_22_22;
#line 1413 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_24_24;

#line 1413 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__NumProcs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 0)));
#line 1413 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__ProcMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 1)));
#line 1414 "mercury_compile_middle_passes.m"
        {
#line 1414 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying complexity experiment transformation...\n");
        }
#line 1416 "mercury_compile_middle_passes.m"
        {
#line 1416 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1418 "mercury_compile_middle_passes.m"
        {
#line 1418 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_9[0]));
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1));
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__NumProcs_12));
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 4) = ((MR_Box) (top_level__mercury_compile_middle_passes__ProcMap_13));
#line 1418 "mercury_compile_middle_passes.m"
        }
#line 1418 "mercury_compile_middle_passes.m"
        {
#line 1418 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1418 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_22_22, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_24_24));
#line 1418 "mercury_compile_middle_passes.m"
        }
#line 1417 "mercury_compile_middle_passes.m"
        {
#line 1417 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);
        }
#line 1420 "mercury_compile_middle_passes.m"
        {
#line 1420 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1421 "mercury_compile_middle_passes.m"
        {
#line 1421 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1421 "mercury_compile_middle_passes.m"
          return;
        }
#line 1413 "mercury_compile_middle_passes.m"
      }
#line 1408 "mercury_compile_middle_passes.m"
  }
#line 1405 "mercury_compile_middle_passes.m"
}

#line 1385 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1385 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1385 "mercury_compile_middle_passes.m"
{
#line 1388 "mercury_compile_middle_passes.m"
  {
#line 1388 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1388 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1388 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ProfileDeep_12;

#line 1389 "mercury_compile_middle_passes.m"
    {
#line 1389 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1390 "mercury_compile_middle_passes.m"
    {
#line 1390 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 192, &top_level__mercury_compile_middle_passes__ProfileDeep_12);
    }
#line 1399 "mercury_compile_middle_passes.m"
#line 1399 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ProfileDeep_12) {
#line 1399 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1399 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1400 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1399 "mercury_compile_middle_passes.m"
        break;
#line 1399 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1392 "mercury_compile_middle_passes.m"
        {
#line 1393 "mercury_compile_middle_passes.m"
          {
#line 1393 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying deep profiling transformation...\n");
          }
#line 1395 "mercury_compile_middle_passes.m"
          {
#line 1395 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1396 "mercury_compile_middle_passes.m"
          {
#line 1396 "mercury_compile_middle_passes.m"
            ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1397 "mercury_compile_middle_passes.m"
          {
#line 1397 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1398 "mercury_compile_middle_passes.m"
          {
#line 1398 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1398 "mercury_compile_middle_passes.m"
            return;
          }
#line 1392 "mercury_compile_middle_passes.m"
        }
#line 1399 "mercury_compile_middle_passes.m"
        break;
#line 1399 "mercury_compile_middle_passes.m"
    }
#line 1388 "mercury_compile_middle_passes.m"
  }
#line 1385 "mercury_compile_middle_passes.m"
}

#line 1376 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1376 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1376 "mercury_compile_middle_passes.m"
{
#line 1376 "mercury_compile_middle_passes.m"
  {
#line 1376 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 1376 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 1376 "mercury_compile_middle_passes.m"
    {
#line 1376 "mercury_compile_middle_passes.m"
      transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 1376 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 1376 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 1376 "mercury_compile_middle_passes.m"
  }
#line 1376 "mercury_compile_middle_passes.m"
}

#line 1346 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1346 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1346 "mercury_compile_middle_passes.m"
{
#line 1349 "mercury_compile_middle_passes.m"
  {
#line 1349 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1349 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1349 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsWords_12;
#line 1349 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsCells_13;
#line 1349 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeTransform_14;

#line 1350 "mercury_compile_middle_passes.m"
    {
#line 1350 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1351 "mercury_compile_middle_passes.m"
    {
#line 1351 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 209, &top_level__mercury_compile_middle_passes__AsWords_12);
    }
#line 1352 "mercury_compile_middle_passes.m"
    {
#line 1352 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__AsCells_13);
    }
#line 1357 "mercury_compile_middle_passes.m"
#line 1357 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__AsWords_12) {
#line 1357 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1357 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1357 "mercury_compile_middle_passes.m"
#line 1357 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__AsCells_13) {
#line 1357 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1357 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1368 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1357 "mercury_compile_middle_passes.m"
            break;
#line 1357 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1362 "mercury_compile_middle_passes.m"
            {
#line 1364 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[2]);
#line 1362 "mercury_compile_middle_passes.m"
            }
#line 1357 "mercury_compile_middle_passes.m"
            break;
#line 1357 "mercury_compile_middle_passes.m"
        }
#line 1357 "mercury_compile_middle_passes.m"
        break;
#line 1357 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1357 "mercury_compile_middle_passes.m"
#line 1357 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__AsCells_13) {
#line 1357 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1357 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1358 "mercury_compile_middle_passes.m"
            {
#line 1360 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[3]);
#line 1358 "mercury_compile_middle_passes.m"
            }
#line 1357 "mercury_compile_middle_passes.m"
            break;
#line 1357 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1354 "mercury_compile_middle_passes.m"
            {
#line 1356 "mercury_compile_middle_passes.m"
              {
#line 1356 "mercury_compile_middle_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", (MR_String) "as_words and as_cells");
#line 1356 "mercury_compile_middle_passes.m"
                return;
              }
#line 1354 "mercury_compile_middle_passes.m"
            }
#line 1357 "mercury_compile_middle_passes.m"
            break;
#line 1357 "mercury_compile_middle_passes.m"
        }
#line 1357 "mercury_compile_middle_passes.m"
        break;
#line 1357 "mercury_compile_middle_passes.m"
    }
#line 1379 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeTransform_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1380 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1379 "mercury_compile_middle_passes.m"
    else
#line 1371 "mercury_compile_middle_passes.m"
      {
#line 1371 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Transform_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeTransform_14, (MR_Integer) 0)));
#line 1371 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_30_30;
#line 1371 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_32_32;

#line 1372 "mercury_compile_middle_passes.m"
        {
#line 1372 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying term size profiling transformation...\n");
        }
#line 1374 "mercury_compile_middle_passes.m"
        {
#line 1374 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1376 "mercury_compile_middle_passes.m"
        {
#line 1376 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1376 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]));
#line 1376 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1));
#line 1376 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1376 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__Transform_15));
#line 1376 "mercury_compile_middle_passes.m"
        }
#line 1376 "mercury_compile_middle_passes.m"
        {
#line 1376 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1376 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_32_32));
#line 1376 "mercury_compile_middle_passes.m"
        }
#line 1375 "mercury_compile_middle_passes.m"
        {
#line 1375 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 1377 "mercury_compile_middle_passes.m"
        {
#line 1377 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1378 "mercury_compile_middle_passes.m"
        {
#line 1378 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1378 "mercury_compile_middle_passes.m"
          return;
        }
#line 1371 "mercury_compile_middle_passes.m"
      }
#line 1349 "mercury_compile_middle_passes.m"
  }
#line 1346 "mercury_compile_middle_passes.m"
}

#line 1324 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1324 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1324 "mercury_compile_middle_passes.m"
{
#line 1327 "mercury_compile_middle_passes.m"
  {
#line 1327 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1327 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1327 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UseFloatRegs_12;

#line 1328 "mercury_compile_middle_passes.m"
    {
#line 1328 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1329 "mercury_compile_middle_passes.m"
    {
#line 1329 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 250, &top_level__mercury_compile_middle_passes__UseFloatRegs_12);
    }
#line 1340 "mercury_compile_middle_passes.m"
#line 1340 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__UseFloatRegs_12) {
#line 1340 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1340 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1341 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1340 "mercury_compile_middle_passes.m"
        break;
#line 1340 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1331 "mercury_compile_middle_passes.m"
        {
#line 1331 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_13;
#line 1331 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_15;
#line 1331 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24;
#line 1336 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_14;

#line 1332 "mercury_compile_middle_passes.m"
          {
#line 1332 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inserting float register wrappers...");
          }
#line 1334 "mercury_compile_middle_passes.m"
          {
#line 1334 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1335 "mercury_compile_middle_passes.m"
          {
#line 1335 "mercury_compile_middle_passes.m"
            transform_hlds__float_regs__insert_reg_wrappers_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_middle_passes__Specs_13);
          }
#line 1336 "mercury_compile_middle_passes.m"
          {
#line 1336 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_13, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_14, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_15);
          }
#line 1337 "mercury_compile_middle_passes.m"
          {
#line 1337 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
          }
#line 1338 "mercury_compile_middle_passes.m"
          {
#line 1338 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
          }
#line 1339 "mercury_compile_middle_passes.m"
          {
#line 1339 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1339 "mercury_compile_middle_passes.m"
            return;
          }
#line 1331 "mercury_compile_middle_passes.m"
        }
#line 1340 "mercury_compile_middle_passes.m"
        break;
#line 1340 "mercury_compile_middle_passes.m"
    }
#line 1327 "mercury_compile_middle_passes.m"
  }
#line 1324 "mercury_compile_middle_passes.m"
}

#line 1304 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1304 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1304 "mercury_compile_middle_passes.m"
{
#line 1307 "mercury_compile_middle_passes.m"
  {
#line 1307 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1307 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1307 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopControl_12;

#line 1308 "mercury_compile_middle_passes.m"
    {
#line 1308 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1309 "mercury_compile_middle_passes.m"
    {
#line 1309 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 662, &top_level__mercury_compile_middle_passes__LoopControl_12);
    }
#line 1318 "mercury_compile_middle_passes.m"
#line 1318 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__LoopControl_12) {
#line 1318 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1318 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1319 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1318 "mercury_compile_middle_passes.m"
        break;
#line 1318 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1311 "mercury_compile_middle_passes.m"
        {
#line 1312 "mercury_compile_middle_passes.m"
          {
#line 1312 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying parallel loop control transformation...\n");
          }
#line 1314 "mercury_compile_middle_passes.m"
          {
#line 1314 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1315 "mercury_compile_middle_passes.m"
          {
#line 1315 "mercury_compile_middle_passes.m"
            transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1316 "mercury_compile_middle_passes.m"
          {
#line 1316 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1317 "mercury_compile_middle_passes.m"
          {
#line 1317 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1317 "mercury_compile_middle_passes.m"
            return;
          }
#line 1311 "mercury_compile_middle_passes.m"
        }
#line 1318 "mercury_compile_middle_passes.m"
        break;
#line 1318 "mercury_compile_middle_passes.m"
    }
#line 1307 "mercury_compile_middle_passes.m"
  }
#line 1304 "mercury_compile_middle_passes.m"
}

#line 1287 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1287 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1287 "mercury_compile_middle_passes.m"
{
#line 1287 "mercury_compile_middle_passes.m"
  {
#line 1287 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1287 "mercury_compile_middle_passes.m"
    {
#line 1287 "mercury_compile_middle_passes.m"
      transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1287 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1287 "mercury_compile_middle_passes.m"
  }
#line 1287 "mercury_compile_middle_passes.m"
}

#line 1275 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1275 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 1275 "mercury_compile_middle_passes.m"
{
#line 1278 "mercury_compile_middle_passes.m"
  {
#line 1278 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1278 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_11;

#line 1279 "mercury_compile_middle_passes.m"
    {
#line 1279 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__HasParallelConj_11);
    }
#line 1298 "mercury_compile_middle_passes.m"
#line 1298 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__HasParallelConj_11) {
#line 1298 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1298 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1299 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 1298 "mercury_compile_middle_passes.m"
        break;
#line 1298 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1281 "mercury_compile_middle_passes.m"
        {
#line 1281 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 1281 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__SupportsParConj_13;

#line 1282 "mercury_compile_middle_passes.m"
          {
#line 1282 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_12);
          }
#line 1283 "mercury_compile_middle_passes.m"
          {
#line 1283 "mercury_compile_middle_passes.m"
            libs__globals__current_grade_supports_par_conj_2_p_0(top_level__mercury_compile_middle_passes__Globals_12, &top_level__mercury_compile_middle_passes__SupportsParConj_13);
          }
#line 1288 "mercury_compile_middle_passes.m"
#line 1288 "mercury_compile_middle_passes.m"
          switch (top_level__mercury_compile_middle_passes__SupportsParConj_13) {
#line 1288 "mercury_compile_middle_passes.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1288 "mercury_compile_middle_passes.m"
            case (MR_Integer) 0:
#line 1285 "mercury_compile_middle_passes.m"
              {
#line 1286 "mercury_compile_middle_passes.m"
                {
#line 1286 "mercury_compile_middle_passes.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[1]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 1286 "mercury_compile_middle_passes.m"
                  return;
                }
#line 1285 "mercury_compile_middle_passes.m"
              }
#line 1288 "mercury_compile_middle_passes.m"
              break;
#line 1288 "mercury_compile_middle_passes.m"
            case (MR_Integer) 1:
#line 1289 "mercury_compile_middle_passes.m"
              {
#line 1289 "mercury_compile_middle_passes.m"
                MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 1294 "mercury_compile_middle_passes.m"
                MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_14;

#line 1290 "mercury_compile_middle_passes.m"
                {
#line 1290 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Dependent parallel conjunction transformation...\n");
                }
#line 1292 "mercury_compile_middle_passes.m"
                {
#line 1292 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
                }
#line 1293 "mercury_compile_middle_passes.m"
                {
#line 1293 "mercury_compile_middle_passes.m"
                  transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
                }
#line 1294 "mercury_compile_middle_passes.m"
                {
#line 1294 "mercury_compile_middle_passes.m"
                  transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16, &top_level__mercury_compile_middle_passes___ElimSpecs_14);
                }
#line 1295 "mercury_compile_middle_passes.m"
                {
#line 1295 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
                }
#line 1296 "mercury_compile_middle_passes.m"
                {
#line 1296 "mercury_compile_middle_passes.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1296 "mercury_compile_middle_passes.m"
                  return;
                }
#line 1289 "mercury_compile_middle_passes.m"
              }
#line 1288 "mercury_compile_middle_passes.m"
              break;
#line 1288 "mercury_compile_middle_passes.m"
          }
#line 1281 "mercury_compile_middle_passes.m"
        }
#line 1298 "mercury_compile_middle_passes.m"
        break;
#line 1298 "mercury_compile_middle_passes.m"
    }
#line 1278 "mercury_compile_middle_passes.m"
  }
#line 1275 "mercury_compile_middle_passes.m"
}

#line 1230 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1230 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1230 "mercury_compile_middle_passes.m"
{
#line 1233 "mercury_compile_middle_passes.m"
  {
#line 1233 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1233 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1233 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1233 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1233 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Distance_14;
#line 1233 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_15;
#line 1241 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__V_24_24;

#line 1234 "mercury_compile_middle_passes.m"
    {
#line 1234 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1235 "mercury_compile_middle_passes.m"
    {
#line 1235 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 213, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1236 "mercury_compile_middle_passes.m"
    {
#line 1236 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 251, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1237 "mercury_compile_middle_passes.m"
    {
#line 1237 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 659, &top_level__mercury_compile_middle_passes__Distance_14);
    }
#line 1238 "mercury_compile_middle_passes.m"
    {
#line 1238 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__HasParallelConj_15);
    }
#line 1241 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1241 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1241 "mercury_compile_middle_passes.m"
      {
#line 1242 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HasParallelConj_15 == (MR_Integer) 0);
#line 1241 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1241 "mercury_compile_middle_passes.m"
          {
#line 1246 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1241 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1241 "mercury_compile_middle_passes.m"
              {
#line 1250 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__V_24_24 = (MR_Integer) 0;
#line 1250 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Distance_14 > top_level__mercury_compile_middle_passes__V_24_24);
#line 1241 "mercury_compile_middle_passes.m"
              }
#line 1241 "mercury_compile_middle_passes.m"
          }
#line 1241 "mercury_compile_middle_passes.m"
      }
#line 1269 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1252 "mercury_compile_middle_passes.m"
      {
#line 1252 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1252 "mercury_compile_middle_passes.m"
        {
#line 1252 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1261 "mercury_compile_middle_passes.m"
#line 1261 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__Target_16) {
#line 1261 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1261 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1254 "mercury_compile_middle_passes.m"
            {
#line 1255 "mercury_compile_middle_passes.m"
              {
#line 1255 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Distance granularity transformation...\n");
              }
#line 1257 "mercury_compile_middle_passes.m"
              {
#line 1257 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
              }
#line 1258 "mercury_compile_middle_passes.m"
              {
#line 1258 "mercury_compile_middle_passes.m"
                transform_hlds__distance_granularity__control_distance_granularity_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_middle_passes__Distance_14);
              }
#line 1259 "mercury_compile_middle_passes.m"
              {
#line 1259 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
              }
#line 1260 "mercury_compile_middle_passes.m"
              {
#line 1260 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1260 "mercury_compile_middle_passes.m"
                return;
              }
#line 1254 "mercury_compile_middle_passes.m"
            }
#line 1261 "mercury_compile_middle_passes.m"
            break;
#line 1261 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1262 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1261 "mercury_compile_middle_passes.m"
            break;
#line 1261 "mercury_compile_middle_passes.m"
          case (MR_Integer) 3:
#line 1264 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1261 "mercury_compile_middle_passes.m"
            break;
#line 1261 "mercury_compile_middle_passes.m"
          case (MR_Integer) 2:
#line 1263 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1261 "mercury_compile_middle_passes.m"
            break;
#line 1261 "mercury_compile_middle_passes.m"
        }
#line 1252 "mercury_compile_middle_passes.m"
      }
#line 1269 "mercury_compile_middle_passes.m"
    else
#line 1270 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1233 "mercury_compile_middle_passes.m"
  }
#line 1230 "mercury_compile_middle_passes.m"
}

#line 1186 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1186 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1186 "mercury_compile_middle_passes.m"
{
#line 1189 "mercury_compile_middle_passes.m"
  {
#line 1189 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1189 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1189 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1189 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1189 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Control_14;
#line 1189 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_15;

#line 1190 "mercury_compile_middle_passes.m"
    {
#line 1190 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1191 "mercury_compile_middle_passes.m"
    {
#line 1191 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 213, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1192 "mercury_compile_middle_passes.m"
    {
#line 1192 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 251, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1193 "mercury_compile_middle_passes.m"
    {
#line 1193 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 658, &top_level__mercury_compile_middle_passes__Control_14);
    }
#line 1194 "mercury_compile_middle_passes.m"
    {
#line 1194 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__HasParallelConj_15);
    }
#line 1197 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1197 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1197 "mercury_compile_middle_passes.m"
      {
#line 1198 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HasParallelConj_15 == (MR_Integer) 0);
#line 1197 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1197 "mercury_compile_middle_passes.m"
          {
#line 1202 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1197 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1205 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Control_14 == (MR_Integer) 1);
#line 1197 "mercury_compile_middle_passes.m"
          }
#line 1197 "mercury_compile_middle_passes.m"
      }
#line 1224 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1207 "mercury_compile_middle_passes.m"
      {
#line 1207 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1207 "mercury_compile_middle_passes.m"
        {
#line 1207 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1216 "mercury_compile_middle_passes.m"
#line 1216 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__Target_16) {
#line 1216 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1216 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1209 "mercury_compile_middle_passes.m"
            {
#line 1210 "mercury_compile_middle_passes.m"
              {
#line 1210 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Granularity control transformation...\n");
              }
#line 1212 "mercury_compile_middle_passes.m"
              {
#line 1212 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
              }
#line 1213 "mercury_compile_middle_passes.m"
              {
#line 1213 "mercury_compile_middle_passes.m"
                transform_hlds__granularity__control_granularity_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
              }
#line 1214 "mercury_compile_middle_passes.m"
              {
#line 1214 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
              }
#line 1215 "mercury_compile_middle_passes.m"
              {
#line 1215 "mercury_compile_middle_passes.m"
                libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1215 "mercury_compile_middle_passes.m"
                return;
              }
#line 1209 "mercury_compile_middle_passes.m"
            }
#line 1216 "mercury_compile_middle_passes.m"
            break;
#line 1216 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1217 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1216 "mercury_compile_middle_passes.m"
            break;
#line 1216 "mercury_compile_middle_passes.m"
          case (MR_Integer) 3:
#line 1219 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1216 "mercury_compile_middle_passes.m"
            break;
#line 1216 "mercury_compile_middle_passes.m"
          case (MR_Integer) 2:
#line 1218 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1216 "mercury_compile_middle_passes.m"
            break;
#line 1216 "mercury_compile_middle_passes.m"
        }
#line 1207 "mercury_compile_middle_passes.m"
      }
#line 1224 "mercury_compile_middle_passes.m"
    else
#line 1225 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1189 "mercury_compile_middle_passes.m"
  }
#line 1186 "mercury_compile_middle_passes.m"
}

#line 1167 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1167 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1167 "mercury_compile_middle_passes.m"
{
#line 1170 "mercury_compile_middle_passes.m"
  {
#line 1170 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1170 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1170 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_12;

#line 1171 "mercury_compile_middle_passes.m"
    {
#line 1171 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1172 "mercury_compile_middle_passes.m"
    {
#line 1172 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 390, &top_level__mercury_compile_middle_passes__TablingAnalysis_12);
    }
#line 1180 "mercury_compile_middle_passes.m"
#line 1180 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TablingAnalysis_12) {
#line 1180 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1180 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1181 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1180 "mercury_compile_middle_passes.m"
        break;
#line 1180 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1174 "mercury_compile_middle_passes.m"
        {
#line 1175 "mercury_compile_middle_passes.m"
          {
#line 1175 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing minimal model tabling...\n");
          }
#line 1177 "mercury_compile_middle_passes.m"
          {
#line 1177 "mercury_compile_middle_passes.m"
            transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1178 "mercury_compile_middle_passes.m"
          {
#line 1178 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1179 "mercury_compile_middle_passes.m"
          {
#line 1179 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1179 "mercury_compile_middle_passes.m"
            return;
          }
#line 1174 "mercury_compile_middle_passes.m"
        }
#line 1180 "mercury_compile_middle_passes.m"
        break;
#line 1180 "mercury_compile_middle_passes.m"
    }
#line 1170 "mercury_compile_middle_passes.m"
  }
#line 1167 "mercury_compile_middle_passes.m"
}

#line 1147 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1147 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1147 "mercury_compile_middle_passes.m"
{
#line 1150 "mercury_compile_middle_passes.m"
  {
#line 1150 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1150 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1150 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LCO_12;

#line 1151 "mercury_compile_middle_passes.m"
    {
#line 1151 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1152 "mercury_compile_middle_passes.m"
    {
#line 1152 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 358, &top_level__mercury_compile_middle_passes__LCO_12);
    }
#line 1161 "mercury_compile_middle_passes.m"
#line 1161 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__LCO_12) {
#line 1161 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1161 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1162 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1161 "mercury_compile_middle_passes.m"
        break;
#line 1161 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1154 "mercury_compile_middle_passes.m"
        {
#line 1155 "mercury_compile_middle_passes.m"
          {
#line 1155 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Looking for LCO modulo constructor application ...\n");
          }
#line 1157 "mercury_compile_middle_passes.m"
          {
#line 1157 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1158 "mercury_compile_middle_passes.m"
          {
#line 1158 "mercury_compile_middle_passes.m"
            transform_hlds__lco__lco_modulo_constructors_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1159 "mercury_compile_middle_passes.m"
          {
#line 1159 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1160 "mercury_compile_middle_passes.m"
          {
#line 1160 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1160 "mercury_compile_middle_passes.m"
            return;
          }
#line 1154 "mercury_compile_middle_passes.m"
        }
#line 1161 "mercury_compile_middle_passes.m"
        break;
#line 1161 "mercury_compile_middle_passes.m"
    }
#line 1150 "mercury_compile_middle_passes.m"
  }
#line 1147 "mercury_compile_middle_passes.m"
}

#line 1137 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1137 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1137 "mercury_compile_middle_passes.m"
{
#line 1137 "mercury_compile_middle_passes.m"
  {
#line 1137 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1137 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3;
#line 1137 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5;

#line 1137 "mercury_compile_middle_passes.m"
    {
#line 1137 "mercury_compile_middle_passes.m"
      transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5);
    }
#line 1137 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3));
#line 1137 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5));
#line 1137 "mercury_compile_middle_passes.m"
  }
#line 1137 "mercury_compile_middle_passes.m"
}

#line 1126 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1126 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1126 "mercury_compile_middle_passes.m"
{
#line 1129 "mercury_compile_middle_passes.m"
  {
#line 1129 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1129 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1129 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UnneededCode_12;

#line 1130 "mercury_compile_middle_passes.m"
    {
#line 1130 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1131 "mercury_compile_middle_passes.m"
    {
#line 1131 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 349, &top_level__mercury_compile_middle_passes__UnneededCode_12);
    }
#line 1141 "mercury_compile_middle_passes.m"
#line 1141 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__UnneededCode_12) {
#line 1141 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1141 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1142 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1141 "mercury_compile_middle_passes.m"
        break;
#line 1141 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1133 "mercury_compile_middle_passes.m"
        {
#line 1134 "mercury_compile_middle_passes.m"
          {
#line 1134 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Removing unneeded code from procedure bodies...\n");
          }
#line 1136 "mercury_compile_middle_passes.m"
          {
#line 1136 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1137 "mercury_compile_middle_passes.m"
          {
#line 1137 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[3]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1139 "mercury_compile_middle_passes.m"
          {
#line 1139 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1140 "mercury_compile_middle_passes.m"
          {
#line 1140 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1140 "mercury_compile_middle_passes.m"
            return;
          }
#line 1133 "mercury_compile_middle_passes.m"
        }
#line 1141 "mercury_compile_middle_passes.m"
        break;
#line 1141 "mercury_compile_middle_passes.m"
    }
#line 1129 "mercury_compile_middle_passes.m"
  }
#line 1126 "mercury_compile_middle_passes.m"
}

#line 1108 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1108 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1108 "mercury_compile_middle_passes.m"
{
#line 1111 "mercury_compile_middle_passes.m"
  {
#line 1111 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1111 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalyseTrail_12;

#line 1112 "mercury_compile_middle_passes.m"
    {
#line 1112 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1113 "mercury_compile_middle_passes.m"
    {
#line 1113 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 387, &top_level__mercury_compile_middle_passes__AnalyseTrail_12);
    }
#line 1120 "mercury_compile_middle_passes.m"
#line 1120 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__AnalyseTrail_12) {
#line 1120 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1120 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1121 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1120 "mercury_compile_middle_passes.m"
        break;
#line 1120 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1115 "mercury_compile_middle_passes.m"
        {
#line 1116 "mercury_compile_middle_passes.m"
          {
#line 1116 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing trail usage...\n");
          }
#line 1117 "mercury_compile_middle_passes.m"
          {
#line 1117 "mercury_compile_middle_passes.m"
            transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1118 "mercury_compile_middle_passes.m"
          {
#line 1118 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Trail usage analysis done.\n");
          }
#line 1119 "mercury_compile_middle_passes.m"
          {
#line 1119 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1119 "mercury_compile_middle_passes.m"
            return;
          }
#line 1115 "mercury_compile_middle_passes.m"
        }
#line 1120 "mercury_compile_middle_passes.m"
        break;
#line 1120 "mercury_compile_middle_passes.m"
    }
#line 1111 "mercury_compile_middle_passes.m"
  }
#line 1108 "mercury_compile_middle_passes.m"
}

#line 1064 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1064 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1064 "mercury_compile_middle_passes.m"
{
#line 1067 "mercury_compile_middle_passes.m"
  {
#line 1067 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1067 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1067 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;

#line 1068 "mercury_compile_middle_passes.m"
    {
#line 1068 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1069 "mercury_compile_middle_passes.m"
    {
#line 1069 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 402, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 1078 "mercury_compile_middle_passes.m"
#line 1078 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ReuseAnalysis_12) {
#line 1078 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1078 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1079 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1078 "mercury_compile_middle_passes.m"
        break;
#line 1078 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1072 "mercury_compile_middle_passes.m"
        {
#line 1073 "mercury_compile_middle_passes.m"
          {
#line 1073 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure reuse analysis...\n");
          }
#line 1074 "mercury_compile_middle_passes.m"
          {
#line 1074 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1075 "mercury_compile_middle_passes.m"
          {
#line 1075 "mercury_compile_middle_passes.m"
            transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1076 "mercury_compile_middle_passes.m"
          {
#line 1076 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1077 "mercury_compile_middle_passes.m"
          {
#line 1077 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1077 "mercury_compile_middle_passes.m"
            return;
          }
#line 1072 "mercury_compile_middle_passes.m"
        }
#line 1078 "mercury_compile_middle_passes.m"
        break;
#line 1078 "mercury_compile_middle_passes.m"
    }
#line 1067 "mercury_compile_middle_passes.m"
  }
#line 1064 "mercury_compile_middle_passes.m"
}

#line 1045 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1045 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1045 "mercury_compile_middle_passes.m"
{
#line 1048 "mercury_compile_middle_passes.m"
  {
#line 1048 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1048 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1048 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Sharing_12;

#line 1049 "mercury_compile_middle_passes.m"
    {
#line 1049 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1050 "mercury_compile_middle_passes.m"
    {
#line 1050 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 400, &top_level__mercury_compile_middle_passes__Sharing_12);
    }
#line 1058 "mercury_compile_middle_passes.m"
#line 1058 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Sharing_12) {
#line 1058 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1058 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1059 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1058 "mercury_compile_middle_passes.m"
        break;
#line 1058 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1052 "mercury_compile_middle_passes.m"
        {
#line 1053 "mercury_compile_middle_passes.m"
          {
#line 1053 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure sharing analysis...\n");
          }
#line 1054 "mercury_compile_middle_passes.m"
          {
#line 1054 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1055 "mercury_compile_middle_passes.m"
          {
#line 1055 "mercury_compile_middle_passes.m"
            transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1056 "mercury_compile_middle_passes.m"
          {
#line 1056 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1057 "mercury_compile_middle_passes.m"
          {
#line 1057 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1057 "mercury_compile_middle_passes.m"
            return;
          }
#line 1052 "mercury_compile_middle_passes.m"
        }
#line 1058 "mercury_compile_middle_passes.m"
        break;
#line 1058 "mercury_compile_middle_passes.m"
    }
#line 1048 "mercury_compile_middle_passes.m"
  }
#line 1045 "mercury_compile_middle_passes.m"
}

#line 1035 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1035 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1035 "mercury_compile_middle_passes.m"
{
#line 1035 "mercury_compile_middle_passes.m"
  {
#line 1035 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1035 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1035 "mercury_compile_middle_passes.m"
    {
#line 1035 "mercury_compile_middle_passes.m"
      transform_hlds__delay_construct__delay_construct_proc_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1035 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1035 "mercury_compile_middle_passes.m"
  }
#line 1035 "mercury_compile_middle_passes.m"
}

#line 1024 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1024 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1024 "mercury_compile_middle_passes.m"
{
#line 1027 "mercury_compile_middle_passes.m"
  {
#line 1027 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1027 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1027 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__DelayConstruct_12;

#line 1028 "mercury_compile_middle_passes.m"
    {
#line 1028 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1029 "mercury_compile_middle_passes.m"
    {
#line 1029 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 379, &top_level__mercury_compile_middle_passes__DelayConstruct_12);
    }
#line 1039 "mercury_compile_middle_passes.m"
#line 1039 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__DelayConstruct_12) {
#line 1039 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1039 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 1040 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1039 "mercury_compile_middle_passes.m"
        break;
#line 1039 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 1031 "mercury_compile_middle_passes.m"
        {
#line 1032 "mercury_compile_middle_passes.m"
          {
#line 1032 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Delaying construction unifications ...\n");
          }
#line 1034 "mercury_compile_middle_passes.m"
          {
#line 1034 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 1035 "mercury_compile_middle_passes.m"
          {
#line 1035 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[0]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 1037 "mercury_compile_middle_passes.m"
          {
#line 1037 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 1038 "mercury_compile_middle_passes.m"
          {
#line 1038 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1038 "mercury_compile_middle_passes.m"
            return;
          }
#line 1031 "mercury_compile_middle_passes.m"
        }
#line 1039 "mercury_compile_middle_passes.m"
        break;
#line 1039 "mercury_compile_middle_passes.m"
    }
#line 1027 "mercury_compile_middle_passes.m"
  }
#line 1024 "mercury_compile_middle_passes.m"
}

#line 981 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 981 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 981 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 981 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 981 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 981 "mercury_compile_middle_passes.m"
{
#line 984 "mercury_compile_middle_passes.m"
  {
#line 984 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 984 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 984 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Deforest_12;
#line 984 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Constraints_13;

#line 985 "mercury_compile_middle_passes.m"
    {
#line 985 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 986 "mercury_compile_middle_passes.m"
    {
#line 986 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 382, &top_level__mercury_compile_middle_passes__Deforest_12);
    }
#line 989 "mercury_compile_middle_passes.m"
    {
#line 989 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 343, &top_level__mercury_compile_middle_passes__Constraints_13);
    }
#line 992 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Deforest_12 == (MR_Integer) 1);
#line 993 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 993 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 1);
#line 1018 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1012 "mercury_compile_middle_passes.m"
      {
#line 1012 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__Msg_14;

#line 1000 "mercury_compile_middle_passes.m"
#line 1000 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__Deforest_12) {
#line 1000 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1000 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 1000 "mercury_compile_middle_passes.m"
#line 1000 "mercury_compile_middle_passes.m"
            switch (top_level__mercury_compile_middle_passes__Constraints_13) {
#line 1000 "mercury_compile_middle_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1000 "mercury_compile_middle_passes.m"
              case (MR_Integer) 0:
#line 997 "mercury_compile_middle_passes.m"
                {
#line 999 "mercury_compile_middle_passes.m"
                  {
#line 999 "mercury_compile_middle_passes.m"
                    mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", (MR_String) "no no");
#line 999 "mercury_compile_middle_passes.m"
                    return;
                  }
#line 997 "mercury_compile_middle_passes.m"
                }
#line 1000 "mercury_compile_middle_passes.m"
                break;
#line 1000 "mercury_compile_middle_passes.m"
              case (MR_Integer) 1:
#line 1011 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Constraint propagation...\n";
#line 1000 "mercury_compile_middle_passes.m"
                break;
#line 1000 "mercury_compile_middle_passes.m"
            }
#line 1000 "mercury_compile_middle_passes.m"
            break;
#line 1000 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 1000 "mercury_compile_middle_passes.m"
#line 1000 "mercury_compile_middle_passes.m"
            switch (top_level__mercury_compile_middle_passes__Constraints_13) {
#line 1000 "mercury_compile_middle_passes.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1000 "mercury_compile_middle_passes.m"
              case (MR_Integer) 0:
#line 1007 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation...\n";
#line 1000 "mercury_compile_middle_passes.m"
                break;
#line 1000 "mercury_compile_middle_passes.m"
              case (MR_Integer) 1:
#line 1003 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation and constraint propagation...\n";
#line 1000 "mercury_compile_middle_passes.m"
                break;
#line 1000 "mercury_compile_middle_passes.m"
            }
#line 1000 "mercury_compile_middle_passes.m"
            break;
#line 1000 "mercury_compile_middle_passes.m"
        }
#line 1013 "mercury_compile_middle_passes.m"
        {
#line 1013 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Msg_14);
        }
#line 1014 "mercury_compile_middle_passes.m"
        {
#line 1014 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1015 "mercury_compile_middle_passes.m"
        {
#line 1015 "mercury_compile_middle_passes.m"
          transform_hlds__deforest__deforestation_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
        }
#line 1016 "mercury_compile_middle_passes.m"
        {
#line 1016 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1017 "mercury_compile_middle_passes.m"
        {
#line 1017 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1017 "mercury_compile_middle_passes.m"
          return;
        }
#line 1012 "mercury_compile_middle_passes.m"
      }
#line 1018 "mercury_compile_middle_passes.m"
    else
#line 1019 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 984 "mercury_compile_middle_passes.m"
  }
#line 981 "mercury_compile_middle_passes.m"
}

#line 972 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 972 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6)
#line 972 "mercury_compile_middle_passes.m"
{
#line 972 "mercury_compile_middle_passes.m"
  {
#line 972 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 972 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 972 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 972 "mercury_compile_middle_passes.m"
    {
#line 972 "mercury_compile_middle_passes.m"
      transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 972 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 972 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 972 "mercury_compile_middle_passes.m"
  }
#line 972 "mercury_compile_middle_passes.m"
}

#line 955 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 955 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19)
#line 955 "mercury_compile_middle_passes.m"
{
#line 959 "mercury_compile_middle_passes.m"
  {
#line 959 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 959 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_14;
#line 959 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopInv_15;

#line 960 "mercury_compile_middle_passes.m"
    {
#line 960 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_14);
    }
#line 961 "mercury_compile_middle_passes.m"
    {
#line 961 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_14, (MR_Integer) 378, &top_level__mercury_compile_middle_passes__LoopInv_15);
    }
#line 975 "mercury_compile_middle_passes.m"
#line 975 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__LoopInv_15) {
#line 975 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 975 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 976 "mercury_compile_middle_passes.m"
        {
#line 976 "mercury_compile_middle_passes.m"
          *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 976 "mercury_compile_middle_passes.m"
          *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18;
#line 976 "mercury_compile_middle_passes.m"
        }
#line 975 "mercury_compile_middle_passes.m"
        break;
#line 975 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 963 "mercury_compile_middle_passes.m"
        {
#line 963 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;

#line 966 "mercury_compile_middle_passes.m"
          {
#line 966 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__Stats_10, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
          }
#line 967 "mercury_compile_middle_passes.m"
          {
#line 967 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 148, (MR_String) "mark_static", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
          }
#line 969 "mercury_compile_middle_passes.m"
          {
#line 969 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Hoisting loop invariants...\n");
          }
#line 970 "mercury_compile_middle_passes.m"
          {
#line 970 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
          }
#line 971 "mercury_compile_middle_passes.m"
          {
#line 971 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[2]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
          }
#line 973 "mercury_compile_middle_passes.m"
          {
#line 973 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% done.\n");
          }
#line 974 "mercury_compile_middle_passes.m"
          {
#line 974 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_10);
#line 974 "mercury_compile_middle_passes.m"
            return;
          }
#line 963 "mercury_compile_middle_passes.m"
        }
#line 975 "mercury_compile_middle_passes.m"
        break;
#line 975 "mercury_compile_middle_passes.m"
    }
#line 959 "mercury_compile_middle_passes.m"
  }
#line 955 "mercury_compile_middle_passes.m"
}

#line 928 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 928 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 928 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 928 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 928 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 928 "mercury_compile_middle_passes.m"
{
#line 931 "mercury_compile_middle_passes.m"
  {
#line 931 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 931 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 931 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Allow_12;
#line 931 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Simple_13;
#line 931 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SingleUse_14;
#line 931 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Threshold_15;

#line 932 "mercury_compile_middle_passes.m"
    {
#line 932 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 933 "mercury_compile_middle_passes.m"
    {
#line 933 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 328, &top_level__mercury_compile_middle_passes__Allow_12);
    }
#line 934 "mercury_compile_middle_passes.m"
    {
#line 934 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 330, &top_level__mercury_compile_middle_passes__Simple_13);
    }
#line 935 "mercury_compile_middle_passes.m"
    {
#line 935 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 332, &top_level__mercury_compile_middle_passes__SingleUse_14);
    }
#line 936 "mercury_compile_middle_passes.m"
    {
#line 936 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 334, &top_level__mercury_compile_middle_passes__Threshold_15);
    }
#line 938 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Allow_12 == (MR_Integer) 1);
#line 938 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 938 "mercury_compile_middle_passes.m"
      {
#line 939 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Simple_13 == (MR_Integer) 1);
#line 940 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 940 "mercury_compile_middle_passes.m"
          {
#line 940 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SingleUse_14 == (MR_Integer) 1);
#line 940 "mercury_compile_middle_passes.m"
            if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 941 "mercury_compile_middle_passes.m"
              {
#line 941 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Threshold_15 > (MR_Integer) 0);
#line 941 "mercury_compile_middle_passes.m"
              }
#line 940 "mercury_compile_middle_passes.m"
          }
#line 938 "mercury_compile_middle_passes.m"
      }
#line 949 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 944 "mercury_compile_middle_passes.m"
      {
#line 944 "mercury_compile_middle_passes.m"
        {
#line 944 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inlining...\n");
        }
#line 945 "mercury_compile_middle_passes.m"
        {
#line 945 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 946 "mercury_compile_middle_passes.m"
        {
#line 946 "mercury_compile_middle_passes.m"
          transform_hlds__inlining__inlining_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 947 "mercury_compile_middle_passes.m"
        {
#line 947 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 948 "mercury_compile_middle_passes.m"
        {
#line 948 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 948 "mercury_compile_middle_passes.m"
          return;
        }
#line 944 "mercury_compile_middle_passes.m"
      }
#line 949 "mercury_compile_middle_passes.m"
    else
#line 950 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 931 "mercury_compile_middle_passes.m"
  }
#line 928 "mercury_compile_middle_passes.m"
}

#line 908 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 908 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8)
#line 908 "mercury_compile_middle_passes.m"
{
#line 908 "mercury_compile_middle_passes.m"
  {
#line 908 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 908 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4;
#line 908 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6;
#line 908 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8;

#line 908 "mercury_compile_middle_passes.m"
    {
#line 908 "mercury_compile_middle_passes.m"
      transform_hlds__accumulator__accu_transform_proc_8_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_7), &top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8);
    }
#line 908 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4));
#line 908 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6));
#line 908 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_8 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8));
#line 908 "mercury_compile_middle_passes.m"
  }
#line 908 "mercury_compile_middle_passes.m"
}

#line 896 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 896 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 896 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 896 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 896 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23)
#line 896 "mercury_compile_middle_passes.m"
{
#line 899 "mercury_compile_middle_passes.m"
  {
#line 899 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 899 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 899 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_12;

#line 900 "mercury_compile_middle_passes.m"
    {
#line 900 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 901 "mercury_compile_middle_passes.m"
    {
#line 901 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 355, &top_level__mercury_compile_middle_passes__Optimize_12);
    }
#line 922 "mercury_compile_middle_passes.m"
#line 922 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Optimize_12) {
#line 922 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 922 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 923 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22;
#line 922 "mercury_compile_middle_passes.m"
        break;
#line 922 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 903 "mercury_compile_middle_passes.m"
        {
#line 903 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__TypeInfo_43_43;
#line 903 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Cookie0_13;
#line 903 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Task0_14;
#line 903 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Task_15;
#line 903 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_19;
#line 903 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_21;
#line 903 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 915 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 911 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Cookie_17;
#line 911 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 912 "mercury_compile_middle_passes.m"
          MR_Box top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18;
#line 918 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_20;

#line 904 "mercury_compile_middle_passes.m"
          {
#line 904 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Attempting to introduce accumulators...\n");
          }
#line 906 "mercury_compile_middle_passes.m"
          {
#line 906 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 3565 "top_level.mercury_compile_middle_passes.c"
          top_level__mercury_compile_middle_passes__TypeInfo_43_43 = (MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[1];
#line 907 "mercury_compile_middle_passes.m"
          {
#line 907 "mercury_compile_middle_passes.m"
            mercury__univ__type_to_univ_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile_middle_passes__Cookie0_13);
          }
#line 908 "mercury_compile_middle_passes.m"
          {
#line 908 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Task0_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 908 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 908 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
#line 908 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 2) = ((MR_Box) (top_level__mercury_compile_middle_passes__Cookie0_13));
#line 908 "mercury_compile_middle_passes.m"
          }
#line 909 "mercury_compile_middle_passes.m"
          {
#line 909 "mercury_compile_middle_passes.m"
            hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(top_level__mercury_compile_middle_passes__Task0_14, &top_level__mercury_compile_middle_passes__Task_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
          }
#line 911 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__succeeded = ((((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__Task_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 911 "mercury_compile_middle_passes.m"
          if (top_level__mercury_compile_middle_passes__succeeded)
#line 911 "mercury_compile_middle_passes.m"
            {
#line 911 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 1)));
#line 911 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__Cookie_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 2)));
#line 912 "mercury_compile_middle_passes.m"
              {
#line 912 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = mercury__univ__univ_to_type_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, top_level__mercury_compile_middle_passes__Cookie_17, &top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
              }
#line 912 "mercury_compile_middle_passes.m"
              if (top_level__mercury_compile_middle_passes__succeeded)
#line 912 "mercury_compile_middle_passes.m"
                {
#line 912 "mercury_compile_middle_passes.m"
                  top_level__mercury_compile_middle_passes__SpecsPrime_18 = ((MR_Word) top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
#line 912 "mercury_compile_middle_passes.m"
                  top_level__mercury_compile_middle_passes__succeeded = MR_TRUE;
#line 912 "mercury_compile_middle_passes.m"
                }
#line 911 "mercury_compile_middle_passes.m"
            }
#line 915 "mercury_compile_middle_passes.m"
          if (top_level__mercury_compile_middle_passes__succeeded)
#line 914 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Specs_19 = top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 915 "mercury_compile_middle_passes.m"
          else
#line 916 "mercury_compile_middle_passes.m"
            {
#line 916 "mercury_compile_middle_passes.m"
              {
#line 916 "mercury_compile_middle_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/6", (MR_String) "bad task");
#line 916 "mercury_compile_middle_passes.m"
                return;
              }
#line 916 "mercury_compile_middle_passes.m"
            }
#line 918 "mercury_compile_middle_passes.m"
          {
#line 918 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_19, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_20, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_21);
          }
#line 919 "mercury_compile_middle_passes.m"
          {
#line 919 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_21, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);
          }
#line 920 "mercury_compile_middle_passes.m"
          {
#line 920 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 921 "mercury_compile_middle_passes.m"
          {
#line 921 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 921 "mercury_compile_middle_passes.m"
            return;
          }
#line 903 "mercury_compile_middle_passes.m"
        }
#line 922 "mercury_compile_middle_passes.m"
        break;
#line 922 "mercury_compile_middle_passes.m"
    }
#line 899 "mercury_compile_middle_passes.m"
  }
#line 896 "mercury_compile_middle_passes.m"
}

#line 874 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 874 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 874 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 874 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 874 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 874 "mercury_compile_middle_passes.m"
{
#line 877 "mercury_compile_middle_passes.m"
  {
#line 877 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 877 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 877 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImplicitParallelism_12;

#line 878 "mercury_compile_middle_passes.m"
    {
#line 878 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 879 "mercury_compile_middle_passes.m"
    {
#line 879 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 660, &top_level__mercury_compile_middle_passes__ImplicitParallelism_12);
    }
#line 889 "mercury_compile_middle_passes.m"
#line 889 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ImplicitParallelism_12) {
#line 889 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 889 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 891 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 889 "mercury_compile_middle_passes.m"
        break;
#line 889 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 882 "mercury_compile_middle_passes.m"
        {
#line 883 "mercury_compile_middle_passes.m"
          {
#line 883 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying implicit parallelism...\n");
          }
#line 885 "mercury_compile_middle_passes.m"
          {
#line 885 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 886 "mercury_compile_middle_passes.m"
          {
#line 886 "mercury_compile_middle_passes.m"
            transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 887 "mercury_compile_middle_passes.m"
          {
#line 887 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 888 "mercury_compile_middle_passes.m"
          {
#line 888 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 888 "mercury_compile_middle_passes.m"
            return;
          }
#line 882 "mercury_compile_middle_passes.m"
        }
#line 889 "mercury_compile_middle_passes.m"
        break;
#line 889 "mercury_compile_middle_passes.m"
    }
#line 877 "mercury_compile_middle_passes.m"
  }
#line 874 "mercury_compile_middle_passes.m"
}

#line 853 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 853 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 853 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 853 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 853 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 853 "mercury_compile_middle_passes.m"
{
#line 856 "mercury_compile_middle_passes.m"
  {
#line 856 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 856 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 856 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ForceDisableSSDB_12;

#line 857 "mercury_compile_middle_passes.m"
    {
#line 857 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 858 "mercury_compile_middle_passes.m"
    {
#line 858 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 135, &top_level__mercury_compile_middle_passes__ForceDisableSSDB_12);
    }
#line 868 "mercury_compile_middle_passes.m"
#line 868 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ForceDisableSSDB_12) {
#line 868 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 868 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 861 "mercury_compile_middle_passes.m"
        {
#line 862 "mercury_compile_middle_passes.m"
          {
#line 862 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Maybe apply source to source debugging transformation ...\n");
          }
#line 865 "mercury_compile_middle_passes.m"
          {
#line 865 "mercury_compile_middle_passes.m"
            transform_hlds__ssdebug__ssdebug_transform_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 866 "mercury_compile_middle_passes.m"
          {
#line 866 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 867 "mercury_compile_middle_passes.m"
          {
#line 867 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 867 "mercury_compile_middle_passes.m"
            return;
          }
#line 861 "mercury_compile_middle_passes.m"
        }
#line 868 "mercury_compile_middle_passes.m"
        break;
#line 868 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 869 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 868 "mercury_compile_middle_passes.m"
        break;
#line 868 "mercury_compile_middle_passes.m"
    }
#line 856 "mercury_compile_middle_passes.m"
  }
#line 853 "mercury_compile_middle_passes.m"
}

#line 818 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 818 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 818 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 818 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 818 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20)
#line 818 "mercury_compile_middle_passes.m"
{
#line 821 "mercury_compile_middle_passes.m"
  {
#line 821 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 821 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 821 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HigherOrder_12;
#line 821 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Types_13;
#line 821 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecInfo_14;
#line 821 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecPreds_15;
#line 832 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 832 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_17_17;
#line 832 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_18_18;

#line 822 "mercury_compile_middle_passes.m"
    {
#line 822 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 823 "mercury_compile_middle_passes.m"
    {
#line 823 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 346, &top_level__mercury_compile_middle_passes__HigherOrder_12);
    }
#line 825 "mercury_compile_middle_passes.m"
    {
#line 825 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 354, &top_level__mercury_compile_middle_passes__Types_13);
    }
#line 831 "mercury_compile_middle_passes.m"
    {
#line 831 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__TypeSpecInfo_14);
    }
#line 832 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__TypeSpecPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 0)));
#line 832 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 1)));
#line 832 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 2)));
#line 832 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 3)));
#line 834 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HigherOrder_12 == (MR_Integer) 1);
#line 835 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 835 "mercury_compile_middle_passes.m"
      {
#line 835 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Types_13 == (MR_Integer) 1);
#line 835 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 836 "mercury_compile_middle_passes.m"
          {
#line 836 "mercury_compile_middle_passes.m"
            {
#line 836 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, top_level__mercury_compile_middle_passes__TypeSpecPreds_15);
            }
#line 836 "mercury_compile_middle_passes.m"
          }
#line 835 "mercury_compile_middle_passes.m"
      }
#line 847 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 841 "mercury_compile_middle_passes.m"
      {
#line 839 "mercury_compile_middle_passes.m"
        {
#line 839 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
        }
#line 842 "mercury_compile_middle_passes.m"
        {
#line 842 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 844 "mercury_compile_middle_passes.m"
        {
#line 844 "mercury_compile_middle_passes.m"
          transform_hlds__higher_order__specialize_higher_order_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);
        }
#line 845 "mercury_compile_middle_passes.m"
        {
#line 845 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 846 "mercury_compile_middle_passes.m"
        {
#line 846 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 846 "mercury_compile_middle_passes.m"
          return;
        }
#line 841 "mercury_compile_middle_passes.m"
      }
#line 847 "mercury_compile_middle_passes.m"
    else
#line 848 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19;
#line 821 "mercury_compile_middle_passes.m"
  }
#line 818 "mercury_compile_middle_passes.m"
}

#line 799 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 799 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 799 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 799 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 799 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 799 "mercury_compile_middle_passes.m"
{
#line 802 "mercury_compile_middle_passes.m"
  {
#line 802 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 802 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 802 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Tuple_12;

#line 803 "mercury_compile_middle_passes.m"
    {
#line 803 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 804 "mercury_compile_middle_passes.m"
    {
#line 804 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 392, &top_level__mercury_compile_middle_passes__Tuple_12);
    }
#line 812 "mercury_compile_middle_passes.m"
#line 812 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Tuple_12) {
#line 812 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 812 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 813 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 812 "mercury_compile_middle_passes.m"
        break;
#line 812 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 806 "mercury_compile_middle_passes.m"
        {
#line 807 "mercury_compile_middle_passes.m"
          {
#line 807 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Tupling...\n");
          }
#line 808 "mercury_compile_middle_passes.m"
          {
#line 808 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 809 "mercury_compile_middle_passes.m"
          {
#line 809 "mercury_compile_middle_passes.m"
            transform_hlds__tupling__tuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 810 "mercury_compile_middle_passes.m"
          {
#line 810 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 811 "mercury_compile_middle_passes.m"
          {
#line 811 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 811 "mercury_compile_middle_passes.m"
            return;
          }
#line 806 "mercury_compile_middle_passes.m"
        }
#line 812 "mercury_compile_middle_passes.m"
        break;
#line 812 "mercury_compile_middle_passes.m"
    }
#line 802 "mercury_compile_middle_passes.m"
  }
#line 799 "mercury_compile_middle_passes.m"
}

#line 790 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 790 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg)
#line 790 "mercury_compile_middle_passes.m"
{
#line 790 "mercury_compile_middle_passes.m"
  {
#line 790 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 790 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;

#line 790 "mercury_compile_middle_passes.m"
    {
#line 790 "mercury_compile_middle_passes.m"
      return top_level__mercury_compile_middle_passes__succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__790__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))));
    }
#line 790 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 790 "mercury_compile_middle_passes.m"
  }
#line 790 "mercury_compile_middle_passes.m"
}

#line 776 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 776 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 776 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 776 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 776 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 776 "mercury_compile_middle_passes.m"
{
#line 779 "mercury_compile_middle_passes.m"
  {
#line 779 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 779 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 779 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Untuple_12;

#line 780 "mercury_compile_middle_passes.m"
    {
#line 780 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 781 "mercury_compile_middle_passes.m"
    {
#line 781 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 391, &top_level__mercury_compile_middle_passes__Untuple_12);
    }
#line 793 "mercury_compile_middle_passes.m"
#line 793 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Untuple_12) {
#line 793 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 793 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 794 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 793 "mercury_compile_middle_passes.m"
        break;
#line 793 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 783 "mercury_compile_middle_passes.m"
        {
#line 783 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__SimplifySpecs_13;
#line 783 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 783 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__V_31_31;
#line 783 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__V_35_35;

#line 784 "mercury_compile_middle_passes.m"
          {
#line 784 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Untupling...\n");
          }
#line 785 "mercury_compile_middle_passes.m"
          {
#line 785 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 786 "mercury_compile_middle_passes.m"
          {
#line 786 "mercury_compile_middle_passes.m"
            transform_hlds__untupling__untuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
          }
#line 787 "mercury_compile_middle_passes.m"
          {
#line 787 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 788 "mercury_compile_middle_passes.m"
          {
#line 788 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 1, top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Stats_8, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__SimplifySpecs_13);
          }
#line 790 "mercury_compile_middle_passes.m"
          {
#line 790 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__V_35_35 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_middle_passes__Globals_11, top_level__mercury_compile_middle_passes__SimplifySpecs_13);
          }
#line 790 "mercury_compile_middle_passes.m"
          {
#line 790 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 790 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_2[0]));
#line 790 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1));
#line 790 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 790 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_35_35));
#line 790 "mercury_compile_middle_passes.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 790 "mercury_compile_middle_passes.m"
          }
#line 790 "mercury_compile_middle_passes.m"
          {
#line 790 "mercury_compile_middle_passes.m"
            mercury__require__expect_4_p_0(top_level__mercury_compile_middle_passes__V_31_31, (MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_untuple_arguments\'/6", (MR_String) "simplify has errors");
          }
#line 792 "mercury_compile_middle_passes.m"
          {
#line 792 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 792 "mercury_compile_middle_passes.m"
            return;
          }
#line 783 "mercury_compile_middle_passes.m"
        }
#line 793 "mercury_compile_middle_passes.m"
        break;
#line 793 "mercury_compile_middle_passes.m"
    }
#line 779 "mercury_compile_middle_passes.m"
  }
#line 776 "mercury_compile_middle_passes.m"
}

#line 737 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_8,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_20,
#line 737 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_21)
#line 737 "mercury_compile_middle_passes.m"
{
#line 740 "mercury_compile_middle_passes.m"
  {
#line 740 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 740 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_13;
#line 740 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__GenBytecode_14;

#line 741 "mercury_compile_middle_passes.m"
    {
#line 741 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__HLDS0_8, &top_level__mercury_compile_middle_passes__Globals_13);
    }
#line 742 "mercury_compile_middle_passes.m"
    {
#line 742 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 136, &top_level__mercury_compile_middle_passes__GenBytecode_14);
    }
#line 770 "mercury_compile_middle_passes.m"
#line 770 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__GenBytecode_14) {
#line 770 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 770 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 771 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_21 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_20;
#line 770 "mercury_compile_middle_passes.m"
        break;
#line 770 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 744 "mercury_compile_middle_passes.m"
        {
#line 744 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__HLDS1_15;
#line 744 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Bytecode_16;
#line 744 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__ModuleName_17;
#line 744 "mercury_compile_middle_passes.m"
          MR_String top_level__mercury_compile_middle_passes__BytedebugFile_18;
#line 744 "mercury_compile_middle_passes.m"
          MR_String top_level__mercury_compile_middle_passes__BytecodeFile_19;

#line 745 "mercury_compile_middle_passes.m"
          {
#line 745 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__Stats_10, top_level__mercury_compile_middle_passes__HLDS0_8, &top_level__mercury_compile_middle_passes__HLDS1_15);
          }
#line 746 "mercury_compile_middle_passes.m"
          {
#line 746 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__HLDS1_15, (MR_Integer) 505, (MR_String) "bytecode_args_to_regs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_20, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_21);
          }
#line 747 "mercury_compile_middle_passes.m"
          {
#line 747 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Generating bytecodes...\n");
          }
#line 748 "mercury_compile_middle_passes.m"
          {
#line 748 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
          }
#line 749 "mercury_compile_middle_passes.m"
          {
#line 749 "mercury_compile_middle_passes.m"
            bytecode_backend__bytecode_gen__gen_module_4_p_0(top_level__mercury_compile_middle_passes__HLDS1_15, &top_level__mercury_compile_middle_passes__Bytecode_16);
          }
#line 750 "mercury_compile_middle_passes.m"
          {
#line 750 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% done.\n");
          }
#line 751 "mercury_compile_middle_passes.m"
          {
#line 751 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_10);
          }
#line 752 "mercury_compile_middle_passes.m"
          {
#line 752 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_middle_passes__HLDS1_15, &top_level__mercury_compile_middle_passes__ModuleName_17);
          }
#line 753 "mercury_compile_middle_passes.m"
          {
#line 753 "mercury_compile_middle_passes.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_13, top_level__mercury_compile_middle_passes__ModuleName_17, (MR_String) ".bytedebug", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytedebugFile_18);
          }
#line 755 "mercury_compile_middle_passes.m"
          {
#line 755 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Writing bytecodes to \140");
          }
#line 756 "mercury_compile_middle_passes.m"
          {
#line 756 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__BytedebugFile_18);
          }
#line 757 "mercury_compile_middle_passes.m"
          {
#line 757 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "\'...");
          }
#line 758 "mercury_compile_middle_passes.m"
          {
#line 758 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
          }
#line 759 "mercury_compile_middle_passes.m"
          {
#line 759 "mercury_compile_middle_passes.m"
            bytecode_backend__bytecode__debug_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytedebugFile_18, top_level__mercury_compile_middle_passes__Bytecode_16);
          }
#line 760 "mercury_compile_middle_passes.m"
          {
#line 760 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) " done.\n");
          }
#line 761 "mercury_compile_middle_passes.m"
          {
#line 761 "mercury_compile_middle_passes.m"
            parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_13, top_level__mercury_compile_middle_passes__ModuleName_17, (MR_String) ".mbc", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytecodeFile_19);
          }
#line 763 "mercury_compile_middle_passes.m"
          {
#line 763 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Writing bytecodes to \140");
          }
#line 764 "mercury_compile_middle_passes.m"
          {
#line 764 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__BytecodeFile_19);
          }
#line 765 "mercury_compile_middle_passes.m"
          {
#line 765 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "\'...");
          }
#line 766 "mercury_compile_middle_passes.m"
          {
#line 766 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
          }
#line 767 "mercury_compile_middle_passes.m"
          {
#line 767 "mercury_compile_middle_passes.m"
            bytecode_backend__bytecode__output_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytecodeFile_19, top_level__mercury_compile_middle_passes__Bytecode_16);
          }
#line 768 "mercury_compile_middle_passes.m"
          {
#line 768 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) " done.\n");
          }
#line 769 "mercury_compile_middle_passes.m"
          {
#line 769 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_10);
#line 769 "mercury_compile_middle_passes.m"
            return;
          }
#line 744 "mercury_compile_middle_passes.m"
        }
#line 770 "mercury_compile_middle_passes.m"
        break;
#line 770 "mercury_compile_middle_passes.m"
    }
#line 740 "mercury_compile_middle_passes.m"
  }
#line 737 "mercury_compile_middle_passes.m"
}

#line 698 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 698 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 698 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 698 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 698 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 698 "mercury_compile_middle_passes.m"
{
#line 701 "mercury_compile_middle_passes.m"
  {
#line 701 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 701 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 701 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__WarnDead_12;

#line 702 "mercury_compile_middle_passes.m"
    {
#line 702 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 703 "mercury_compile_middle_passes.m"
    {
#line 703 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 29, &top_level__mercury_compile_middle_passes__WarnDead_12);
    }
#line 731 "mercury_compile_middle_passes.m"
#line 731 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__WarnDead_12) {
#line 731 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 731 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 732 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 731 "mercury_compile_middle_passes.m"
        break;
#line 731 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 705 "mercury_compile_middle_passes.m"
        {
#line 705 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 705 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 709 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes___HLDS1_13;
#line 712 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 706 "mercury_compile_middle_passes.m"
          {
#line 706 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Warning about dead procedures...\n");
          }
#line 708 "mercury_compile_middle_passes.m"
          {
#line 708 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 709 "mercury_compile_middle_passes.m"
          {
#line 709 "mercury_compile_middle_passes.m"
            transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes___HLDS1_13, &top_level__mercury_compile_middle_passes__Specs_14);
          }
#line 710 "mercury_compile_middle_passes.m"
          {
#line 710 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 711 "mercury_compile_middle_passes.m"
          {
#line 711 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
          }
#line 712 "mercury_compile_middle_passes.m"
          {
#line 712 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
          }
#line 713 "mercury_compile_middle_passes.m"
          {
#line 713 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
#line 713 "mercury_compile_middle_passes.m"
            return;
          }
#line 705 "mercury_compile_middle_passes.m"
        }
#line 731 "mercury_compile_middle_passes.m"
        break;
#line 731 "mercury_compile_middle_passes.m"
    }
#line 701 "mercury_compile_middle_passes.m"
  }
#line 698 "mercury_compile_middle_passes.m"
}

#line 678 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 678 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 678 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 678 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 678 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 678 "mercury_compile_middle_passes.m"
{
#line 681 "mercury_compile_middle_passes.m"
  {
#line 681 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 681 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 681 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeCtorInfo_12;

#line 682 "mercury_compile_middle_passes.m"
    {
#line 682 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 683 "mercury_compile_middle_passes.m"
    {
#line 683 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 272, &top_level__mercury_compile_middle_passes__TypeCtorInfo_12);
    }
#line 692 "mercury_compile_middle_passes.m"
#line 692 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TypeCtorInfo_12) {
#line 692 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 692 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 693 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 692 "mercury_compile_middle_passes.m"
        break;
#line 692 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 685 "mercury_compile_middle_passes.m"
        {
#line 686 "mercury_compile_middle_passes.m"
          {
#line 686 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Generating type_ctor_info structures...");
          }
#line 688 "mercury_compile_middle_passes.m"
          {
#line 688 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
          }
#line 689 "mercury_compile_middle_passes.m"
          {
#line 689 "mercury_compile_middle_passes.m"
            backend_libs__type_ctor_info__generate_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 690 "mercury_compile_middle_passes.m"
          {
#line 690 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
          }
#line 691 "mercury_compile_middle_passes.m"
          {
#line 691 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 691 "mercury_compile_middle_passes.m"
            return;
          }
#line 685 "mercury_compile_middle_passes.m"
        }
#line 692 "mercury_compile_middle_passes.m"
        break;
#line 692 "mercury_compile_middle_passes.m"
    }
#line 681 "mercury_compile_middle_passes.m"
  }
#line 678 "mercury_compile_middle_passes.m"
}

#line 658 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 658 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 658 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 658 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 658 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 658 "mercury_compile_middle_passes.m"
{
#line 661 "mercury_compile_middle_passes.m"
  {
#line 661 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 661 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 661 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_12;

#line 662 "mercury_compile_middle_passes.m"
    {
#line 662 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 663 "mercury_compile_middle_passes.m"
    {
#line 663 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 415, &top_level__mercury_compile_middle_passes__Termination2_12);
    }
#line 672 "mercury_compile_middle_passes.m"
#line 672 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Termination2_12) {
#line 672 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 672 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 673 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 672 "mercury_compile_middle_passes.m"
        break;
#line 672 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 665 "mercury_compile_middle_passes.m"
        {
#line 665 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_13;
#line 665 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_15;
#line 665 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;
#line 668 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_14;

#line 666 "mercury_compile_middle_passes.m"
          {
#line 666 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination 2...\n");
          }
#line 667 "mercury_compile_middle_passes.m"
          {
#line 667 "mercury_compile_middle_passes.m"
            transform_hlds__term_constr_main__term2_analyse_module_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_middle_passes__Specs_13);
          }
#line 668 "mercury_compile_middle_passes.m"
          {
#line 668 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_13, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_14, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_15);
          }
#line 669 "mercury_compile_middle_passes.m"
          {
#line 669 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
          }
#line 670 "mercury_compile_middle_passes.m"
          {
#line 670 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination 2 checking done.\n");
          }
#line 671 "mercury_compile_middle_passes.m"
          {
#line 671 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 671 "mercury_compile_middle_passes.m"
            return;
          }
#line 665 "mercury_compile_middle_passes.m"
        }
#line 672 "mercury_compile_middle_passes.m"
        break;
#line 672 "mercury_compile_middle_passes.m"
    }
#line 661 "mercury_compile_middle_passes.m"
  }
#line 658 "mercury_compile_middle_passes.m"
}

#line 638 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 638 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 638 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 638 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 638 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 638 "mercury_compile_middle_passes.m"
{
#line 641 "mercury_compile_middle_passes.m"
  {
#line 641 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 641 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 641 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_12;

#line 642 "mercury_compile_middle_passes.m"
    {
#line 642 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 643 "mercury_compile_middle_passes.m"
    {
#line 643 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 408, &top_level__mercury_compile_middle_passes__Termination_12);
    }
#line 652 "mercury_compile_middle_passes.m"
#line 652 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Termination_12) {
#line 652 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 652 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 653 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 652 "mercury_compile_middle_passes.m"
        break;
#line 652 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 645 "mercury_compile_middle_passes.m"
        {
#line 645 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__Specs_13;
#line 645 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes__NumErrors_15;
#line 645 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;
#line 649 "mercury_compile_middle_passes.m"
          MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_14;

#line 646 "mercury_compile_middle_passes.m"
          {
#line 646 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination...\n");
          }
#line 647 "mercury_compile_middle_passes.m"
          {
#line 647 "mercury_compile_middle_passes.m"
            transform_hlds__termination__analyse_termination_in_module_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_middle_passes__Specs_13);
          }
#line 648 "mercury_compile_middle_passes.m"
          {
#line 648 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination checking done.\n");
          }
#line 649 "mercury_compile_middle_passes.m"
          {
#line 649 "mercury_compile_middle_passes.m"
            parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_13, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_14, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_15);
          }
#line 650 "mercury_compile_middle_passes.m"
          {
#line 650 "mercury_compile_middle_passes.m"
            hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
          }
#line 651 "mercury_compile_middle_passes.m"
          {
#line 651 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 651 "mercury_compile_middle_passes.m"
            return;
          }
#line 645 "mercury_compile_middle_passes.m"
        }
#line 652 "mercury_compile_middle_passes.m"
        break;
#line 652 "mercury_compile_middle_passes.m"
    }
#line 641 "mercury_compile_middle_passes.m"
  }
#line 638 "mercury_compile_middle_passes.m"
}

#line 620 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 620 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 620 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 620 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 620 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 620 "mercury_compile_middle_passes.m"
{
#line 623 "mercury_compile_middle_passes.m"
  {
#line 623 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 623 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 623 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_12;

#line 624 "mercury_compile_middle_passes.m"
    {
#line 624 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 625 "mercury_compile_middle_passes.m"
    {
#line 625 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 423, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_12);
    }
#line 632 "mercury_compile_middle_passes.m"
#line 632 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ExceptionAnalysis_12) {
#line 632 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 632 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 633 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 632 "mercury_compile_middle_passes.m"
        break;
#line 632 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 627 "mercury_compile_middle_passes.m"
        {
#line 628 "mercury_compile_middle_passes.m"
          {
#line 628 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing exceptions...\n");
          }
#line 629 "mercury_compile_middle_passes.m"
          {
#line 629 "mercury_compile_middle_passes.m"
            transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 630 "mercury_compile_middle_passes.m"
          {
#line 630 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 631 "mercury_compile_middle_passes.m"
          {
#line 631 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 631 "mercury_compile_middle_passes.m"
            return;
          }
#line 627 "mercury_compile_middle_passes.m"
        }
#line 632 "mercury_compile_middle_passes.m"
        break;
#line 632 "mercury_compile_middle_passes.m"
    }
#line 623 "mercury_compile_middle_passes.m"
  }
#line 620 "mercury_compile_middle_passes.m"
}

#line 602 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 602 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 602 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 602 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 602 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 602 "mercury_compile_middle_passes.m"
{
#line 605 "mercury_compile_middle_passes.m"
  {
#line 605 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 605 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 605 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;

#line 606 "mercury_compile_middle_passes.m"
    {
#line 606 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 607 "mercury_compile_middle_passes.m"
    {
#line 607 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 424, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 614 "mercury_compile_middle_passes.m"
#line 614 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ClosureAnalysis_12) {
#line 614 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 614 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 615 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 614 "mercury_compile_middle_passes.m"
        break;
#line 614 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 609 "mercury_compile_middle_passes.m"
        {
#line 610 "mercury_compile_middle_passes.m"
          {
#line 610 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing closures...\n");
          }
#line 611 "mercury_compile_middle_passes.m"
          {
#line 611 "mercury_compile_middle_passes.m"
            transform_hlds__closure_analysis__closure_analyse_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
          }
#line 612 "mercury_compile_middle_passes.m"
          {
#line 612 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
          }
#line 613 "mercury_compile_middle_passes.m"
          {
#line 613 "mercury_compile_middle_passes.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 613 "mercury_compile_middle_passes.m"
            return;
          }
#line 609 "mercury_compile_middle_passes.m"
        }
#line 614 "mercury_compile_middle_passes.m"
        break;
#line 614 "mercury_compile_middle_passes.m"
    }
#line 605 "mercury_compile_middle_passes.m"
  }
#line 602 "mercury_compile_middle_passes.m"
}

#line 590 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 590 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 590 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 590 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 590 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 590 "mercury_compile_middle_passes.m"
{
#line 593 "mercury_compile_middle_passes.m"
  {
#line 593 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 594 "mercury_compile_middle_passes.m"
    {
#line 594 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Fully expanding equivalence types...");
    }
#line 595 "mercury_compile_middle_passes.m"
    {
#line 595 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 596 "mercury_compile_middle_passes.m"
    {
#line 596 "mercury_compile_middle_passes.m"
      transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 597 "mercury_compile_middle_passes.m"
    {
#line 597 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 598 "mercury_compile_middle_passes.m"
    {
#line 598 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 598 "mercury_compile_middle_passes.m"
      return;
    }
#line 593 "mercury_compile_middle_passes.m"
  }
#line 590 "mercury_compile_middle_passes.m"
}

#line 578 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 578 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 578 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 578 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 578 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 578 "mercury_compile_middle_passes.m"
{
#line 581 "mercury_compile_middle_passes.m"
  {
#line 581 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 582 "mercury_compile_middle_passes.m"
    {
#line 582 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming stm expressions...");
    }
#line 583 "mercury_compile_middle_passes.m"
    {
#line 583 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 584 "mercury_compile_middle_passes.m"
    {
#line 584 "mercury_compile_middle_passes.m"
      transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 585 "mercury_compile_middle_passes.m"
    {
#line 585 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 586 "mercury_compile_middle_passes.m"
    {
#line 586 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 586 "mercury_compile_middle_passes.m"
      return;
    }
#line 581 "mercury_compile_middle_passes.m"
  }
#line 578 "mercury_compile_middle_passes.m"
}

#line 566 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 566 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 566 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 566 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 566 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 566 "mercury_compile_middle_passes.m"
{
#line 569 "mercury_compile_middle_passes.m"
  {
#line 569 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 570 "mercury_compile_middle_passes.m"
    {
#line 570 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming lambda expressions...");
    }
#line 571 "mercury_compile_middle_passes.m"
    {
#line 571 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 572 "mercury_compile_middle_passes.m"
    {
#line 572 "mercury_compile_middle_passes.m"
      transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 573 "mercury_compile_middle_passes.m"
    {
#line 573 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 574 "mercury_compile_middle_passes.m"
    {
#line 574 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 574 "mercury_compile_middle_passes.m"
      return;
    }
#line 569 "mercury_compile_middle_passes.m"
  }
#line 566 "mercury_compile_middle_passes.m"
}

#line 551 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 551 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 551 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 551 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 551 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 551 "mercury_compile_middle_passes.m"
{
#line 554 "mercury_compile_middle_passes.m"
  {
#line 554 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 554 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Specs_11;
#line 554 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 554 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__NumErrors_14;
#line 554 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 561 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_13;

#line 555 "mercury_compile_middle_passes.m"
    {
#line 555 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming tabled predicates...");
    }
#line 556 "mercury_compile_middle_passes.m"
    {
#line 556 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 557 "mercury_compile_middle_passes.m"
    {
#line 557 "mercury_compile_middle_passes.m"
      transform_hlds__table_gen__table_gen_process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__Specs_11);
    }
#line 558 "mercury_compile_middle_passes.m"
    {
#line 558 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 559 "mercury_compile_middle_passes.m"
    {
#line 559 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
    }
#line 560 "mercury_compile_middle_passes.m"
    {
#line 560 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 561 "mercury_compile_middle_passes.m"
    {
#line 561 "mercury_compile_middle_passes.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_11, top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_13, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_14);
    }
#line 562 "mercury_compile_middle_passes.m"
    {
#line 562 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 562 "mercury_compile_middle_passes.m"
      return;
    }
#line 554 "mercury_compile_middle_passes.m"
  }
#line 551 "mercury_compile_middle_passes.m"
}

#line 502 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 502 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 502 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 502 "mercury_compile_middle_passes.m"
{
#line 505 "mercury_compile_middle_passes.m"
  {
#line 505 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 505 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 505 "mercury_compile_middle_passes.m"
    MR_String top_level__mercury_compile_middle_passes__FileName_8;
#line 505 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9;
#line 505 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10;
#line 505 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizes_11;

#line 506 "mercury_compile_middle_passes.m"
    {
#line 506 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 507 "mercury_compile_middle_passes.m"
    {
#line 507 "mercury_compile_middle_passes.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 211, &top_level__mercury_compile_middle_passes__FileName_8);
    }
#line 508 "mercury_compile_middle_passes.m"
    {
#line 508 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 209, &top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9);
    }
#line 510 "mercury_compile_middle_passes.m"
    {
#line 510 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10);
    }
#line 512 "mercury_compile_middle_passes.m"
    {
#line 512 "mercury_compile_middle_passes.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9, top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10, &top_level__mercury_compile_middle_passes__RecordTermSizes_11);
    }
#line 513 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (strcmp(top_level__mercury_compile_middle_passes__FileName_8, (MR_String) "") == 0);
#line 530 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 529 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 530 "mercury_compile_middle_passes.m"
    else
#line 537 "mercury_compile_middle_passes.m"
      {
#line 537 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_12;

#line 533 "mercury_compile_middle_passes.m"
#line 533 "mercury_compile_middle_passes.m"
        switch (top_level__mercury_compile_middle_passes__RecordTermSizes_11) {
#line 533 "mercury_compile_middle_passes.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 533 "mercury_compile_middle_passes.m"
          case (MR_Integer) 0:
#line 534 "mercury_compile_middle_passes.m"
            {
#line 535 "mercury_compile_middle_passes.m"
              {
#line 535 "mercury_compile_middle_passes.m"
                libs__file_util__report_error_3_p_0((MR_String) "the --experimental-complexity option requires a term size profiling grade");
              }
#line 534 "mercury_compile_middle_passes.m"
            }
#line 533 "mercury_compile_middle_passes.m"
            break;
#line 533 "mercury_compile_middle_passes.m"
          case (MR_Integer) 1:
#line 532 "mercury_compile_middle_passes.m"
            {
#line 532 "mercury_compile_middle_passes.m"
            }
#line 533 "mercury_compile_middle_passes.m"
            break;
#line 533 "mercury_compile_middle_passes.m"
        }
#line 538 "mercury_compile_middle_passes.m"
        {
#line 538 "mercury_compile_middle_passes.m"
          transform_hlds__complexity__read_spec_file_4_p_0(top_level__mercury_compile_middle_passes__FileName_8, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_12);
        }
#line 543 "mercury_compile_middle_passes.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__MaybeNumProcMap_12)) == (MR_mktag((MR_Integer) 1))))
#line 544 "mercury_compile_middle_passes.m"
          {
#line 544 "mercury_compile_middle_passes.m"
            MR_String top_level__mercury_compile_middle_passes__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));

#line 545 "mercury_compile_middle_passes.m"
            {
#line 545 "mercury_compile_middle_passes.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_middle_passes__Msg_15);
            }
#line 544 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 544 "mercury_compile_middle_passes.m"
          }
#line 543 "mercury_compile_middle_passes.m"
        else
#line 540 "mercury_compile_middle_passes.m"
          {
#line 540 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));
#line 540 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_30_30;

#line 541 "mercury_compile_middle_passes.m"
            {
#line 541 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "mercury_compile_middle_passes.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_29_29));
#line 541 "mercury_compile_middle_passes.m"
            }
#line 541 "mercury_compile_middle_passes.m"
            {
#line 541 "mercury_compile_middle_passes.m"
              hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
#line 541 "mercury_compile_middle_passes.m"
              return;
            }
#line 540 "mercury_compile_middle_passes.m"
          }
#line 537 "mercury_compile_middle_passes.m"
      }
#line 505 "mercury_compile_middle_passes.m"
  }
#line 502 "mercury_compile_middle_passes.m"
}

#line 38 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(
#line 38 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_8,
#line 38 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_9,
#line 38 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__UnusedArgsInfos_10,
#line 38 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20,
#line 38 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21)
#line 38 "mercury_compile_middle_passes.m"
{
#line 1084 "mercury_compile_middle_passes.m"
  {
#line 1084 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1084 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_13;
#line 1084 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Intermod_14;
#line 1084 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_15;
#line 1084 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Warn_16;

#line 1085 "mercury_compile_middle_passes.m"
    {
#line 1085 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__Globals_13);
    }
#line 1086 "mercury_compile_middle_passes.m"
    {
#line 1086 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 345, &top_level__mercury_compile_middle_passes__Intermod_14);
    }
#line 1087 "mercury_compile_middle_passes.m"
    {
#line 1087 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 344, &top_level__mercury_compile_middle_passes__Optimize_15);
    }
#line 1088 "mercury_compile_middle_passes.m"
    {
#line 1088 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 10, &top_level__mercury_compile_middle_passes__Warn_16);
    }
#line 1090 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Optimize_15 == (MR_Integer) 1);
#line 1091 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1091 "mercury_compile_middle_passes.m"
      {
#line 1091 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Warn_16 == (MR_Integer) 1);
#line 1091 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1092 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Intermod_14 == (MR_Integer) 1);
#line 1091 "mercury_compile_middle_passes.m"
      }
#line 1102 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1095 "mercury_compile_middle_passes.m"
      {
#line 1095 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_17;
#line 1095 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_19;
#line 1095 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_30_30;
#line 1098 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_18;

#line 1095 "mercury_compile_middle_passes.m"
        {
#line 1095 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_8, (MR_String) "% Finding unused arguments ...\n");
        }
#line 1096 "mercury_compile_middle_passes.m"
        {
#line 1096 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_8);
        }
#line 1097 "mercury_compile_middle_passes.m"
        {
#line 1097 "mercury_compile_middle_passes.m"
          transform_hlds__unused_args__unused_args_process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_30_30, &top_level__mercury_compile_middle_passes__Specs_17, top_level__mercury_compile_middle_passes__UnusedArgsInfos_10);
        }
#line 1098 "mercury_compile_middle_passes.m"
        {
#line 1098 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_17, top_level__mercury_compile_middle_passes__Globals_13, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_18, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_19);
        }
#line 1099 "mercury_compile_middle_passes.m"
        {
#line 1099 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21);
        }
#line 1100 "mercury_compile_middle_passes.m"
        {
#line 1100 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_8, (MR_String) "% done.\n");
        }
#line 1101 "mercury_compile_middle_passes.m"
        {
#line 1101 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_9);
#line 1101 "mercury_compile_middle_passes.m"
          return;
        }
#line 1095 "mercury_compile_middle_passes.m"
      }
#line 1102 "mercury_compile_middle_passes.m"
    else
#line 1103 "mercury_compile_middle_passes.m"
      {
#line 1103 "mercury_compile_middle_passes.m"
        {
#line 1103 "mercury_compile_middle_passes.m"
          mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, top_level__mercury_compile_middle_passes__UnusedArgsInfos_10);
        }
#line 1103 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20;
#line 1103 "mercury_compile_middle_passes.m"
      }
#line 1084 "mercury_compile_middle_passes.m"
  }
#line 38 "mercury_compile_middle_passes.m"
}

#line 35 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(
#line 35 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18,
#line 35 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19,
#line 35 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20)
#line 35 "mercury_compile_middle_passes.m"
{
#line 434 "mercury_compile_middle_passes.m"
  {
#line 434 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalysisInfo_15;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImportedModules_16;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104;
#line 434 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106;
#line 481 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___UnusedArgsInfos_14;
#line 490 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___AnalysisInfo_17;

#line 435 "mercury_compile_middle_passes.m"
    {
#line 435 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 436 "mercury_compile_middle_passes.m"
    {
#line 436 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 437 "mercury_compile_middle_passes.m"
    {
#line 437 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 438 "mercury_compile_middle_passes.m"
    {
#line 438 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 424, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 439 "mercury_compile_middle_passes.m"
    {
#line 439 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 400, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 445 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 446 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 446 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 450 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 449 "mercury_compile_middle_passes.m"
      {
#line 449 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27);
      }
#line 450 "mercury_compile_middle_passes.m"
    else
#line 451 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18;
#line 453 "mercury_compile_middle_passes.m"
    {
#line 453 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31);
    }
#line 454 "mercury_compile_middle_passes.m"
    {
#line 454 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33);
    }
#line 455 "mercury_compile_middle_passes.m"
    {
#line 455 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37);
    }
#line 456 "mercury_compile_middle_passes.m"
    {
#line 456 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39);
    }
#line 457 "mercury_compile_middle_passes.m"
    {
#line 457 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43);
    }
#line 458 "mercury_compile_middle_passes.m"
    {
#line 458 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45);
    }
#line 459 "mercury_compile_middle_passes.m"
    {
#line 459 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49);
    }
#line 460 "mercury_compile_middle_passes.m"
    {
#line 460 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51);
    }
#line 461 "mercury_compile_middle_passes.m"
    {
#line 461 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55);
    }
#line 474 "mercury_compile_middle_passes.m"
#line 474 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__SharingAnalysis_13) {
#line 474 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 474 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 475 "mercury_compile_middle_passes.m"
        {
#line 475 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 475 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55;
#line 475 "mercury_compile_middle_passes.m"
        }
#line 474 "mercury_compile_middle_passes.m"
        break;
#line 474 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 463 "mercury_compile_middle_passes.m"
        {
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57;
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61;
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63;
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67;
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69;
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70;
#line 463 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74;

#line 466 "mercury_compile_middle_passes.m"
          {
#line 466 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57);
          }
#line 467 "mercury_compile_middle_passes.m"
          {
#line 467 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61);
          }
#line 468 "mercury_compile_middle_passes.m"
          {
#line 468 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63);
          }
#line 469 "mercury_compile_middle_passes.m"
          {
#line 469 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67);
          }
#line 470 "mercury_compile_middle_passes.m"
          {
#line 470 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70);
          }
#line 471 "mercury_compile_middle_passes.m"
          {
#line 471 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74);
          }
#line 472 "mercury_compile_middle_passes.m"
          {
#line 472 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76);
          }
#line 473 "mercury_compile_middle_passes.m"
          {
#line 473 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_74_74, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80);
          }
#line 463 "mercury_compile_middle_passes.m"
        }
#line 474 "mercury_compile_middle_passes.m"
        break;
#line 474 "mercury_compile_middle_passes.m"
    }
#line 477 "mercury_compile_middle_passes.m"
    {
#line 477 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82);
    }
#line 478 "mercury_compile_middle_passes.m"
    {
#line 478 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_80_80, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86);
    }
#line 479 "mercury_compile_middle_passes.m"
    {
#line 479 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88);
    }
#line 480 "mercury_compile_middle_passes.m"
    {
#line 480 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92);
    }
#line 481 "mercury_compile_middle_passes.m"
    {
#line 481 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, &top_level__mercury_compile_middle_passes___UnusedArgsInfos_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94);
    }
#line 482 "mercury_compile_middle_passes.m"
    {
#line 482 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98);
    }
#line 483 "mercury_compile_middle_passes.m"
    {
#line 483 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100);
    }
#line 484 "mercury_compile_middle_passes.m"
    {
#line 484 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104);
    }
#line 485 "mercury_compile_middle_passes.m"
    {
#line 485 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106);
    }
#line 486 "mercury_compile_middle_passes.m"
    {
#line 486 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20);
    }
#line 488 "mercury_compile_middle_passes.m"
    {
#line 488 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, &top_level__mercury_compile_middle_passes__AnalysisInfo_15);
    }
#line 489 "mercury_compile_middle_passes.m"
    {
#line 489 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, &top_level__mercury_compile_middle_passes__ImportedModules_16);
    }
#line 490 "mercury_compile_middle_passes.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 490 "mercury_compile_middle_passes.m"
    {
#line 490 "mercury_compile_middle_passes.m"
      analysis__write_analysis_files_7_p_0((MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[0], ((MR_Box) ((MR_Integer) 0)), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, top_level__mercury_compile_middle_passes__ImportedModules_16, top_level__mercury_compile_middle_passes__AnalysisInfo_15, &top_level__mercury_compile_middle_passes___AnalysisInfo_17);
    }
#line 434 "mercury_compile_middle_passes.m"
  }
#line 35 "mercury_compile_middle_passes.m"
}

#line 32 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(
#line 32 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 32 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15,
#line 32 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16)
#line 32 "mercury_compile_middle_passes.m"
{
#line 379 "mercury_compile_middle_passes.m"
  {
#line 379 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94;
#line 379 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96;

#line 380 "mercury_compile_middle_passes.m"
    {
#line 380 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 381 "mercury_compile_middle_passes.m"
    {
#line 381 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 382 "mercury_compile_middle_passes.m"
    {
#line 382 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 383 "mercury_compile_middle_passes.m"
    {
#line 383 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 424, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 384 "mercury_compile_middle_passes.m"
    {
#line 384 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 400, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 390 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 391 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 391 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 395 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 394 "mercury_compile_middle_passes.m"
      {
#line 394 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
      }
#line 395 "mercury_compile_middle_passes.m"
    else
#line 396 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 398 "mercury_compile_middle_passes.m"
    {
#line 398 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27);
    }
#line 399 "mercury_compile_middle_passes.m"
    {
#line 399 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29);
    }
#line 400 "mercury_compile_middle_passes.m"
    {
#line 400 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33);
    }
#line 401 "mercury_compile_middle_passes.m"
    {
#line 401 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35);
    }
#line 402 "mercury_compile_middle_passes.m"
    {
#line 402 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39);
    }
#line 403 "mercury_compile_middle_passes.m"
    {
#line 403 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41);
    }
#line 404 "mercury_compile_middle_passes.m"
    {
#line 404 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45);
    }
#line 405 "mercury_compile_middle_passes.m"
    {
#line 405 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47);
    }
#line 406 "mercury_compile_middle_passes.m"
    {
#line 406 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51);
    }
#line 419 "mercury_compile_middle_passes.m"
#line 419 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__SharingAnalysis_13) {
#line 419 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 419 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 420 "mercury_compile_middle_passes.m"
        {
#line 420 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 420 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 420 "mercury_compile_middle_passes.m"
        }
#line 419 "mercury_compile_middle_passes.m"
        break;
#line 419 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 408 "mercury_compile_middle_passes.m"
        {
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57;
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59;
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63;
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65;
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 408 "mercury_compile_middle_passes.m"
          MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70;

#line 411 "mercury_compile_middle_passes.m"
          {
#line 411 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53);
          }
#line 412 "mercury_compile_middle_passes.m"
          {
#line 412 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57);
          }
#line 413 "mercury_compile_middle_passes.m"
          {
#line 413 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59);
          }
#line 414 "mercury_compile_middle_passes.m"
          {
#line 414 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63);
          }
#line 415 "mercury_compile_middle_passes.m"
          {
#line 415 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
          }
#line 416 "mercury_compile_middle_passes.m"
          {
#line 416 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70);
          }
#line 417 "mercury_compile_middle_passes.m"
          {
#line 417 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72);
          }
#line 418 "mercury_compile_middle_passes.m"
          {
#line 418 "mercury_compile_middle_passes.m"
            hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76);
          }
#line 408 "mercury_compile_middle_passes.m"
        }
#line 419 "mercury_compile_middle_passes.m"
        break;
#line 419 "mercury_compile_middle_passes.m"
    }
#line 422 "mercury_compile_middle_passes.m"
    {
#line 422 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78);
    }
#line 423 "mercury_compile_middle_passes.m"
    {
#line 423 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82);
    }
#line 424 "mercury_compile_middle_passes.m"
    {
#line 424 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84);
    }
#line 425 "mercury_compile_middle_passes.m"
    {
#line 425 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88);
    }
#line 426 "mercury_compile_middle_passes.m"
    {
#line 426 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90);
    }
#line 427 "mercury_compile_middle_passes.m"
    {
#line 427 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94);
    }
#line 428 "mercury_compile_middle_passes.m"
    {
#line 428 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
    }
#line 429 "mercury_compile_middle_passes.m"
    {
#line 429 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16);
    }
#line 430 "mercury_compile_middle_passes.m"
    {
#line 430 "mercury_compile_middle_passes.m"
      transform_hlds__intermod__write_trans_opt_file_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
#line 430 "mercury_compile_middle_passes.m"
      return;
    }
#line 379 "mercury_compile_middle_passes.m"
  }
#line 32 "mercury_compile_middle_passes.m"
}

#line 29 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(
#line 29 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20,
#line 29 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21)
#line 29 "mercury_compile_middle_passes.m"
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
    MR_Word top_level__mercury_compile_middle_passes__UnusedArgsInfos_19;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;

#line 292 "mercury_compile_middle_passes.m"
    {
#line 292 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 293 "mercury_compile_middle_passes.m"
    {
#line 293 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 345, &top_level__mercury_compile_middle_passes__IntermodArgs_8);
    }
#line 294 "mercury_compile_middle_passes.m"
    {
#line 294 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 408, &top_level__mercury_compile_middle_passes__Termination_9);
    }
#line 295 "mercury_compile_middle_passes.m"
    {
#line 295 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 415, &top_level__mercury_compile_middle_passes__Termination2_10);
    }
#line 296 "mercury_compile_middle_passes.m"
    {
#line 296 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 400, &top_level__mercury_compile_middle_passes__SharingAnalysis_11);
    }
#line 298 "mercury_compile_middle_passes.m"
    {
#line 298 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 402, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 300 "mercury_compile_middle_passes.m"
    {
#line 300 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 423, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_13);
    }
#line 302 "mercury_compile_middle_passes.m"
    {
#line 302 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 424, &top_level__mercury_compile_middle_passes__ClosureAnalysis_14);
    }
#line 304 "mercury_compile_middle_passes.m"
    {
#line 304 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 387, &top_level__mercury_compile_middle_passes__TrailingAnalysis_15);
    }
#line 306 "mercury_compile_middle_passes.m"
    {
#line 306 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 390, &top_level__mercury_compile_middle_passes__TablingAnalysis_16);
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
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35;
#line 319 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_37_37;

#line 570 "mercury_compile_middle_passes.m"
        {
#line 570 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming lambda expressions...");
        }
#line 571 "mercury_compile_middle_passes.m"
        {
#line 571 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 572 "mercury_compile_middle_passes.m"
        {
#line 572 "mercury_compile_middle_passes.m"
          transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35);
        }
#line 573 "mercury_compile_middle_passes.m"
        {
#line 573 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 574 "mercury_compile_middle_passes.m"
        {
#line 574 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 582 "mercury_compile_middle_passes.m"
        {
#line 582 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming stm expressions...");
        }
#line 583 "mercury_compile_middle_passes.m"
        {
#line 583 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 584 "mercury_compile_middle_passes.m"
        {
#line 584 "mercury_compile_middle_passes.m"
          transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_37_37);
        }
#line 585 "mercury_compile_middle_passes.m"
        {
#line 585 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 586 "mercury_compile_middle_passes.m"
        {
#line 586 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 321 "mercury_compile_middle_passes.m"
        {
#line 321 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_37_37, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39);
        }
#line 319 "mercury_compile_middle_passes.m"
      }
#line 322 "mercury_compile_middle_passes.m"
    else
#line 323 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_20;
#line 328 "mercury_compile_middle_passes.m"
#line 328 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ExceptionAnalysis_13) {
#line 328 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 328 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 329 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 328 "mercury_compile_middle_passes.m"
        break;
#line 328 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 327 "mercury_compile_middle_passes.m"
        {
#line 327 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41);
        }
#line 328 "mercury_compile_middle_passes.m"
        break;
#line 328 "mercury_compile_middle_passes.m"
    }
#line 334 "mercury_compile_middle_passes.m"
#line 334 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__IntermodArgs_8) {
#line 334 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 334 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 335 "mercury_compile_middle_passes.m"
        {
#line 336 "mercury_compile_middle_passes.m"
          {
#line 336 "mercury_compile_middle_passes.m"
            mercury__set__init_1_p_0((MR_Word) &parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0, &top_level__mercury_compile_middle_passes__UnusedArgsInfos_19);
          }
#line 335 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 335 "mercury_compile_middle_passes.m"
        }
#line 334 "mercury_compile_middle_passes.m"
        break;
#line 334 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 333 "mercury_compile_middle_passes.m"
        {
#line 333 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, &top_level__mercury_compile_middle_passes__UnusedArgsInfos_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43);
        }
#line 334 "mercury_compile_middle_passes.m"
        break;
#line 334 "mercury_compile_middle_passes.m"
    }
#line 341 "mercury_compile_middle_passes.m"
#line 341 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Termination_9) {
#line 341 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 341 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 342 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43;
#line 341 "mercury_compile_middle_passes.m"
        break;
#line 341 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 340 "mercury_compile_middle_passes.m"
        {
#line 340 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_43_43, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45);
        }
#line 341 "mercury_compile_middle_passes.m"
        break;
#line 341 "mercury_compile_middle_passes.m"
    }
#line 347 "mercury_compile_middle_passes.m"
#line 347 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__Termination2_10) {
#line 347 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 347 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 348 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 347 "mercury_compile_middle_passes.m"
        break;
#line 347 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 346 "mercury_compile_middle_passes.m"
        {
#line 346 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47);
        }
#line 347 "mercury_compile_middle_passes.m"
        break;
#line 347 "mercury_compile_middle_passes.m"
    }
#line 354 "mercury_compile_middle_passes.m"
#line 354 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__SharingAnalysis_11) {
#line 354 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 354 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 355 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 354 "mercury_compile_middle_passes.m"
        break;
#line 354 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 352 "mercury_compile_middle_passes.m"
        {
#line 352 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49);
        }
#line 354 "mercury_compile_middle_passes.m"
        break;
#line 354 "mercury_compile_middle_passes.m"
    }
#line 360 "mercury_compile_middle_passes.m"
#line 360 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__ReuseAnalysis_12) {
#line 360 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 360 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 361 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49;
#line 360 "mercury_compile_middle_passes.m"
        break;
#line 360 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 359 "mercury_compile_middle_passes.m"
        {
#line 359 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_49_49, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51);
        }
#line 360 "mercury_compile_middle_passes.m"
        break;
#line 360 "mercury_compile_middle_passes.m"
    }
#line 366 "mercury_compile_middle_passes.m"
#line 366 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TrailingAnalysis_15) {
#line 366 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 366 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 367 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 366 "mercury_compile_middle_passes.m"
        break;
#line 366 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 365 "mercury_compile_middle_passes.m"
        {
#line 365 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53);
        }
#line 366 "mercury_compile_middle_passes.m"
        break;
#line 366 "mercury_compile_middle_passes.m"
    }
#line 372 "mercury_compile_middle_passes.m"
#line 372 "mercury_compile_middle_passes.m"
    switch (top_level__mercury_compile_middle_passes__TablingAnalysis_16) {
#line 372 "mercury_compile_middle_passes.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 372 "mercury_compile_middle_passes.m"
      case (MR_Integer) 0:
#line 373 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;
#line 372 "mercury_compile_middle_passes.m"
        break;
#line 372 "mercury_compile_middle_passes.m"
      case (MR_Integer) 1:
#line 371 "mercury_compile_middle_passes.m"
        {
#line 371 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21);
        }
#line 372 "mercury_compile_middle_passes.m"
        break;
#line 372 "mercury_compile_middle_passes.m"
    }
#line 375 "mercury_compile_middle_passes.m"
    {
#line 375 "mercury_compile_middle_passes.m"
      transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_21, top_level__mercury_compile_middle_passes__UnusedArgsInfos_19);
#line 375 "mercury_compile_middle_passes.m"
      return;
    }
#line 287 "mercury_compile_middle_passes.m"
  }
#line 29 "mercury_compile_middle_passes.m"
}

#line 26 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_6_p_0(
#line 26 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 26 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 26 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 26 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19)
#line 26 "mercury_compile_middle_passes.m"
{
#line 112 "mercury_compile_middle_passes.m"
  {
#line 112 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_10;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_11;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_12;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_72_72;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_74_74;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_78_78;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_80_80;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_84_84;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_110_110;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_112_112;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_116_116;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_118_118;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_122_122;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_124_124;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_125_125;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_129_129;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_131_131;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_135_135;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_137_137;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_141_141;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_143_143;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_147_147;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_149_149;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_153_153;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_155_155;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_159_159;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_161_161;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_165_165;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_167_167;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_171_171;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_175_175;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_180_180;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_182_182;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_186_186;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_188_188;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_192_192;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_194_194;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_198_198;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_200_200;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_204_204;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_206_206;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_210_210;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_212_212;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_216_216;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_218_218;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_222_222;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_224_224;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_228_228;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_232_232;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_237_237;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_239_239;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_243_243;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_245_245;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_249_249;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_251_251;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_255_255;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_257_257;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_261_261;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_267_267;
#line 210 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___UnusedArgsInfos_13;
#line 219 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_14;
#line 253 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_15;

#line 113 "mercury_compile_middle_passes.m"
    {
#line 113 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_10);
    }
#line 114 "mercury_compile_middle_passes.m"
    {
#line 114 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_10, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_11);
    }
#line 115 "mercury_compile_middle_passes.m"
    {
#line 115 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_10, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_12);
    }
#line 117 "mercury_compile_middle_passes.m"
    {
#line 117 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24);
    }
#line 119 "mercury_compile_middle_passes.m"
    {
#line 119 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26);
    }
#line 120 "mercury_compile_middle_passes.m"
    {
#line 120 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, (MR_Integer) 105, (MR_String) "tabling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30);
    }
#line 122 "mercury_compile_middle_passes.m"
    {
#line 122 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
    }
#line 123 "mercury_compile_middle_passes.m"
    {
#line 123 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36);
    }
#line 125 "mercury_compile_middle_passes.m"
    {
#line 125 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_stms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38);
    }
#line 126 "mercury_compile_middle_passes.m"
    {
#line 126 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, (MR_Integer) 113, (MR_String) "stm", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42);
    }
#line 128 "mercury_compile_middle_passes.m"
    {
#line 128 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44);
    }
#line 129 "mercury_compile_middle_passes.m"
    {
#line 129 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, (MR_Integer) 115, (MR_String) "equiv_types", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48);
    }
#line 131 "mercury_compile_middle_passes.m"
    {
#line 131 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50);
    }
#line 132 "mercury_compile_middle_passes.m"
    {
#line 132 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54);
    }
#line 153 "mercury_compile_middle_passes.m"
    {
#line 153 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56);
    }
#line 154 "mercury_compile_middle_passes.m"
    {
#line 154 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60);
    }
#line 156 "mercury_compile_middle_passes.m"
    {
#line 156 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62);
    }
#line 157 "mercury_compile_middle_passes.m"
    {
#line 157 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
    }
#line 159 "mercury_compile_middle_passes.m"
    {
#line 159 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68);
    }
#line 160 "mercury_compile_middle_passes.m"
    {
#line 160 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, (MR_Integer) 121, (MR_String) "termination2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_72_72);
    }
#line 162 "mercury_compile_middle_passes.m"
    {
#line 162 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_74_74);
    }
#line 163 "mercury_compile_middle_passes.m"
    {
#line 163 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_74_74, (MR_Integer) 125, (MR_String) "type_ctor_infos", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_72_72, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_78_78);
    }
#line 170 "mercury_compile_middle_passes.m"
    {
#line 170 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_80_80);
    }
#line 171 "mercury_compile_middle_passes.m"
    {
#line 171 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_80_80, (MR_Integer) 130, (MR_String) "warn_dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_78_78, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_84_84);
    }
#line 173 "mercury_compile_middle_passes.m"
    {
#line 173 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_80_80, top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_84_84, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86);
    }
#line 175 "mercury_compile_middle_passes.m"
    {
#line 175 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_80_80, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88);
    }
#line 176 "mercury_compile_middle_passes.m"
    {
#line 176 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88, (MR_Integer) 133, (MR_String) "untupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_86_86, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92);
    }
#line 178 "mercury_compile_middle_passes.m"
    {
#line 178 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94);
    }
#line 179 "mercury_compile_middle_passes.m"
    {
#line 179 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94, (MR_Integer) 134, (MR_String) "tupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_92_92, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98);
    }
#line 181 "mercury_compile_middle_passes.m"
    {
#line 181 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_94_94, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100);
    }
#line 182 "mercury_compile_middle_passes.m"
    {
#line 182 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_98_98, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104);
    }
#line 184 "mercury_compile_middle_passes.m"
    {
#line 184 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_100_100, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106);
    }
#line 185 "mercury_compile_middle_passes.m"
    {
#line 185 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, (MR_Integer) 137, (MR_String) "ssdb", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_104_104, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_110_110);
    }
#line 187 "mercury_compile_middle_passes.m"
    {
#line 187 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_106_106, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_112_112);
    }
#line 188 "mercury_compile_middle_passes.m"
    {
#line 188 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_112_112, (MR_Integer) 140, (MR_String) "accum", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_110_110, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_116_116);
    }
#line 190 "mercury_compile_middle_passes.m"
    {
#line 190 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_112_112, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_118_118);
    }
#line 191 "mercury_compile_middle_passes.m"
    {
#line 191 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_118_118, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_116_116, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_122_122);
    }
#line 195 "mercury_compile_middle_passes.m"
    {
#line 195 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_118_118, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_124_124, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_122_122, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_125_125);
    }
#line 196 "mercury_compile_middle_passes.m"
    {
#line 196 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_124_124, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_125_125, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_129_129);
    }
#line 198 "mercury_compile_middle_passes.m"
    {
#line 198 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_124_124, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_131_131);
    }
#line 199 "mercury_compile_middle_passes.m"
    {
#line 199 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_131_131, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_129_129, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_135_135);
    }
#line 201 "mercury_compile_middle_passes.m"
    {
#line 201 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_131_131, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_137_137);
    }
#line 202 "mercury_compile_middle_passes.m"
    {
#line 202 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_137_137, (MR_Integer) 160, (MR_String) "delay_construct", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_135_135, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_141_141);
    }
#line 204 "mercury_compile_middle_passes.m"
    {
#line 204 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_137_137, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_143_143);
    }
#line 205 "mercury_compile_middle_passes.m"
    {
#line 205 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_143_143, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_141_141, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_147_147);
    }
#line 207 "mercury_compile_middle_passes.m"
    {
#line 207 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_143_143, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_149_149);
    }
#line 208 "mercury_compile_middle_passes.m"
    {
#line 208 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_149_149, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_147_147, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_153_153);
    }
#line 210 "mercury_compile_middle_passes.m"
    {
#line 210 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, &top_level__mercury_compile_middle_passes___UnusedArgsInfos_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_149_149, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_155_155);
    }
#line 211 "mercury_compile_middle_passes.m"
    {
#line 211 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_155_155, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_153_153, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_159_159);
    }
#line 213 "mercury_compile_middle_passes.m"
    {
#line 213 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_155_155, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_161_161);
    }
#line 214 "mercury_compile_middle_passes.m"
    {
#line 214 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_161_161, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_159_159, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_165_165);
    }
#line 216 "mercury_compile_middle_passes.m"
    {
#line 216 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_161_161, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_167_167);
    }
#line 217 "mercury_compile_middle_passes.m"
    {
#line 217 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_167_167, (MR_Integer) 170, (MR_String) "unneeded_code", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_165_165, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_171_171);
    }
#line 219 "mercury_compile_middle_passes.m"
    {
#line 219 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_167_167, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_175_175, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_14);
    }
#line 221 "mercury_compile_middle_passes.m"
    {
#line 221 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_175_175, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_171_171, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_180_180);
    }
#line 224 "mercury_compile_middle_passes.m"
    {
#line 224 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_175_175, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_182_182);
    }
#line 225 "mercury_compile_middle_passes.m"
    {
#line 225 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_182_182, (MR_Integer) 173, (MR_String) "implicit_parallelism", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_180_180, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_186_186);
    }
#line 227 "mercury_compile_middle_passes.m"
    {
#line 227 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_182_182, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_188_188);
    }
#line 228 "mercury_compile_middle_passes.m"
    {
#line 228 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_188_188, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_186_186, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_192_192);
    }
#line 230 "mercury_compile_middle_passes.m"
    {
#line 230 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_188_188, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_194_194);
    }
#line 231 "mercury_compile_middle_passes.m"
    {
#line 231 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_194_194, (MR_Integer) 200, (MR_String) "granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_192_192, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_198_198);
    }
#line 233 "mercury_compile_middle_passes.m"
    {
#line 233 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_194_194, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_200_200);
    }
#line 234 "mercury_compile_middle_passes.m"
    {
#line 234 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_200_200, (MR_Integer) 201, (MR_String) "distance_granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_198_198, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_204_204);
    }
#line 236 "mercury_compile_middle_passes.m"
    {
#line 236 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_200_200, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_206_206);
    }
#line 237 "mercury_compile_middle_passes.m"
    {
#line 237 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_206_206, (MR_Integer) 205, (MR_String) "dependent_par_conj", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_204_204, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_210_210);
    }
#line 239 "mercury_compile_middle_passes.m"
    {
#line 239 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_206_206, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_212_212);
    }
#line 240 "mercury_compile_middle_passes.m"
    {
#line 240 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_212_212, (MR_Integer) 206, (MR_String) "par_loop_control", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_210_210, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_216_216);
    }
#line 242 "mercury_compile_middle_passes.m"
    {
#line 242 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_212_212, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_218_218);
    }
#line 243 "mercury_compile_middle_passes.m"
    {
#line 243 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_218_218, (MR_Integer) 210, (MR_String) "lco", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_216_216, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_222_222);
    }
#line 245 "mercury_compile_middle_passes.m"
    {
#line 245 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_218_218, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_224_224);
    }
#line 246 "mercury_compile_middle_passes.m"
    {
#line 246 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_224_224, (MR_Integer) 213, (MR_String) "float_reg_wrapper", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_222_222, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_228_228);
    }
#line 253 "mercury_compile_middle_passes.m"
    {
#line 253 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_224_224, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_232_232, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_15);
    }
#line 255 "mercury_compile_middle_passes.m"
    {
#line 255 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_232_232, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_228_228, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_237_237);
    }
#line 261 "mercury_compile_middle_passes.m"
    {
#line 261 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_232_232, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_239_239);
    }
#line 262 "mercury_compile_middle_passes.m"
    {
#line 262 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_239_239, (MR_Integer) 220, (MR_String) "term_size_prof", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_237_237, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_243_243);
    }
#line 267 "mercury_compile_middle_passes.m"
    {
#line 267 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_239_239, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_245_245);
    }
#line 268 "mercury_compile_middle_passes.m"
    {
#line 268 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_245_245, (MR_Integer) 225, (MR_String) "deep_profiling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_243_243, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_249_249);
    }
#line 273 "mercury_compile_middle_passes.m"
    {
#line 273 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_245_245, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_251_251);
    }
#line 274 "mercury_compile_middle_passes.m"
    {
#line 274 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_251_251, (MR_Integer) 230, (MR_String) "complexity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_249_249, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_255_255);
    }
#line 277 "mercury_compile_middle_passes.m"
    {
#line 277 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_251_251, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_257_257);
    }
#line 278 "mercury_compile_middle_passes.m"
    {
#line 278 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_257_257, (MR_Integer) 240, (MR_String) "region_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_255_255, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_261_261);
    }
#line 280 "mercury_compile_middle_passes.m"
    {
#line 280 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_257_257, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
    }
#line 281 "mercury_compile_middle_passes.m"
    {
#line 281 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17, (MR_Integer) 250, (MR_String) "dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_261_261, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_267_267);
    }
#line 283 "mercury_compile_middle_passes.m"
    {
#line 283 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17, (MR_Integer) 299, (MR_String) "middle_pass", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_267_267, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
#line 283 "mercury_compile_middle_passes.m"
      return;
    }
#line 112 "mercury_compile_middle_passes.m"
  }
#line 26 "mercury_compile_middle_passes.m"
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
