/*
** Automatically generated from `mercury_compile_llds_back_end.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module top_level.mercury_compile_llds_back_end. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile_llds_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_llds_back_end.mih"


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
#include "backend_libs.base_typeclass_info.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.compile_target_code.mih"
#include "backend_libs.export.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mark_tail_calls.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.dupproc.mih"
#include "ll_backend.follow_code.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.liveness.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.optimize.mih"
#include "ll_backend.proc_gen.mih"
#include "ll_backend.prog_rep.mih"
#include "ll_backend.prog_rep_tables.mih"
#include "ll_backend.saved_vars.mih"
#include "ll_backend.stack_alloc.mih"
#include "ll_backend.stack_layout.mih"
#include "ll_backend.stack_opt.mih"
#include "ll_backend.store_alloc.mih"
#include "ll_backend.trace_gen.mih"
#include "ll_backend.transform_llds.mih"
#include "ll_backend.unify_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
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
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_file.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 161 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__161__1_2_p_0(
#line 161 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_57,
#line 161 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_58);

#line 867 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
#line 867 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
#line 867 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
#line 867 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
#line 867 "mercury_compile_llds_back_end.m"
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
#line 867 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12);

#line 853 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10);

#line 846 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8);

#line 835 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
#line 835 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 835 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 835 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
#line 835 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4);

#line 829 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
#line 829 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
#line 829 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
#line 829 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6);

#line 821 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__get_c_body_code_2_p_0(
#line 821 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 821 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__2_2);

#line 789 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
#line 789 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 789 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
#line 789 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8);

#line 777 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
#line 777 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
#line 777 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
#line 777 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6);

#line 772 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
#line 772 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2);

#line 738 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
#line 738 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
#line 738 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
#line 738 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Foreign_InterfaceInfo_6);

#line 591 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);

#line 573 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);

#line 562 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_16,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_17,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13);

#line 558 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 551 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

#line 547 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 540 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

#line 522 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_5_p_0(
#line 522 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_6,
#line 522 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_7,
#line 522 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_8);

#line 514 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1(
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 499 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15,
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16);

#line 493 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 478 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);

#line 470 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 460 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 453 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 442 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 435 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 424 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 299 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__ProcCode_19,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47);

#line 282 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9);

#line 214 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_7,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9);

#line 188 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_24,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_25,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_10);

#line 161 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0_1(
#line 161 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg);

#line 141 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0(
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_21,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_23,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_24,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_25);

#line 714 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3(
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 678 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2(
#line 678 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 678 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1);

#line 670 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1(
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);


static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[4][2];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[3][8];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][4];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[6][3];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[1][10];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][5];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[5][1];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][9];




static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[2]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[3]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_map_run_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_9[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 10))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[2])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[5][1] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[1]))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[5]))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[2]))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "\n#endif"))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_goal_feature_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 161 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__161__1_2_p_0(
#line 161 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_57,
#line 161 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_58)
#line 161 "mercury_compile_llds_back_end.m"
{
#line 161 "mercury_compile_llds_back_end.m"
  {
#line 161 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__HeadVar__1_57 == top_level__mercury_compile_llds_back_end__HeadVar__2_58);

#line 161 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 161 "mercury_compile_llds_back_end.m"
  }
#line 161 "mercury_compile_llds_back_end.m"
}

#line 867 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
#line 867 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
#line 867 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
#line 867 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
#line 867 "mercury_compile_llds_back_end.m"
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
#line 867 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12)
#line 867 "mercury_compile_llds_back_end.m"
{
#line 871 "mercury_compile_llds_back_end.m"
  {
#line 871 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 871 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_14;
#line 871 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PIC_15;
#line 871 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Obj_16;
#line 871 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__C_File_17;

#line 872 "mercury_compile_llds_back_end.m"
    {
#line 872 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_8, &top_level__mercury_compile_llds_back_end__LinkedTargetType_14);
    }
#line 873 "mercury_compile_llds_back_end.m"
    {
#line 873 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__LinkedTargetType_14, &top_level__mercury_compile_llds_back_end__PIC_15);
    }
#line 874 "mercury_compile_llds_back_end.m"
    {
#line 874 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__PIC_15, &top_level__mercury_compile_llds_back_end__Obj_16);
    }
#line 875 "mercury_compile_llds_back_end.m"
    {
#line 875 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__C_File_17 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, (MR_String) ".c");
    }
#line 876 "mercury_compile_llds_back_end.m"
    {
#line 876 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__O_File_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, top_level__mercury_compile_llds_back_end__Obj_16);
    }
#line 877 "mercury_compile_llds_back_end.m"
    {
#line 877 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__ErrorStream_9, top_level__mercury_compile_llds_back_end__PIC_15, top_level__mercury_compile_llds_back_end__C_File_17, *top_level__mercury_compile_llds_back_end__O_File_11, top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__Succeeded_12);
#line 877 "mercury_compile_llds_back_end.m"
      return;
    }
#line 871 "mercury_compile_llds_back_end.m"
  }
#line 867 "mercury_compile_llds_back_end.m"
}

#line 853 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
#line 853 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10)
#line 853 "mercury_compile_llds_back_end.m"
{
#line 856 "mercury_compile_llds_back_end.m"
  {
#line 856 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 856 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_12;
#line 856 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PIC_13;
#line 856 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Obj_14;
#line 856 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__C_File_15;
#line 856 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__O_File_16;

#line 857 "mercury_compile_llds_back_end.m"
    {
#line 857 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_7, &top_level__mercury_compile_llds_back_end__LinkedTargetType_12);
    }
#line 858 "mercury_compile_llds_back_end.m"
    {
#line 858 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__LinkedTargetType_12, &top_level__mercury_compile_llds_back_end__PIC_13);
    }
#line 859 "mercury_compile_llds_back_end.m"
    {
#line 859 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__PIC_13, &top_level__mercury_compile_llds_back_end__Obj_14);
    }
#line 860 "mercury_compile_llds_back_end.m"
    {
#line 860 "mercury_compile_llds_back_end.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__C_File_15);
    }
#line 862 "mercury_compile_llds_back_end.m"
    {
#line 862 "mercury_compile_llds_back_end.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, top_level__mercury_compile_llds_back_end__Obj_14, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__O_File_16);
    }
#line 864 "mercury_compile_llds_back_end.m"
    {
#line 864 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__ErrorStream_8, top_level__mercury_compile_llds_back_end__PIC_13, top_level__mercury_compile_llds_back_end__C_File_15, top_level__mercury_compile_llds_back_end__O_File_16, top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__Succeeded_10);
#line 864 "mercury_compile_llds_back_end.m"
      return;
    }
#line 856 "mercury_compile_llds_back_end.m"
  }
#line 853 "mercury_compile_llds_back_end.m"
}

#line 846 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8)
#line 846 "mercury_compile_llds_back_end.m"
{
#line 849 "mercury_compile_llds_back_end.m"
  {
#line 849 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 849 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LLDS_10;

#line 850 "mercury_compile_llds_back_end.m"
    {
#line 850 "mercury_compile_llds_back_end.m"
      ll_backend__transform_llds__transform_llds_3_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS0_7, &top_level__mercury_compile_llds_back_end__LLDS_10);
    }
#line 851 "mercury_compile_llds_back_end.m"
    {
#line 851 "mercury_compile_llds_back_end.m"
      ll_backend__llds_out__llds_out_file__output_llds_5_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__Succeeded_8);
#line 851 "mercury_compile_llds_back_end.m"
      return;
    }
#line 849 "mercury_compile_llds_back_end.m"
  }
#line 846 "mercury_compile_llds_back_end.m"
}

#line 835 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
#line 835 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 835 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 835 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
#line 835 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4)
#line 835 "mercury_compile_llds_back_end.m"
{
#line 838 "mercury_compile_llds_back_end.m"
  {
#line 838 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 838 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 838 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 838 "mercury_compile_llds_back_end.m"
    else
#line 839 "mercury_compile_llds_back_end.m"
      {
#line 839 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Chunk_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
#line 839 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Chunks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
#line 839 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Module_11;
#line 839 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Modules_12;
#line 839 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__NumString_13;
#line 839 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__ThisModuleName_14;
#line 839 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__Num1_15;

#line 840 "mercury_compile_llds_back_end.m"
        {
#line 840 "mercury_compile_llds_back_end.m"
          mercury__string__int_to_string_2_p_0(top_level__mercury_compile_llds_back_end__HeadVar__3_3, &top_level__mercury_compile_llds_back_end__NumString_13);
        }
#line 841 "mercury_compile_llds_back_end.m"
        {
#line 841 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ThisModuleName_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__NumString_13);
        }
#line 842 "mercury_compile_llds_back_end.m"
        {
#line 842 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__Module_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 842 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ThisModuleName_14));
#line 842 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Chunk_7));
#line 842 "mercury_compile_llds_back_end.m"
        }
#line 843 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__Num1_15 = (top_level__mercury_compile_llds_back_end__HeadVar__3_3 + (MR_Integer) 1);
#line 844 "mercury_compile_llds_back_end.m"
        {
#line 844 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__Chunks_8, top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__Num1_15, &top_level__mercury_compile_llds_back_end__Modules_12);
        }
#line 839 "mercury_compile_llds_back_end.m"
        {
#line 839 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 839 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = base;
#line 839 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Module_11));
#line 839 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Modules_12));
#line 839 "mercury_compile_llds_back_end.m"
        }
#line 839 "mercury_compile_llds_back_end.m"
      }
#line 838 "mercury_compile_llds_back_end.m"
  }
#line 835 "mercury_compile_llds_back_end.m"
}

#line 829 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
#line 829 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
#line 829 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
#line 829 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6)
#line 829 "mercury_compile_llds_back_end.m"
{
#line 832 "mercury_compile_llds_back_end.m"
  {
#line 832 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 833 "mercury_compile_llds_back_end.m"
    {
#line 833 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__ChunkList_4, top_level__mercury_compile_llds_back_end__ModName_5, (MR_Integer) 0, top_level__mercury_compile_llds_back_end__Modules_6);
#line 833 "mercury_compile_llds_back_end.m"
      return;
    }
#line 832 "mercury_compile_llds_back_end.m"
  }
#line 829 "mercury_compile_llds_back_end.m"
}

#line 821 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__get_c_body_code_2_p_0(
#line 821 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 821 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__2_2)
#line 821 "mercury_compile_llds_back_end.m"
{
#line 824 "mercury_compile_llds_back_end.m"
  {
#line 824 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 824 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 824 "mercury_compile_llds_back_end.m"
    else
#line 826 "mercury_compile_llds_back_end.m"
      {
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Lang_3;
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Code_4;
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Context_5;
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__CodesAndContexts_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__C_Modules_7;
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
#line 826 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9;

#line 825 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__Lang_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_8_8, (MR_Integer) 0)));
#line 825 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__Code_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_8_8, (MR_Integer) 1)));
#line 825 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__Context_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_8_8, (MR_Integer) 2)));
#line 826 "mercury_compile_llds_back_end.m"
        {
#line 826 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 826 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_9_9, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Lang_3));
#line 826 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_9_9, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Code_4));
#line 826 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_9_9, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Context_5));
#line 826 "mercury_compile_llds_back_end.m"
        }
#line 827 "mercury_compile_llds_back_end.m"
        {
#line 827 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__get_c_body_code_2_p_0(top_level__mercury_compile_llds_back_end__CodesAndContexts_6, &top_level__mercury_compile_llds_back_end__C_Modules_7);
        }
#line 826 "mercury_compile_llds_back_end.m"
        {
#line 826 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 826 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__2_2 = base;
#line 826 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_9_9));
#line 826 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_Modules_7));
#line 826 "mercury_compile_llds_back_end.m"
        }
#line 826 "mercury_compile_llds_back_end.m"
      }
#line 824 "mercury_compile_llds_back_end.m"
  }
#line 821 "mercury_compile_llds_back_end.m"
}

#line 789 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
#line 789 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 789 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
#line 789 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8)
#line 789 "mercury_compile_llds_back_end.m"
{
#line 793 "mercury_compile_llds_back_end.m"
  {
#line 793 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 793 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 0)));
#line 793 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 1)));
#line 793 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 2)));

#line 803 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__Lang_10 == (MR_Integer) 0))
#line 797 "mercury_compile_llds_back_end.m"
      {
#line 797 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__HeaderFileName_13;
#line 797 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__IncludeString_14;
#line 797 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__V_40_40;
#line 797 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_44_44;

#line 798 "mercury_compile_llds_back_end.m"
        {
#line 798 "mercury_compile_llds_back_end.m"
          parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__ModuleName_11, (MR_String) ".mh", &top_level__mercury_compile_llds_back_end__HeaderFileName_13);
        }
#line 800 "mercury_compile_llds_back_end.m"
        {
#line 800 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_40_40 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeaderFileName_13, (MR_String) "\"\n");
        }
#line 800 "mercury_compile_llds_back_end.m"
        {
#line 800 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__IncludeString_14 = mercury__string__f_43_43_2_f_0((MR_String) "#include \"", top_level__mercury_compile_llds_back_end__V_40_40);
        }
#line 802 "mercury_compile_llds_back_end.m"
        {
#line 802 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 802 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_44_44, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__IncludeString_14));
#line 802 "mercury_compile_llds_back_end.m"
        }
#line 801 "mercury_compile_llds_back_end.m"
        {
#line 801 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 801 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 801 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__Include_8 = base;
#line 801 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 801 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 801 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_44_44));
#line 801 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Context_12));
#line 801 "mercury_compile_llds_back_end.m"
        }
#line 797 "mercury_compile_llds_back_end.m"
      }
#line 803 "mercury_compile_llds_back_end.m"
    else
#line 803 "mercury_compile_llds_back_end.m"
      if ((top_level__mercury_compile_llds_back_end__Lang_10 == (MR_Integer) 1))
#line 804 "mercury_compile_llds_back_end.m"
        {
#line 805 "mercury_compile_llds_back_end.m"
          {
#line 805 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for C#");
#line 805 "mercury_compile_llds_back_end.m"
            return;
          }
#line 804 "mercury_compile_llds_back_end.m"
        }
#line 803 "mercury_compile_llds_back_end.m"
      else
#line 803 "mercury_compile_llds_back_end.m"
        if ((top_level__mercury_compile_llds_back_end__Lang_10 == (MR_Integer) 4))
#line 816 "mercury_compile_llds_back_end.m"
          {
#line 817 "mercury_compile_llds_back_end.m"
            {
#line 817 "mercury_compile_llds_back_end.m"
              mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Erlang");
#line 817 "mercury_compile_llds_back_end.m"
              return;
            }
#line 816 "mercury_compile_llds_back_end.m"
          }
#line 803 "mercury_compile_llds_back_end.m"
        else
#line 803 "mercury_compile_llds_back_end.m"
          if ((top_level__mercury_compile_llds_back_end__Lang_10 == (MR_Integer) 3))
#line 808 "mercury_compile_llds_back_end.m"
            {
#line 809 "mercury_compile_llds_back_end.m"
              {
#line 809 "mercury_compile_llds_back_end.m"
                mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for IL");
#line 809 "mercury_compile_llds_back_end.m"
                return;
              }
#line 808 "mercury_compile_llds_back_end.m"
            }
#line 803 "mercury_compile_llds_back_end.m"
          else
#line 812 "mercury_compile_llds_back_end.m"
            {
#line 813 "mercury_compile_llds_back_end.m"
              {
#line 813 "mercury_compile_llds_back_end.m"
                mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Java");
#line 813 "mercury_compile_llds_back_end.m"
                return;
              }
#line 812 "mercury_compile_llds_back_end.m"
            }
#line 793 "mercury_compile_llds_back_end.m"
  }
#line 789 "mercury_compile_llds_back_end.m"
}

#line 777 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
#line 777 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
#line 777 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
#line 777 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6)
#line 777 "mercury_compile_llds_back_end.m"
{
#line 780 "mercury_compile_llds_back_end.m"
  {
#line 780 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 780 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Define_7;
#line 780 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Start_8;
#line 780 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_11_11;
#line 780 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_12_12;
#line 780 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_14_14;
#line 780 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_18_18;
#line 780 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;
#line 780 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_23_23;

#line 781 "mercury_compile_llds_back_end.m"
    {
#line 781 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__Define_7 = backend_libs__foreign__decl_guard_1_f_0(top_level__mercury_compile_llds_back_end__ModuleName_4);
    }
#line 782 "mercury_compile_llds_back_end.m"
    {
#line 782 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_14_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, (MR_String) "\n");
    }
#line 782 "mercury_compile_llds_back_end.m"
    {
#line 782 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\n#define ", top_level__mercury_compile_llds_back_end__V_14_14);
    }
#line 782 "mercury_compile_llds_back_end.m"
    {
#line 782 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_11_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, top_level__mercury_compile_llds_back_end__V_12_12);
    }
#line 782 "mercury_compile_llds_back_end.m"
    {
#line 782 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__Start_8 = mercury__string__f_43_43_2_f_0((MR_String) "#ifndef ", top_level__mercury_compile_llds_back_end__V_11_11);
    }
#line 785 "mercury_compile_llds_back_end.m"
    {
#line 785 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 785 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_18_18, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_8));
#line 785 "mercury_compile_llds_back_end.m"
    }
#line 785 "mercury_compile_llds_back_end.m"
    {
#line 785 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_19_19 = mercury__term__context_init_0_f_0();
    }
#line 784 "mercury_compile_llds_back_end.m"
    {
#line 784 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 784 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 784 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__StartGuard_5 = base;
#line 784 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 784 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 784 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_18_18));
#line 784 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_19_19));
#line 784 "mercury_compile_llds_back_end.m"
    }
#line 787 "mercury_compile_llds_back_end.m"
    {
#line 787 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_23_23 = mercury__term__context_init_0_f_0();
    }
#line 786 "mercury_compile_llds_back_end.m"
    {
#line 786 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 786 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 786 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__EndGuard_6 = base;
#line 786 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 786 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 786 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[4]));
#line 786 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_23_23));
#line 786 "mercury_compile_llds_back_end.m"
    }
#line 780 "mercury_compile_llds_back_end.m"
  }
#line 777 "mercury_compile_llds_back_end.m"
}

#line 772 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
#line 772 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2)
#line 772 "mercury_compile_llds_back_end.m"
{
#line 774 "mercury_compile_llds_back_end.m"
  {
#line 774 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 774 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 1)));
#line 775 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 0)));
#line 775 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 2)));
#line 775 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 3)));

#line 775 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_6_6 == (MR_Integer) 0);
#line 774 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 774 "mercury_compile_llds_back_end.m"
  }
#line 772 "mercury_compile_llds_back_end.m"
}

#line 738 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
#line 738 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
#line 738 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
#line 738 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Foreign_InterfaceInfo_6)
#line 738 "mercury_compile_llds_back_end.m"
{
#line 741 "mercury_compile_llds_back_end.m"
  {
#line 741 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_7;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDecls_8;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImports0_9;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignSelfImport_10;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImports_11;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCode_12;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignDecls_13;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignImports_15;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignBodys_17;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Foreign_ExportDecls_19;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Foreign_ExportDefns_20;
#line 741 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_21_21;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherDecls_14;
#line 761 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherImports_16;
#line 763 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherBodys_18;

#line 742 "mercury_compile_llds_back_end.m"
    {
#line 742 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ModuleName_7);
    }
#line 743 "mercury_compile_llds_back_end.m"
    {
#line 743 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_decl_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignDecls_8);
    }
#line 744 "mercury_compile_llds_back_end.m"
    {
#line 744 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_import_module_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignImports0_9);
    }
#line 756 "mercury_compile_llds_back_end.m"
    {
#line 756 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_21_21 = mercury__term__context_init_0_f_0();
    }
#line 755 "mercury_compile_llds_back_end.m"
    {
#line 755 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignSelfImport_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 755 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_10, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UseForeignLanguage_5));
#line 755 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_10, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
#line 755 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_10, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_21_21));
#line 755 "mercury_compile_llds_back_end.m"
    }
#line 757 "mercury_compile_llds_back_end.m"
    {
#line 757 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignImports_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 757 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ForeignImports_11, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignSelfImport_10));
#line 757 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ForeignImports_11, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignImports0_9));
#line 757 "mercury_compile_llds_back_end.m"
    }
#line 758 "mercury_compile_llds_back_end.m"
    {
#line 758 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_body_code_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignBodyCode_12);
    }
#line 759 "mercury_compile_llds_back_end.m"
    {
#line 759 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_decls_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignDecls_8, &top_level__mercury_compile_llds_back_end__WantedForeignDecls_13, &top_level__mercury_compile_llds_back_end___OtherDecls_14);
    }
#line 761 "mercury_compile_llds_back_end.m"
    {
#line 761 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_imports_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignImports_11, &top_level__mercury_compile_llds_back_end__WantedForeignImports_15, &top_level__mercury_compile_llds_back_end___OtherImports_16);
    }
#line 763 "mercury_compile_llds_back_end.m"
    {
#line 763 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_bodys_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignBodyCode_12, &top_level__mercury_compile_llds_back_end__WantedForeignBodys_17, &top_level__mercury_compile_llds_back_end___OtherBodys_18);
    }
#line 765 "mercury_compile_llds_back_end.m"
    {
#line 765 "mercury_compile_llds_back_end.m"
      backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__Foreign_ExportDecls_19);
    }
#line 766 "mercury_compile_llds_back_end.m"
    {
#line 766 "mercury_compile_llds_back_end.m"
      backend_libs__export__get_foreign_export_defns_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__Foreign_ExportDefns_20);
    }
#line 768 "mercury_compile_llds_back_end.m"
    {
#line 768 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 768 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 768 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__Foreign_InterfaceInfo_6 = base;
#line 768 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
#line 768 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignDecls_13));
#line 768 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignImports_15));
#line 768 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignBodys_17));
#line 768 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Foreign_ExportDecls_19));
#line 768 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Foreign_ExportDefns_20));
#line 768 "mercury_compile_llds_back_end.m"
    }
#line 741 "mercury_compile_llds_back_end.m"
  }
#line 738 "mercury_compile_llds_back_end.m"
}

#line 591 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 591 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16)
#line 591 "mercury_compile_llds_back_end.m"
{
#line 595 "mercury_compile_llds_back_end.m"
  {
#line 595 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 596 "mercury_compile_llds_back_end.m"
    {
#line 596 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Generating call continuation information...");
    }
#line 598 "mercury_compile_llds_back_end.m"
    {
#line 598 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
    }
#line 599 "mercury_compile_llds_back_end.m"
    {
#line 599 "mercury_compile_llds_back_end.m"
      ll_backend__continuation_info__maybe_process_llds_4_p_0(top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);
    }
#line 600 "mercury_compile_llds_back_end.m"
    {
#line 600 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) " done.\n");
    }
#line 601 "mercury_compile_llds_back_end.m"
    {
#line 601 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
#line 601 "mercury_compile_llds_back_end.m"
      return;
    }
#line 595 "mercury_compile_llds_back_end.m"
  }
#line 591 "mercury_compile_llds_back_end.m"
}

#line 573 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
#line 573 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18)
#line 573 "mercury_compile_llds_back_end.m"
{
#line 577 "mercury_compile_llds_back_end.m"
  {
#line 577 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 577 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 577 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_16;

#line 578 "mercury_compile_llds_back_end.m"
    {
#line 578 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 579 "mercury_compile_llds_back_end.m"
    {
#line 579 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 457, &top_level__mercury_compile_llds_back_end__Optimize_16);
    }
#line 587 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__Optimize_16 == (MR_Integer) 0))
#line 588 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17;
#line 587 "mercury_compile_llds_back_end.m"
    else
#line 581 "mercury_compile_llds_back_end.m"
      {
#line 582 "mercury_compile_llds_back_end.m"
        {
#line 582 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Doing optimizations...\n");
        }
#line 583 "mercury_compile_llds_back_end.m"
        {
#line 583 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
        }
#line 584 "mercury_compile_llds_back_end.m"
        {
#line 584 "mercury_compile_llds_back_end.m"
          ll_backend__optimize__optimize_procs_4_p_0(top_level__mercury_compile_llds_back_end__Globals_15, top_level__mercury_compile_llds_back_end__GlobalData_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);
        }
#line 585 "mercury_compile_llds_back_end.m"
        {
#line 585 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% done.\n");
        }
#line 586 "mercury_compile_llds_back_end.m"
        {
#line 586 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
#line 586 "mercury_compile_llds_back_end.m"
          return;
        }
#line 581 "mercury_compile_llds_back_end.m"
      }
#line 577 "mercury_compile_llds_back_end.m"
  }
#line 573 "mercury_compile_llds_back_end.m"
}

#line 562 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_16,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_17,
#line 562 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13)
#line 562 "mercury_compile_llds_back_end.m"
{
#line 566 "mercury_compile_llds_back_end.m"
  {
#line 566 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 569 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___HLDS_15;

#line 567 "mercury_compile_llds_back_end.m"
    {
#line 567 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% Generating code...\n");
    }
#line 568 "mercury_compile_llds_back_end.m"
    {
#line 568 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_10);
    }
#line 569 "mercury_compile_llds_back_end.m"
    {
#line 569 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__generate_module_code_7_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end___HLDS_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_17, top_level__mercury_compile_llds_back_end__LLDS_13);
    }
#line 570 "mercury_compile_llds_back_end.m"
    {
#line 570 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% done.\n");
    }
#line 571 "mercury_compile_llds_back_end.m"
    {
#line 571 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_11);
#line 571 "mercury_compile_llds_back_end.m"
      return;
    }
#line 566 "mercury_compile_llds_back_end.m"
  }
#line 562 "mercury_compile_llds_back_end.m"
}

#line 558 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 558 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 558 "mercury_compile_llds_back_end.m"
{
#line 558 "mercury_compile_llds_back_end.m"
  {
#line 558 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 558 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 558 "mercury_compile_llds_back_end.m"
    {
#line 558 "mercury_compile_llds_back_end.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 558 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 558 "mercury_compile_llds_back_end.m"
  }
#line 558 "mercury_compile_llds_back_end.m"
}

#line 551 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 551 "mercury_compile_llds_back_end.m"
{
#line 554 "mercury_compile_llds_back_end.m"
  {
#line 554 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 555 "mercury_compile_llds_back_end.m"
    {
#line 555 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Allocating store map...");
    }
#line 556 "mercury_compile_llds_back_end.m"
    {
#line 556 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 557 "mercury_compile_llds_back_end.m"
    {
#line 557 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[3]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 559 "mercury_compile_llds_back_end.m"
    {
#line 559 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 560 "mercury_compile_llds_back_end.m"
    {
#line 560 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 560 "mercury_compile_llds_back_end.m"
      return;
    }
#line 554 "mercury_compile_llds_back_end.m"
  }
#line 551 "mercury_compile_llds_back_end.m"
}

#line 547 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 547 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 547 "mercury_compile_llds_back_end.m"
{
#line 547 "mercury_compile_llds_back_end.m"
  {
#line 547 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 547 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

#line 547 "mercury_compile_llds_back_end.m"
    {
#line 547 "mercury_compile_llds_back_end.m"
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
#line 547 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
#line 547 "mercury_compile_llds_back_end.m"
  }
#line 547 "mercury_compile_llds_back_end.m"
}

#line 540 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 540 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 540 "mercury_compile_llds_back_end.m"
{
#line 543 "mercury_compile_llds_back_end.m"
  {
#line 543 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 544 "mercury_compile_llds_back_end.m"
    {
#line 544 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing stack vars...");
    }
#line 545 "mercury_compile_llds_back_end.m"
    {
#line 545 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 546 "mercury_compile_llds_back_end.m"
    {
#line 546 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[2]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 548 "mercury_compile_llds_back_end.m"
    {
#line 548 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 549 "mercury_compile_llds_back_end.m"
    {
#line 549 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 549 "mercury_compile_llds_back_end.m"
      return;
    }
#line 543 "mercury_compile_llds_back_end.m"
  }
#line 540 "mercury_compile_llds_back_end.m"
}

#line 522 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_5_p_0(
#line 522 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_6,
#line 522 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_7,
#line 522 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_8)
#line 522 "mercury_compile_llds_back_end.m"
{
#line 525 "mercury_compile_llds_back_end.m"
  {
#line 525 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 525 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_10;
#line 525 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_11;

#line 526 "mercury_compile_llds_back_end.m"
    {
#line 526 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_8, &top_level__mercury_compile_llds_back_end__Globals_10);
    }
#line 527 "mercury_compile_llds_back_end.m"
    {
#line 527 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_10, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_11);
    }
#line 536 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__WarnTailCalls_11 == (MR_Integer) 0))
#line 537 "mercury_compile_llds_back_end.m"
      {
#line 537 "mercury_compile_llds_back_end.m"
      }
#line 536 "mercury_compile_llds_back_end.m"
    else
#line 530 "mercury_compile_llds_back_end.m"
      {
#line 531 "mercury_compile_llds_back_end.m"
        {
#line 531 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_6, (MR_String) "% Warning about non-tail recursive calls...\n");
        }
#line 533 "mercury_compile_llds_back_end.m"
        {
#line 533 "mercury_compile_llds_back_end.m"
          hlds__mark_tail_calls__warn_non_tail_calls_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_8);
        }
#line 534 "mercury_compile_llds_back_end.m"
        {
#line 534 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_6, (MR_String) "% done.\n");
        }
#line 535 "mercury_compile_llds_back_end.m"
        {
#line 535 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_7);
#line 535 "mercury_compile_llds_back_end.m"
          return;
        }
#line 530 "mercury_compile_llds_back_end.m"
      }
#line 525 "mercury_compile_llds_back_end.m"
  }
#line 522 "mercury_compile_llds_back_end.m"
}

#line 514 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1(
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 514 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 514 "mercury_compile_llds_back_end.m"
{
#line 514 "mercury_compile_llds_back_end.m"
  {
#line 514 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 514 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6;

#line 514 "mercury_compile_llds_back_end.m"
    {
#line 514 "mercury_compile_llds_back_end.m"
      hlds__mark_tail_calls__mark_tail_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6);
    }
#line 514 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6));
#line 514 "mercury_compile_llds_back_end.m"
  }
#line 514 "mercury_compile_llds_back_end.m"
}

#line 499 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15,
#line 499 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16)
#line 499 "mercury_compile_llds_back_end.m"
{
#line 502 "mercury_compile_llds_back_end.m"
  {
#line 502 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 502 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 502 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12;
#line 502 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_13;
#line 502 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MarkTailCalls_14;

#line 503 "mercury_compile_llds_back_end.m"
    {
#line 503 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 504 "mercury_compile_llds_back_end.m"
    {
#line 504 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 125, &top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12);
    }
#line 505 "mercury_compile_llds_back_end.m"
    {
#line 505 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_13);
    }
#line 507 "mercury_compile_llds_back_end.m"
    {
#line 507 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MarkTailCalls_14 = mercury__bool__or_2_f_0(top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12, top_level__mercury_compile_llds_back_end__WarnTailCalls_13);
    }
#line 518 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__MarkTailCalls_14 == (MR_Integer) 0))
#line 519 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15;
#line 518 "mercury_compile_llds_back_end.m"
    else
#line 509 "mercury_compile_llds_back_end.m"
      {
#line 510 "mercury_compile_llds_back_end.m"
        {
#line 510 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Marking directly tail recursive calls...");
        }
#line 512 "mercury_compile_llds_back_end.m"
        {
#line 512 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
        }
#line 513 "mercury_compile_llds_back_end.m"
        {
#line 513 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &top_level__mercury_compile_llds_back_end_scalar_common_8[1]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16);
        }
#line 516 "mercury_compile_llds_back_end.m"
        {
#line 516 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
        }
#line 517 "mercury_compile_llds_back_end.m"
        {
#line 517 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 517 "mercury_compile_llds_back_end.m"
          return;
        }
#line 509 "mercury_compile_llds_back_end.m"
      }
#line 502 "mercury_compile_llds_back_end.m"
  }
#line 499 "mercury_compile_llds_back_end.m"
}

#line 493 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 493 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 493 "mercury_compile_llds_back_end.m"
{
#line 493 "mercury_compile_llds_back_end.m"
  {
#line 493 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 493 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

#line 493 "mercury_compile_llds_back_end.m"
    {
#line 493 "mercury_compile_llds_back_end.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
#line 493 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
#line 493 "mercury_compile_llds_back_end.m"
  }
#line 493 "mercury_compile_llds_back_end.m"
}

#line 478 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
#line 478 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15)
#line 478 "mercury_compile_llds_back_end.m"
{
#line 481 "mercury_compile_llds_back_end.m"
  {
#line 481 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 481 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 481 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ParallelLiveness_12;
#line 481 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__DebugLiveness_13;

#line 482 "mercury_compile_llds_back_end.m"
    {
#line 482 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 483 "mercury_compile_llds_back_end.m"
    {
#line 483 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 299, &top_level__mercury_compile_llds_back_end__ParallelLiveness_12);
    }
#line 484 "mercury_compile_llds_back_end.m"
    {
#line 484 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 72, &top_level__mercury_compile_llds_back_end__DebugLiveness_13);
    }
#line 485 "mercury_compile_llds_back_end.m"
    {
#line 485 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing liveness...\n");
    }
#line 486 "mercury_compile_llds_back_end.m"
    {
#line 486 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 488 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ParallelLiveness_12 == (MR_Integer) 1);
#line 488 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 489 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__DebugLiveness_13 == (MR_Integer) -1);
#line 492 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 491 "mercury_compile_llds_back_end.m"
      {
#line 491 "mercury_compile_llds_back_end.m"
        ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
      }
#line 492 "mercury_compile_llds_back_end.m"
    else
#line 493 "mercury_compile_llds_back_end.m"
      {
#line 493 "mercury_compile_llds_back_end.m"
        {
#line 493 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[0]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
        }
#line 493 "mercury_compile_llds_back_end.m"
      }
#line 496 "mercury_compile_llds_back_end.m"
    {
#line 496 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 497 "mercury_compile_llds_back_end.m"
    {
#line 497 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 497 "mercury_compile_llds_back_end.m"
      return;
    }
#line 481 "mercury_compile_llds_back_end.m"
  }
#line 478 "mercury_compile_llds_back_end.m"
}

#line 470 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 470 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 470 "mercury_compile_llds_back_end.m"
{
#line 470 "mercury_compile_llds_back_end.m"
  {
#line 470 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 470 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 470 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 470 "mercury_compile_llds_back_end.m"
    {
#line 470 "mercury_compile_llds_back_end.m"
      ll_backend__follow_code__move_follow_code_in_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 470 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 470 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 470 "mercury_compile_llds_back_end.m"
  }
#line 470 "mercury_compile_llds_back_end.m"
}

#line 460 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 460 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 460 "mercury_compile_llds_back_end.m"
{
#line 463 "mercury_compile_llds_back_end.m"
  {
#line 463 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 463 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 463 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_12;

#line 464 "mercury_compile_llds_back_end.m"
    {
#line 464 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 465 "mercury_compile_llds_back_end.m"
    {
#line 465 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 383, &top_level__mercury_compile_llds_back_end__FollowCode_12);
    }
#line 474 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__FollowCode_12 == (MR_Integer) 0))
#line 475 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 474 "mercury_compile_llds_back_end.m"
    else
#line 467 "mercury_compile_llds_back_end.m"
      {
#line 468 "mercury_compile_llds_back_end.m"
        {
#line 468 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Migrating branch code...");
        }
#line 469 "mercury_compile_llds_back_end.m"
        {
#line 469 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
        }
#line 470 "mercury_compile_llds_back_end.m"
        {
#line 470 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[3]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
        }
#line 472 "mercury_compile_llds_back_end.m"
        {
#line 472 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
        }
#line 473 "mercury_compile_llds_back_end.m"
        {
#line 473 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 473 "mercury_compile_llds_back_end.m"
          return;
        }
#line 467 "mercury_compile_llds_back_end.m"
      }
#line 463 "mercury_compile_llds_back_end.m"
  }
#line 460 "mercury_compile_llds_back_end.m"
}

#line 453 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 453 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 453 "mercury_compile_llds_back_end.m"
{
#line 453 "mercury_compile_llds_back_end.m"
  {
#line 453 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 453 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 453 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 453 "mercury_compile_llds_back_end.m"
    {
#line 453 "mercury_compile_llds_back_end.m"
      ll_backend__stack_opt__stack_opt_cell_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 453 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 453 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 453 "mercury_compile_llds_back_end.m"
  }
#line 453 "mercury_compile_llds_back_end.m"
}

#line 442 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 442 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 442 "mercury_compile_llds_back_end.m"
{
#line 445 "mercury_compile_llds_back_end.m"
  {
#line 445 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 445 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 445 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

#line 446 "mercury_compile_llds_back_end.m"
    {
#line 446 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 447 "mercury_compile_llds_back_end.m"
    {
#line 447 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 367, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
#line 456 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__SavedVars_12 == (MR_Integer) 0))
#line 457 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 456 "mercury_compile_llds_back_end.m"
    else
#line 449 "mercury_compile_llds_back_end.m"
      {
#line 450 "mercury_compile_llds_back_end.m"
        {
#line 450 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using cells...\n");
        }
#line 452 "mercury_compile_llds_back_end.m"
        {
#line 452 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
        }
#line 453 "mercury_compile_llds_back_end.m"
        {
#line 453 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[2]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
        }
#line 454 "mercury_compile_llds_back_end.m"
        {
#line 454 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 455 "mercury_compile_llds_back_end.m"
        {
#line 455 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 455 "mercury_compile_llds_back_end.m"
          return;
        }
#line 449 "mercury_compile_llds_back_end.m"
      }
#line 445 "mercury_compile_llds_back_end.m"
  }
#line 442 "mercury_compile_llds_back_end.m"
}

#line 435 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 435 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 435 "mercury_compile_llds_back_end.m"
{
#line 435 "mercury_compile_llds_back_end.m"
  {
#line 435 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 435 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 435 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 435 "mercury_compile_llds_back_end.m"
    {
#line 435 "mercury_compile_llds_back_end.m"
      ll_backend__saved_vars__saved_vars_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 435 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 435 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 435 "mercury_compile_llds_back_end.m"
  }
#line 435 "mercury_compile_llds_back_end.m"
}

#line 424 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 424 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 424 "mercury_compile_llds_back_end.m"
{
#line 427 "mercury_compile_llds_back_end.m"
  {
#line 427 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 427 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 427 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

#line 428 "mercury_compile_llds_back_end.m"
    {
#line 428 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 429 "mercury_compile_llds_back_end.m"
    {
#line 429 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 366, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
#line 438 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__SavedVars_12 == (MR_Integer) 0))
#line 439 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 438 "mercury_compile_llds_back_end.m"
    else
#line 431 "mercury_compile_llds_back_end.m"
      {
#line 432 "mercury_compile_llds_back_end.m"
        {
#line 432 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using constants...\n");
        }
#line 434 "mercury_compile_llds_back_end.m"
        {
#line 434 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
        }
#line 435 "mercury_compile_llds_back_end.m"
        {
#line 435 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[1]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
        }
#line 436 "mercury_compile_llds_back_end.m"
        {
#line 436 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 437 "mercury_compile_llds_back_end.m"
        {
#line 437 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 437 "mercury_compile_llds_back_end.m"
          return;
        }
#line 431 "mercury_compile_llds_back_end.m"
      }
#line 427 "mercury_compile_llds_back_end.m"
  }
#line 424 "mercury_compile_llds_back_end.m"
}

#line 299 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__ProcCode_19,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 299 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47)
#line 299 "mercury_compile_llds_back_end.m"
{
#line 305 "mercury_compile_llds_back_end.m"
  {
#line 305 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredProcId_22;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_23;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsConst_24;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsCell_25;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_26;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks0_27;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList0_28;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ConstProp_29;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__DeepProf_30;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSWProf_31;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSCProf_32;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProfTrans_33;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList1_34;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList_35;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks_36;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraceTailRec_37;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_38;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MarkTailCalls_39;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcCode0_40;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_41;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Instructions_42;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_65_65;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_66_66;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_67_67;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_72_72;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_77_77;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_90_90;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94;
#line 305 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97;
#line 404 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_102_102;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__V_103_103;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_104_104;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_105_105;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_106_106;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_107_107;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_108_108;
#line 404 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_109_109;

#line 306 "mercury_compile_llds_back_end.m"
    {
#line 306 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__PredProcId_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 306 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_15));
#line 306 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcId_17));
#line 306 "mercury_compile_llds_back_end.m"
    }
#line 307 "mercury_compile_llds_back_end.m"
    {
#line 307 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43, &top_level__mercury_compile_llds_back_end__Globals_23);
    }
#line 308 "mercury_compile_llds_back_end.m"
    {
#line 308 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 366, &top_level__mercury_compile_llds_back_end__SavedVarsConst_24);
    }
#line 313 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__SavedVarsConst_24 == (MR_Integer) 0))
#line 314 "mercury_compile_llds_back_end.m"
      {
#line 314 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43;
#line 314 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45;
#line 314 "mercury_compile_llds_back_end.m"
      }
#line 313 "mercury_compile_llds_back_end.m"
    else
#line 312 "mercury_compile_llds_back_end.m"
      {
#line 312 "mercury_compile_llds_back_end.m"
        ll_backend__saved_vars__saved_vars_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53);
      }
#line 316 "mercury_compile_llds_back_end.m"
    {
#line 316 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 367, &top_level__mercury_compile_llds_back_end__SavedVarsCell_25);
    }
#line 321 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__SavedVarsCell_25 == (MR_Integer) 0))
#line 322 "mercury_compile_llds_back_end.m"
      {
#line 322 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53;
#line 322 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52;
#line 322 "mercury_compile_llds_back_end.m"
      }
#line 321 "mercury_compile_llds_back_end.m"
    else
#line 320 "mercury_compile_llds_back_end.m"
      {
#line 320 "mercury_compile_llds_back_end.m"
        ll_backend__stack_opt__stack_opt_cell_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56);
      }
#line 324 "mercury_compile_llds_back_end.m"
    {
#line 324 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 383, &top_level__mercury_compile_llds_back_end__FollowCode_26);
    }
#line 328 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__FollowCode_26 == (MR_Integer) 0))
#line 329 "mercury_compile_llds_back_end.m"
      {
#line 329 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56;
#line 329 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55;
#line 329 "mercury_compile_llds_back_end.m"
      }
#line 328 "mercury_compile_llds_back_end.m"
    else
#line 327 "mercury_compile_llds_back_end.m"
      {
#line 327 "mercury_compile_llds_back_end.m"
        ll_backend__follow_code__move_follow_code_in_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59);
      }
#line 331 "mercury_compile_llds_back_end.m"
    {
#line 331 "mercury_compile_llds_back_end.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, top_level__mercury_compile_llds_back_end__Globals_23, &top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
#line 332 "mercury_compile_llds_back_end.m"
    {
#line 332 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimpList0_28 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
#line 334 "mercury_compile_llds_back_end.m"
    {
#line 334 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 363, &top_level__mercury_compile_llds_back_end__ConstProp_29);
    }
#line 335 "mercury_compile_llds_back_end.m"
    {
#line 335 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 189, &top_level__mercury_compile_llds_back_end__DeepProf_30);
    }
#line 336 "mercury_compile_llds_back_end.m"
    {
#line 336 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 206, &top_level__mercury_compile_llds_back_end__TSWProf_31);
    }
#line 337 "mercury_compile_llds_back_end.m"
    {
#line 337 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 207, &top_level__mercury_compile_llds_back_end__TSCProf_32);
    }
#line 338 "mercury_compile_llds_back_end.m"
    {
#line 338 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_67_67, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSCProf_32));
#line 338 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "mercury_compile_llds_back_end.m"
    }
#line 338 "mercury_compile_llds_back_end.m"
    {
#line 338 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_66_66, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSWProf_31));
#line 338 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_66_66, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_67_67));
#line 338 "mercury_compile_llds_back_end.m"
    }
#line 338 "mercury_compile_llds_back_end.m"
    {
#line 338 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DeepProf_30));
#line 338 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_66_66));
#line 338 "mercury_compile_llds_back_end.m"
    }
#line 338 "mercury_compile_llds_back_end.m"
    {
#line 338 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ProfTrans_33 = mercury__bool__or_list_1_f_0(top_level__mercury_compile_llds_back_end__V_65_65);
    }
#line 347 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ConstProp_29 == (MR_Integer) 1);
#line 347 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 348 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProfTrans_33 == (MR_Integer) 0);
#line 351 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 350 "mercury_compile_llds_back_end.m"
      {
#line 350 "mercury_compile_llds_back_end.m"
        {
#line 350 "mercury_compile_llds_back_end.m"
          mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_llds_back_end__SimpList0_28, &top_level__mercury_compile_llds_back_end__SimpList1_34);
        }
#line 350 "mercury_compile_llds_back_end.m"
      }
#line 351 "mercury_compile_llds_back_end.m"
    else
#line 352 "mercury_compile_llds_back_end.m"
      {
#line 352 "mercury_compile_llds_back_end.m"
        {
#line 352 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__SimpList1_34 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_llds_back_end__SimpList0_28, ((MR_Box) ((MR_Integer) 9)));
        }
#line 352 "mercury_compile_llds_back_end.m"
      }
#line 356 "mercury_compile_llds_back_end.m"
    {
#line 356 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_72_72, 0) = ((MR_Box) ((MR_Integer) 7));
#line 356 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_72_72, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SimpList1_34));
#line 356 "mercury_compile_llds_back_end.m"
    }
#line 355 "mercury_compile_llds_back_end.m"
    {
#line 355 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimpList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 0) = ((MR_Box) ((MR_Integer) 4));
#line 355 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_72_72));
#line 355 "mercury_compile_llds_back_end.m"
    }
#line 357 "mercury_compile_llds_back_end.m"
    {
#line 357 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimplifyTasks_36 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_llds_back_end__SimpList_35);
    }
#line 358 "mercury_compile_llds_back_end.m"
    {
#line 358 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59);
    }
#line 360 "mercury_compile_llds_back_end.m"
    {
#line 360 "mercury_compile_llds_back_end.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(top_level__mercury_compile_llds_back_end__SimplifyTasks_36, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_77_77);
    }
#line 361 "mercury_compile_llds_back_end.m"
    {
#line 361 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Computing liveness in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 363 "mercury_compile_llds_back_end.m"
    {
#line 363 "mercury_compile_llds_back_end.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_77_77, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80);
    }
#line 364 "mercury_compile_llds_back_end.m"
    {
#line 364 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 125, &top_level__mercury_compile_llds_back_end__ExecTraceTailRec_37);
    }
#line 365 "mercury_compile_llds_back_end.m"
    {
#line 365 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_38);
    }
#line 367 "mercury_compile_llds_back_end.m"
    {
#line 367 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MarkTailCalls_39 = mercury__bool__or_2_f_0(top_level__mercury_compile_llds_back_end__ExecTraceTailRec_37, top_level__mercury_compile_llds_back_end__WarnTailCalls_38);
    }
#line 375 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__MarkTailCalls_39 == (MR_Integer) 0))
#line 376 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80;
#line 375 "mercury_compile_llds_back_end.m"
    else
#line 369 "mercury_compile_llds_back_end.m"
      {
#line 370 "mercury_compile_llds_back_end.m"
        {
#line 370 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Marking directly tail recursive calls in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
        }
#line 373 "mercury_compile_llds_back_end.m"
        {
#line 373 "mercury_compile_llds_back_end.m"
          hlds__mark_tail_calls__mark_tail_calls_6_p_0((MR_Integer) 10, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86);
        }
#line 369 "mercury_compile_llds_back_end.m"
      }
#line 382 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__WarnTailCalls_38 == (MR_Integer) 0))
#line 383 "mercury_compile_llds_back_end.m"
      {
#line 383 "mercury_compile_llds_back_end.m"
      }
#line 382 "mercury_compile_llds_back_end.m"
    else
#line 380 "mercury_compile_llds_back_end.m"
      {
#line 380 "mercury_compile_llds_back_end.m"
        hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0(top_level__mercury_compile_llds_back_end__Globals_23, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86);
      }
#line 385 "mercury_compile_llds_back_end.m"
    {
#line 385 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating stack slots in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 387 "mercury_compile_llds_back_end.m"
    {
#line 387 "mercury_compile_llds_back_end.m"
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_90_90);
    }
#line 388 "mercury_compile_llds_back_end.m"
    {
#line 388 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating storage locations for live vars in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 391 "mercury_compile_llds_back_end.m"
    {
#line 391 "mercury_compile_llds_back_end.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 0, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_90_90, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94);
    }
#line 392 "mercury_compile_llds_back_end.m"
    {
#line 392 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating low-level (LLDS) code for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 394 "mercury_compile_llds_back_end.m"
    {
#line 394 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__generate_proc_code_9_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97, &top_level__mercury_compile_llds_back_end__ProcCode0_40);
    }
#line 396 "mercury_compile_llds_back_end.m"
    {
#line 396 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 457, &top_level__mercury_compile_llds_back_end__Optimize_41);
    }
#line 400 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__Optimize_41 == (MR_Integer) 0))
#line 402 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__ProcCode_19 = top_level__mercury_compile_llds_back_end__ProcCode0_40;
#line 400 "mercury_compile_llds_back_end.m"
    else
#line 399 "mercury_compile_llds_back_end.m"
      {
#line 399 "mercury_compile_llds_back_end.m"
        ll_backend__optimize__optimize_proc_4_p_0(top_level__mercury_compile_llds_back_end__Globals_23, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97, top_level__mercury_compile_llds_back_end__ProcCode0_40, top_level__mercury_compile_llds_back_end__ProcCode_19);
      }
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 0)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 1)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 2)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 3)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__Instructions_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 4)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 5)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 6)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 7)));
#line 404 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 8)));
#line 405 "mercury_compile_llds_back_end.m"
    {
#line 405 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating call continuation information for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 408 "mercury_compile_llds_back_end.m"
    {
#line 408 "mercury_compile_llds_back_end.m"
      ll_backend__continuation_info__maybe_process_proc_llds_5_p_0(top_level__mercury_compile_llds_back_end__Instructions_42, top_level__mercury_compile_llds_back_end__PredProcId_22, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47);
#line 408 "mercury_compile_llds_back_end.m"
      return;
    }
#line 305 "mercury_compile_llds_back_end.m"
  }
#line 299 "mercury_compile_llds_back_end.m"
}

#line 282 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 282 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9)
#line 282 "mercury_compile_llds_back_end.m"
{
#line 287 "mercury_compile_llds_back_end.m"
  {
#line 287 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 287 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "mercury_compile_llds_back_end.m"
      {
#line 287 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 287 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 287 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 287 "mercury_compile_llds_back_end.m"
      }
#line 287 "mercury_compile_llds_back_end.m"
    else
#line 290 "mercury_compile_llds_back_end.m"
      {
#line 290 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 0)));
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 1)));
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_30;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcCode_31;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcCodes_32;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcTable_35;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_36;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_43_43;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44;
#line 290 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45;
#line 293 "mercury_compile_llds_back_end.m"
        MR_Box top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36;

#line 291 "mercury_compile_llds_back_end.m"
        {
#line 291 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ProcLabel_30 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__ProcId_28);
        }
#line 292 "mercury_compile_llds_back_end.m"
        {
#line 292 "mercury_compile_llds_back_end.m"
          hlds__hlds_pred__pred_info_get_procedures_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_5, &top_level__mercury_compile_llds_back_end__ProcTable_35);
        }
#line 293 "mercury_compile_llds_back_end.m"
        {
#line 293 "mercury_compile_llds_back_end.m"
          mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_35, ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcId_28)), &top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
        }
#line 293 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__ProcInfo_36 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
#line 294 "mercury_compile_llds_back_end.m"
        {
#line 294 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcId_28, top_level__mercury_compile_llds_back_end__ProcInfo_36, &top_level__mercury_compile_llds_back_end__ProcCode_31, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45);
        }
#line 289 "mercury_compile_llds_back_end.m"
        {
#line 289 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_30));
#line 289 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCode_31));
#line 289 "mercury_compile_llds_back_end.m"
        }
#line 296 "mercury_compile_llds_back_end.m"
        {
#line 296 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcIds_29, &top_level__mercury_compile_llds_back_end__ProcCodes_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9);
        }
#line 289 "mercury_compile_llds_back_end.m"
        {
#line 289 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 289 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = base;
#line 289 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_43_43));
#line 289 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCodes_32));
#line 289 "mercury_compile_llds_back_end.m"
        }
#line 290 "mercury_compile_llds_back_end.m"
      }
#line 287 "mercury_compile_llds_back_end.m"
  }
#line 282 "mercury_compile_llds_back_end.m"
}

#line 214 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_7,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 214 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9)
#line 214 "mercury_compile_llds_back_end.m"
{
#line 220 "mercury_compile_llds_back_end.m"
  while (MR_TRUE)
#line 220 "mercury_compile_llds_back_end.m"
    {
#line 220 "mercury_compile_llds_back_end.m"
      /* tailcall optimized into a loop */
#line 220 "mercury_compile_llds_back_end.m"
      {
#line 220 "mercury_compile_llds_back_end.m"
        MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 220 "mercury_compile_llds_back_end.m"
        if ((top_level__mercury_compile_llds_back_end__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 220 "mercury_compile_llds_back_end.m"
          {
#line 221 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 221 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_7 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6;
#line 220 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 220 "mercury_compile_llds_back_end.m"
          }
#line 220 "mercury_compile_llds_back_end.m"
        else
#line 223 "mercury_compile_llds_back_end.m"
          {
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 0)));
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 1)));
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredTable_34;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredInfo_35;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcIds_36;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcList_37;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77;
#line 223 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Box top_level__mercury_compile_llds_back_end__conv0_PredInfo_35;

#line 224 "mercury_compile_llds_back_end.m"
            {
#line 224 "mercury_compile_llds_back_end.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__PredTable_34);
            }
#line 225 "mercury_compile_llds_back_end.m"
            {
#line 225 "mercury_compile_llds_back_end.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, top_level__mercury_compile_llds_back_end__PredTable_34, ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_28)), &top_level__mercury_compile_llds_back_end__conv0_PredInfo_35);
            }
#line 225 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__PredInfo_35 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_PredInfo_35);
#line 226 "mercury_compile_llds_back_end.m"
            {
#line 226 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__ProcIds_36 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
            }
#line 230 "mercury_compile_llds_back_end.m"
            if ((top_level__mercury_compile_llds_back_end__ProcIds_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 228 "mercury_compile_llds_back_end.m"
              {
#line 229 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__ProcList_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 229 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5;
#line 229 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 228 "mercury_compile_llds_back_end.m"
              }
#line 230 "mercury_compile_llds_back_end.m"
            else
#line 231 "mercury_compile_llds_back_end.m"
              {
#line 231 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__Globals0_40;
#line 231 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__Verbose_41;
#line 231 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__IdProcList_47;
#line 231 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__Stats_52;
#line 244 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__PredModule_42;
#line 244 "mercury_compile_llds_back_end.m"
                MR_String top_level__mercury_compile_llds_back_end__PredName_43;
#line 244 "mercury_compile_llds_back_end.m"
                MR_Integer top_level__mercury_compile_llds_back_end__PredArity_44;

#line 232 "mercury_compile_llds_back_end.m"
                {
#line 232 "mercury_compile_llds_back_end.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__Globals0_40);
                }
#line 233 "mercury_compile_llds_back_end.m"
                {
#line 233 "mercury_compile_llds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, (MR_Integer) 44, &top_level__mercury_compile_llds_back_end__Verbose_41);
                }
#line 240 "mercury_compile_llds_back_end.m"
                if ((top_level__mercury_compile_llds_back_end__Verbose_41 == (MR_Integer) 0))
#line 241 "mercury_compile_llds_back_end.m"
                  {
#line 241 "mercury_compile_llds_back_end.m"
                  }
#line 240 "mercury_compile_llds_back_end.m"
                else
#line 235 "mercury_compile_llds_back_end.m"
                  {
#line 236 "mercury_compile_llds_back_end.m"
                    {
#line 236 "mercury_compile_llds_back_end.m"
                      mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
                    }
#line 237 "mercury_compile_llds_back_end.m"
                    {
#line 237 "mercury_compile_llds_back_end.m"
                      hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_28);
                    }
#line 238 "mercury_compile_llds_back_end.m"
                    {
#line 238 "mercury_compile_llds_back_end.m"
                      mercury__io__write_string_3_p_0((MR_String) "\n");
                    }
#line 239 "mercury_compile_llds_back_end.m"
                    {
#line 239 "mercury_compile_llds_back_end.m"
                      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_41);
                    }
#line 235 "mercury_compile_llds_back_end.m"
                  }
#line 244 "mercury_compile_llds_back_end.m"
                {
#line 244 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__PredModule_42 = hlds__hlds_pred__pred_info_module_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
                }
#line 245 "mercury_compile_llds_back_end.m"
                {
#line 245 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__PredName_43 = hlds__hlds_pred__pred_info_name_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
                }
#line 246 "mercury_compile_llds_back_end.m"
                {
#line 246 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__PredArity_44 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
                }
#line 247 "mercury_compile_llds_back_end.m"
                {
#line 247 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(top_level__mercury_compile_llds_back_end__PredModule_42, top_level__mercury_compile_llds_back_end__PredName_43, top_level__mercury_compile_llds_back_end__PredArity_44);
                }
#line 261 "mercury_compile_llds_back_end.m"
                if (top_level__mercury_compile_llds_back_end__succeeded)
#line 253 "mercury_compile_llds_back_end.m"
                  {
#line 253 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__TraceLevel_45;
#line 253 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__Globals1_46;
#line 253 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__Globals2_48;
#line 253 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__Globals_49;
#line 253 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69;
#line 253 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70;

#line 253 "mercury_compile_llds_back_end.m"
                    {
#line 253 "mercury_compile_llds_back_end.m"
                      libs__globals__get_trace_level_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, &top_level__mercury_compile_llds_back_end__TraceLevel_45);
                    }
#line 254 "mercury_compile_llds_back_end.m"
                    {
#line 254 "mercury_compile_llds_back_end.m"
                      libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, &top_level__mercury_compile_llds_back_end__Globals1_46);
                    }
#line 255 "mercury_compile_llds_back_end.m"
                    {
#line 255 "mercury_compile_llds_back_end.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals1_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69);
                    }
#line 256 "mercury_compile_llds_back_end.m"
                    {
#line 256 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__PredInfo_35, top_level__mercury_compile_llds_back_end__ProcIds_36, &top_level__mercury_compile_llds_back_end__IdProcList_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71);
                    }
#line 258 "mercury_compile_llds_back_end.m"
                    {
#line 258 "mercury_compile_llds_back_end.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_llds_back_end__Globals2_48);
                    }
#line 259 "mercury_compile_llds_back_end.m"
                    {
#line 259 "mercury_compile_llds_back_end.m"
                      libs__globals__set_trace_level_3_p_0(top_level__mercury_compile_llds_back_end__TraceLevel_45, top_level__mercury_compile_llds_back_end__Globals2_48, &top_level__mercury_compile_llds_back_end__Globals_49);
                    }
#line 260 "mercury_compile_llds_back_end.m"
                    {
#line 260 "mercury_compile_llds_back_end.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals_49, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73);
                    }
#line 253 "mercury_compile_llds_back_end.m"
                  }
#line 261 "mercury_compile_llds_back_end.m"
                else
#line 262 "mercury_compile_llds_back_end.m"
                  {
#line 262 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__PredInfo_35, top_level__mercury_compile_llds_back_end__ProcIds_36, &top_level__mercury_compile_llds_back_end__IdProcList_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71);
                  }
#line 268 "mercury_compile_llds_back_end.m"
                if ((top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 266 "mercury_compile_llds_back_end.m"
                  {
#line 267 "mercury_compile_llds_back_end.m"
                    {
#line 267 "mercury_compile_llds_back_end.m"
                      mercury__assoc_list__values_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__IdProcList_47, &top_level__mercury_compile_llds_back_end__ProcList_37);
                    }
#line 267 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5;
#line 266 "mercury_compile_llds_back_end.m"
                  }
#line 268 "mercury_compile_llds_back_end.m"
                else
#line 269 "mercury_compile_llds_back_end.m"
                  {
#line 269 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__DupProcMap0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5, (MR_Integer) 0)));
#line 269 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__DupProcMap_51;

#line 270 "mercury_compile_llds_back_end.m"
                    {
#line 270 "mercury_compile_llds_back_end.m"
                      ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(top_level__mercury_compile_llds_back_end__IdProcList_47, &top_level__mercury_compile_llds_back_end__ProcList_37, top_level__mercury_compile_llds_back_end__DupProcMap0_50, &top_level__mercury_compile_llds_back_end__DupProcMap_51);
                    }
#line 272 "mercury_compile_llds_back_end.m"
                    {
#line 272 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 272 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DupProcMap_51));
#line 272 "mercury_compile_llds_back_end.m"
                    }
#line 269 "mercury_compile_llds_back_end.m"
                  }
#line 274 "mercury_compile_llds_back_end.m"
                {
#line 274 "mercury_compile_llds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_41, (MR_String) "% done.\n");
                }
#line 275 "mercury_compile_llds_back_end.m"
                {
#line 275 "mercury_compile_llds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, (MR_Integer) 54, &top_level__mercury_compile_llds_back_end__Stats_52);
                }
#line 276 "mercury_compile_llds_back_end.m"
                {
#line 276 "mercury_compile_llds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_52);
                }
#line 231 "mercury_compile_llds_back_end.m"
              }
#line 278 "mercury_compile_llds_back_end.m"
            {
#line 278 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcList_37));
#line 278 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6));
#line 278 "mercury_compile_llds_back_end.m"
            }
#line 279 "mercury_compile_llds_back_end.m"
            /* direct tailcall eliminated */
#line 279 "mercury_compile_llds_back_end.m"
            {
#line 279 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73;
#line 279 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4 = top_level__mercury_compile_llds_back_end__PredIds_29;
#line 279 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77;
#line 279 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0__tmp_copy_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82;
#line 279 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71;

#line 279 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8;
#line 279 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0__tmp_copy_6;
#line 279 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5;
#line 279 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__HeadVar__4_4 = top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4;
#line 279 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1;
#line 279 "mercury_compile_llds_back_end.m"
            }
#line 279 "mercury_compile_llds_back_end.m"
            continue;
#line 223 "mercury_compile_llds_back_end.m"
          }
#line 220 "mercury_compile_llds_back_end.m"
      }
#line 220 "mercury_compile_llds_back_end.m"
      break;
#line 220 "mercury_compile_llds_back_end.m"
    }
#line 214 "mercury_compile_llds_back_end.m"
}

#line 188 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_24,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_25,
#line 188 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_10)
#line 188 "mercury_compile_llds_back_end.m"
{
#line 192 "mercury_compile_llds_back_end.m"
  {
#line 192 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredIds_12;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_13;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcDups_14;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OrderedPredIds_15;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_19;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__RevCodes_20;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Codes_21;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_28_28;
#line 192 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_32_32;

#line 193 "mercury_compile_llds_back_end.m"
    {
#line 193 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_valid_predids_3_p_0(&top_level__mercury_compile_llds_back_end__PredIds_12, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_28_28);
    }
#line 194 "mercury_compile_llds_back_end.m"
    {
#line 194 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_28_28, &top_level__mercury_compile_llds_back_end__Globals_13);
    }
#line 195 "mercury_compile_llds_back_end.m"
    {
#line 195 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_13, (MR_Integer) 469, &top_level__mercury_compile_llds_back_end__ProcDups_14);
    }
#line 200 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__ProcDups_14 == (MR_Integer) 0))
#line 197 "mercury_compile_llds_back_end.m"
      {
#line 198 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__OrderedPredIds_15 = top_level__mercury_compile_llds_back_end__PredIds_12;
#line 199 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 197 "mercury_compile_llds_back_end.m"
      }
#line 200 "mercury_compile_llds_back_end.m"
    else
#line 201 "mercury_compile_llds_back_end.m"
      {
#line 201 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37;
#line 201 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_38_38;
#line 201 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__DepInfo_17;
#line 201 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__PredSCCs_18;
#line 201 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_31_31;

#line 202 "mercury_compile_llds_back_end.m"
        {
#line 202 "mercury_compile_llds_back_end.m"
          transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_28_28, top_level__mercury_compile_llds_back_end__PredIds_12, (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__DepInfo_17);
        }
#line 3798 "top_level.mercury_compile_llds_back_end.c"
        top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 204 "mercury_compile_llds_back_end.m"
        {
#line 204 "mercury_compile_llds_back_end.m"
          hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37, top_level__mercury_compile_llds_back_end__DepInfo_17, &top_level__mercury_compile_llds_back_end__PredSCCs_18);
        }
#line 205 "mercury_compile_llds_back_end.m"
        {
#line 205 "mercury_compile_llds_back_end.m"
          mercury__list__condense_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37, top_level__mercury_compile_llds_back_end__PredSCCs_18, &top_level__mercury_compile_llds_back_end__OrderedPredIds_15);
        }
#line 3810 "top_level.mercury_compile_llds_back_end.c"
        top_level__mercury_compile_llds_back_end__TypeCtorInfo_38_38 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 206 "mercury_compile_llds_back_end.m"
        {
#line 206 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_31_31 = mercury__map__init_0_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_38_38, top_level__mercury_compile_llds_back_end__TypeCtorInfo_38_38);
        }
#line 206 "mercury_compile_llds_back_end.m"
        {
#line 206 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 206 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_31_31));
#line 206 "mercury_compile_llds_back_end.m"
        }
#line 201 "mercury_compile_llds_back_end.m"
      }
#line 208 "mercury_compile_llds_back_end.m"
    {
#line 208 "mercury_compile_llds_back_end.m"
      ll_backend__unify_gen__generate_const_structs_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_28_28, &top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_24, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_32_32);
    }
#line 209 "mercury_compile_llds_back_end.m"
    {
#line 209 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_28_28, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__OrderedPredIds_15, top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__RevCodes_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_32_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_25);
    }
#line 211 "mercury_compile_llds_back_end.m"
    {
#line 211 "mercury_compile_llds_back_end.m"
      mercury__list__reverse_2_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[0], top_level__mercury_compile_llds_back_end__RevCodes_20, &top_level__mercury_compile_llds_back_end__Codes_21);
    }
#line 212 "mercury_compile_llds_back_end.m"
    {
#line 212 "mercury_compile_llds_back_end.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__Codes_21, top_level__mercury_compile_llds_back_end__LLDS_10);
#line 212 "mercury_compile_llds_back_end.m"
      return;
    }
#line 192 "mercury_compile_llds_back_end.m"
  }
#line 188 "mercury_compile_llds_back_end.m"
}

#line 161 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0_1(
#line 161 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg)
#line 161 "mercury_compile_llds_back_end.m"
{
#line 161 "mercury_compile_llds_back_end.m"
  {
#line 161 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 161 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

#line 161 "mercury_compile_llds_back_end.m"
    {
#line 161 "mercury_compile_llds_back_end.m"
      return top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__161__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))));
    }
#line 161 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 161 "mercury_compile_llds_back_end.m"
  }
#line 161 "mercury_compile_llds_back_end.m"
}

#line 141 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0(
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_21,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_23,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_24,
#line 141 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_25)
#line 141 "mercury_compile_llds_back_end.m"
{
#line 145 "mercury_compile_llds_back_end.m"
  {
#line 145 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_16;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_17;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifySpecs_18;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_34_34;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_40_40;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_46_46;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_53_53;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_57_57;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_61_61;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_67_67;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_73_73;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_80_80;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_88_88;
#line 145 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89;

#line 146 "mercury_compile_llds_back_end.m"
    {
#line 146 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 147 "mercury_compile_llds_back_end.m"
    {
#line 147 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 44, &top_level__mercury_compile_llds_back_end__Verbose_16);
    }
#line 148 "mercury_compile_llds_back_end.m"
    {
#line 148 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 54, &top_level__mercury_compile_llds_back_end__Stats_17);
    }
#line 150 "mercury_compile_llds_back_end.m"
    {
#line 150 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30);
    }
#line 151 "mercury_compile_llds_back_end.m"
    {
#line 151 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30, (MR_Integer) 310, (MR_String) "saved_vars_const", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_24, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_34_34);
    }
#line 153 "mercury_compile_llds_back_end.m"
    {
#line 153 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36);
    }
#line 154 "mercury_compile_llds_back_end.m"
    {
#line 154 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36, (MR_Integer) 315, (MR_String) "saved_vars_cell", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_34_34, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_40_40);
    }
#line 156 "mercury_compile_llds_back_end.m"
    {
#line 156 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42);
    }
#line 157 "mercury_compile_llds_back_end.m"
    {
#line 157 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42, (MR_Integer) 320, (MR_String) "followcode", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_40_40, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_46_46);
    }
#line 159 "mercury_compile_llds_back_end.m"
    {
#line 159 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 5, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__SimplifySpecs_18);
    }
#line 161 "mercury_compile_llds_back_end.m"
    {
#line 161 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_57_57 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_llds_back_end__Globals_15, top_level__mercury_compile_llds_back_end__SimplifySpecs_18);
    }
#line 161 "mercury_compile_llds_back_end.m"
    {
#line 161 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 161 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[0]));
#line 161 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0_1));
#line 161 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 161 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_57_57));
#line 161 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 4) = ((MR_Box) ((MR_Integer) 0));
#line 161 "mercury_compile_llds_back_end.m"
    }
#line 161 "mercury_compile_llds_back_end.m"
    {
#line 161 "mercury_compile_llds_back_end.m"
      mercury__require__expect_4_p_0(top_level__mercury_compile_llds_back_end__V_53_53, (MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/9", (MR_String) "simplify has errors");
    }
#line 163 "mercury_compile_llds_back_end.m"
    {
#line 163 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 325, (MR_String) "ll_backend_simplify", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_46_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 165 "mercury_compile_llds_back_end.m"
    {
#line 165 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63);
    }
#line 166 "mercury_compile_llds_back_end.m"
    {
#line 166 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 330, (MR_String) "liveness", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_67_67);
    }
#line 168 "mercury_compile_llds_back_end.m"
    {
#line 168 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69);
    }
#line 169 "mercury_compile_llds_back_end.m"
    {
#line 169 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 332, (MR_String) "mark_debug_tailrec_calls", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_73_73);
    }
#line 171 "mercury_compile_llds_back_end.m"
    {
#line 171 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_5_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69);
    }
#line 173 "mercury_compile_llds_back_end.m"
    {
#line 173 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76);
    }
#line 174 "mercury_compile_llds_back_end.m"
    {
#line 174 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 335, (MR_String) "stackvars", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_80_80);
    }
#line 176 "mercury_compile_llds_back_end.m"
    {
#line 176 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20);
    }
#line 177 "mercury_compile_llds_back_end.m"
    {
#line 177 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, (MR_Integer) 340, (MR_String) "store_map", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_80_80, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_25);
    }
#line 179 "mercury_compile_llds_back_end.m"
    {
#line 179 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_21, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_88_88, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89);
    }
#line 182 "mercury_compile_llds_back_end.m"
    {
#line 182 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_88_88, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22);
    }
#line 186 "mercury_compile_llds_back_end.m"
    {
#line 186 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_23);
#line 186 "mercury_compile_llds_back_end.m"
      return;
    }
#line 145 "mercury_compile_llds_back_end.m"
  }
#line 141 "mercury_compile_llds_back_end.m"
}

#line 37 "mercury_compile_llds_back_end.m"
void MR_CALL 
top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(
#line 37 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 37 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 37 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 37 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 37 "mercury_compile_llds_back_end.m"
{
#line 417 "mercury_compile_llds_back_end.m"
  {
#line 417 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 418 "mercury_compile_llds_back_end.m"
    {
#line 418 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Mapping args to regs...");
    }
#line 419 "mercury_compile_llds_back_end.m"
    {
#line 419 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 420 "mercury_compile_llds_back_end.m"
    {
#line 420 "mercury_compile_llds_back_end.m"
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 421 "mercury_compile_llds_back_end.m"
    {
#line 421 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 422 "mercury_compile_llds_back_end.m"
    {
#line 422 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 422 "mercury_compile_llds_back_end.m"
      return;
    }
#line 417 "mercury_compile_llds_back_end.m"
  }
#line 37 "mercury_compile_llds_back_end.m"
}

#line 714 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3(
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 714 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 714 "mercury_compile_llds_back_end.m"
{
#line 714 "mercury_compile_llds_back_end.m"
  {
#line 714 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 714 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__conv3_O_File_11;
#line 714 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv2_Succeeded_12;

#line 714 "mercury_compile_llds_back_end.m"
    {
#line 714 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))), ((MR_String) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv3_O_File_11, &top_level__mercury_compile_llds_back_end__conv2_Succeeded_12);
    }
#line 714 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv3_O_File_11));
#line 714 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv2_Succeeded_12));
#line 714 "mercury_compile_llds_back_end.m"
  }
#line 714 "mercury_compile_llds_back_end.m"
}

#line 678 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2(
#line 678 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 678 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1)
#line 678 "mercury_compile_llds_back_end.m"
{
#line 678 "mercury_compile_llds_back_end.m"
  {
#line 678 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 678 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

#line 678 "mercury_compile_llds_back_end.m"
    {
#line 678 "mercury_compile_llds_back_end.m"
      return top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1));
    }
#line 678 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 678 "mercury_compile_llds_back_end.m"
  }
#line 678 "mercury_compile_llds_back_end.m"
}

#line 670 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1(
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 670 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 670 "mercury_compile_llds_back_end.m"
{
#line 670 "mercury_compile_llds_back_end.m"
  {
#line 670 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 670 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_Include_8;

#line 670 "mercury_compile_llds_back_end.m"
    {
#line 670 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv0_Include_8);
    }
#line 670 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_Include_8));
#line 670 "mercury_compile_llds_back_end.m"
  }
#line 670 "mercury_compile_llds_back_end.m"
}

#line 33 "mercury_compile_llds_back_end.m"
void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0(
#line 33 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 33 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData0_10,
#line 33 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Procs_11,
#line 33 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_12,
#line 33 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_13,
#line 33 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__FactTableObjFiles_14)
#line 33 "mercury_compile_llds_back_end.m"
{
#line 607 "mercury_compile_llds_back_end.m"
  {
#line 607 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_127_127;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_135_135;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_16;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_17;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_18;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__GlobalData_24;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__HLDSVarNums_26;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ShortLocns_27;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LongLocns_28;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserEventVarNums_29;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserEvents_30;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CallSites_36;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CoveragePoints_37;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcStatics_38;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcVarNames_40;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntries_42;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntryMap_43;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcEventLayouts_44;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraces_45;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TablingInfoStructs_49;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo_51;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__AllocSites_54;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__AllocIdMap_55;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSStringTable_56;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__RttiDatas_57;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ComplexityProcs_58;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleSymName_59;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCode0_60;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_Includes_61;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_BodyCode0_62;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportDefns_64;
#line 607 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__MangledModuleName_65;
#line 607 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__CModuleName_66;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_BodyCode_67;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__ProcsPerFunc_68;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ChunkedModules_69;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_IncludeHeaderCode_71;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_LocalHeaderCode_72;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportedHeaderCode_73;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Start_74;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__End_75;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCode_76;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserInitPredCNames_77;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserFinalPredCNames_78;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CFile_79;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_80;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_108_108;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_111_111;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_112_112;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_113_113;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_114_114;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_115_115;
#line 607 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_116_116;
#line 653 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___C_ExportDecls_63;
#line 670 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_109_109;

#line 608 "mercury_compile_llds_back_end.m"
    {
#line 608 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_16);
    }
#line 609 "mercury_compile_llds_back_end.m"
    {
#line 609 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 44, &top_level__mercury_compile_llds_back_end__Verbose_17);
    }
#line 610 "mercury_compile_llds_back_end.m"
    {
#line 610 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 54, &top_level__mercury_compile_llds_back_end__Stats_18);
    }
#line 612 "mercury_compile_llds_back_end.m"
    {
#line 612 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_17, (MR_String) "% Generating layout data...");
    }
#line 614 "mercury_compile_llds_back_end.m"
    {
#line 614 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_17);
    }
#line 618 "mercury_compile_llds_back_end.m"
    {
#line 618 "mercury_compile_llds_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19);
    }
#line 619 "mercury_compile_llds_back_end.m"
    {
#line 619 "mercury_compile_llds_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20);
    }
#line 620 "mercury_compile_llds_back_end.m"
    {
#line 620 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 277, &top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21);
    }
#line 621 "mercury_compile_llds_back_end.m"
    {
#line 621 "mercury_compile_llds_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21, &top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22);
    }
#line 4465 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_127_127 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 623 "mercury_compile_llds_back_end.m"
    {
#line 623 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_127_127, top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20, top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22);
    }
#line 625 "mercury_compile_llds_back_end.m"
    {
#line 625 "mercury_compile_llds_back_end.m"
      ll_backend__stack_layout__generate_llds_layout_data_26_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__GlobalData0_10, &top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25, &top_level__mercury_compile_llds_back_end__HLDSVarNums_26, &top_level__mercury_compile_llds_back_end__ShortLocns_27, &top_level__mercury_compile_llds_back_end__LongLocns_28, &top_level__mercury_compile_llds_back_end__UserEventVarNums_29, &top_level__mercury_compile_llds_back_end__UserEvents_30, &top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31, &top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32, &top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33, &top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34, &top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35, &top_level__mercury_compile_llds_back_end__CallSites_36, &top_level__mercury_compile_llds_back_end__CoveragePoints_37, &top_level__mercury_compile_llds_back_end__ProcStatics_38, &top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39, &top_level__mercury_compile_llds_back_end__ProcVarNames_40, &top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41, &top_level__mercury_compile_llds_back_end__TableIoEntries_42, &top_level__mercury_compile_llds_back_end__TableIoEntryMap_43, &top_level__mercury_compile_llds_back_end__ProcEventLayouts_44, &top_level__mercury_compile_llds_back_end__ExecTraces_45, &top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46, &top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47);
    }
#line 634 "mercury_compile_llds_back_end.m"
    {
#line 634 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_17, (MR_String) " done.\n");
    }
#line 635 "mercury_compile_llds_back_end.m"
    {
#line 635 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_18);
    }
#line 640 "mercury_compile_llds_back_end.m"
    {
#line 640 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48);
    }
#line 641 "mercury_compile_llds_back_end.m"
    {
#line 641 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__TablingInfoStructs_49);
    }
#line 642 "mercury_compile_llds_back_end.m"
    {
#line 642 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50);
    }
#line 643 "mercury_compile_llds_back_end.m"
    {
#line 643 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__StaticCellInfo_51);
    }
#line 644 "mercury_compile_llds_back_end.m"
    {
#line 644 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__get_static_cells_3_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo_51, &top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52, &top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53);
    }
#line 646 "mercury_compile_llds_back_end.m"
    {
#line 646 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__AllocSites_54, &top_level__mercury_compile_llds_back_end__AllocIdMap_55);
    }
#line 647 "mercury_compile_llds_back_end.m"
    {
#line 647 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__TSStringTable_56);
    }
#line 650 "mercury_compile_llds_back_end.m"
    {
#line 650 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__RttiDatas_57 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_127_127, top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19, top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23);
    }
#line 651 "mercury_compile_llds_back_end.m"
    {
#line 651 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__ComplexityProcs_58);
    }
#line 653 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__ModuleSymName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 0)));
#line 653 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_HeaderCode0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 1)));
#line 653 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_Includes_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 2)));
#line 653 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_BodyCode0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 3)));
#line 653 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end___C_ExportDecls_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 4)));
#line 653 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_ExportDefns_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 5)));
#line 655 "mercury_compile_llds_back_end.m"
    {
#line 655 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MangledModuleName_65 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(top_level__mercury_compile_llds_back_end__ModuleSymName_59);
    }
#line 656 "mercury_compile_llds_back_end.m"
    {
#line 656 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__CModuleName_66 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__MangledModuleName_65, (MR_String) "_module");
    }
#line 657 "mercury_compile_llds_back_end.m"
    {
#line 657 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__get_c_body_code_2_p_0(top_level__mercury_compile_llds_back_end__C_BodyCode0_62, &top_level__mercury_compile_llds_back_end__C_BodyCode_67);
    }
#line 661 "mercury_compile_llds_back_end.m"
    {
#line 661 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 477, &top_level__mercury_compile_llds_back_end__ProcsPerFunc_68);
    }
#line 662 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProcsPerFunc_68 == (MR_Integer) 0);
#line 666 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 665 "mercury_compile_llds_back_end.m"
      {
#line 665 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_106_106;

#line 665 "mercury_compile_llds_back_end.m"
        {
#line 665 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 665 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_106_106, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CModuleName_66));
#line 665 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_106_106, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Procs_11));
#line 665 "mercury_compile_llds_back_end.m"
        }
#line 665 "mercury_compile_llds_back_end.m"
        {
#line 665 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ChunkedModules_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_69, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_106_106));
#line 665 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "mercury_compile_llds_back_end.m"
        }
#line 665 "mercury_compile_llds_back_end.m"
      }
#line 666 "mercury_compile_llds_back_end.m"
    else
#line 667 "mercury_compile_llds_back_end.m"
      {
#line 667 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ChunkedProcs_70;

#line 667 "mercury_compile_llds_back_end.m"
        {
#line 667 "mercury_compile_llds_back_end.m"
          mercury__list__chunk_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__Procs_11, top_level__mercury_compile_llds_back_end__ProcsPerFunc_68, &top_level__mercury_compile_llds_back_end__ChunkedProcs_70);
        }
#line 668 "mercury_compile_llds_back_end.m"
        {
#line 668 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(top_level__mercury_compile_llds_back_end__ChunkedProcs_70, top_level__mercury_compile_llds_back_end__CModuleName_66, &top_level__mercury_compile_llds_back_end__ChunkedModules_69);
        }
#line 667 "mercury_compile_llds_back_end.m"
      }
#line 670 "mercury_compile_llds_back_end.m"
    {
#line 670 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 670 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[0]));
#line 670 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1));
#line 670 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 670 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_16));
#line 670 "mercury_compile_llds_back_end.m"
    }
#line 4628 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 4630 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_135_135 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 670 "mercury_compile_llds_back_end.m"
    {
#line 670 "mercury_compile_llds_back_end.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, top_level__mercury_compile_llds_back_end__TypeCtorInfo_135_135, top_level__mercury_compile_llds_back_end__V_108_108, top_level__mercury_compile_llds_back_end__C_Includes_61, &top_level__mercury_compile_llds_back_end__C_IncludeHeaderCode_71, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_109_109);
    }
#line 678 "mercury_compile_llds_back_end.m"
    {
#line 678 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_111_111 = mercury__list__reverse_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, top_level__mercury_compile_llds_back_end__C_HeaderCode0_60);
    }
#line 678 "mercury_compile_llds_back_end.m"
    {
#line 678 "mercury_compile_llds_back_end.m"
      mercury__list__filter_4_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_4[0], top_level__mercury_compile_llds_back_end__V_111_111, &top_level__mercury_compile_llds_back_end__C_LocalHeaderCode_72, &top_level__mercury_compile_llds_back_end__C_ExportedHeaderCode_73);
    }
#line 680 "mercury_compile_llds_back_end.m"
    {
#line 680 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(top_level__mercury_compile_llds_back_end__ModuleSymName_59, &top_level__mercury_compile_llds_back_end__Start_74, &top_level__mercury_compile_llds_back_end__End_75);
    }
#line 681 "mercury_compile_llds_back_end.m"
    {
#line 681 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_112_112 = mercury__list__reverse_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, top_level__mercury_compile_llds_back_end__C_IncludeHeaderCode_71);
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_115_115, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_74));
#line 682 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_115_115, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportedHeaderCode_73));
#line 682 "mercury_compile_llds_back_end.m"
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_116_116, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__End_75));
#line 682 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 682 "mercury_compile_llds_back_end.m"
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_114_114 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, top_level__mercury_compile_llds_back_end__V_115_115, top_level__mercury_compile_llds_back_end__V_116_116);
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_113_113 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, top_level__mercury_compile_llds_back_end__C_LocalHeaderCode_72, top_level__mercury_compile_llds_back_end__V_114_114);
    }
#line 681 "mercury_compile_llds_back_end.m"
    {
#line 681 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__C_HeaderCode_76 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_134_134, top_level__mercury_compile_llds_back_end__V_112_112, top_level__mercury_compile_llds_back_end__V_113_113);
    }
#line 684 "mercury_compile_llds_back_end.m"
    {
#line 684 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__UserInitPredCNames_77);
    }
#line 685 "mercury_compile_llds_back_end.m"
    {
#line 685 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__UserFinalPredCNames_78);
    }
#line 687 "mercury_compile_llds_back_end.m"
    {
#line 687 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__CFile_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 39 * sizeof(MR_Word)), NULL, NULL);
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleSymName_59));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_HeaderCode_76));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_BodyCode_67));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportDefns_64));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TablingInfoStructs_49));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 6) = ((MR_Box) (top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 7) = ((MR_Box) (top_level__mercury_compile_llds_back_end__RttiDatas_57));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 8) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 9) = ((MR_Box) (top_level__mercury_compile_llds_back_end__HLDSVarNums_26));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 10) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ShortLocns_27));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 11) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LongLocns_28));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 12) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEventVarNums_29));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 13) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEvents_30));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 14) = ((MR_Box) (top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 15) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 16) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 17) = ((MR_Box) (top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 18) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 19) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CallSites_36));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 20) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CoveragePoints_37));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 21) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcStatics_38));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 22) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 23) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcVarNames_40));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 24) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 25) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSStringTable_56));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 26) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntries_42));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 27) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntryMap_43));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 28) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcEventLayouts_44));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 29) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ExecTraces_45));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 30) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 31) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 32) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 33) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocSites_54));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 34) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocIdMap_55));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 35) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ChunkedModules_69));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 36) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserInitPredCNames_77));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 37) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserFinalPredCNames_78));
#line 687 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_79, 38) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ComplexityProcs_58));
#line 687 "mercury_compile_llds_back_end.m"
    }
#line 700 "mercury_compile_llds_back_end.m"
    {
#line 700 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(top_level__mercury_compile_llds_back_end__Globals_16, top_level__mercury_compile_llds_back_end__CFile_79, &top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_80);
    }
#line 724 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_80 == (MR_Integer) 0))
#line 725 "mercury_compile_llds_back_end.m"
      {
#line 726 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__Succeeded_13 = (MR_Integer) 0;
#line 727 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__FactTableObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 725 "mercury_compile_llds_back_end.m"
      }
#line 724 "mercury_compile_llds_back_end.m"
    else
#line 702 "mercury_compile_llds_back_end.m"
      {
#line 702 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__C_ExportDecls_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 4)));
#line 702 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TargetCodeOnly_87;
#line 704 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 0)));
#line 704 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 1)));
#line 704 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 2)));
#line 704 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 3)));
#line 704 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 5)));

#line 705 "mercury_compile_llds_back_end.m"
        {
#line 705 "mercury_compile_llds_back_end.m"
          backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__C_ExportDecls_85, top_level__mercury_compile_llds_back_end__ModuleName_12);
        }
#line 708 "mercury_compile_llds_back_end.m"
        {
#line 708 "mercury_compile_llds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 97, &top_level__mercury_compile_llds_back_end__TargetCodeOnly_87);
        }
#line 719 "mercury_compile_llds_back_end.m"
        if ((top_level__mercury_compile_llds_back_end__TargetCodeOnly_87 == (MR_Integer) 0))
#line 710 "mercury_compile_llds_back_end.m"
          {
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_142_142;
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__OutputStream_88;
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__CompileOK_89;
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__FactTableBaseFiles_90;
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__FactTableCompileOKs_91;
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__V_123_123;
#line 710 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__V_125_125;
#line 714 "mercury_compile_llds_back_end.m"
            MR_Box top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_124_124;

#line 711 "mercury_compile_llds_back_end.m"
            {
#line 711 "mercury_compile_llds_back_end.m"
              mercury__io__output_stream_3_p_0(&top_level__mercury_compile_llds_back_end__OutputStream_88);
            }
#line 712 "mercury_compile_llds_back_end.m"
            {
#line 712 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(top_level__mercury_compile_llds_back_end__Globals_16, top_level__mercury_compile_llds_back_end__OutputStream_88, top_level__mercury_compile_llds_back_end__ModuleName_12, &top_level__mercury_compile_llds_back_end__CompileOK_89);
            }
#line 713 "mercury_compile_llds_back_end.m"
            {
#line 713 "mercury_compile_llds_back_end.m"
              hlds__hlds_module__module_get_fact_table_files_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__FactTableBaseFiles_90);
            }
#line 714 "mercury_compile_llds_back_end.m"
            {
#line 714 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__V_123_123 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 714 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_123_123, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[0]));
#line 714 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_123_123, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3));
#line 714 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_123_123, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 714 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_123_123, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_16));
#line 714 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_123_123, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__OutputStream_88));
#line 714 "mercury_compile_llds_back_end.m"
            }
#line 4882 "top_level.mercury_compile_llds_back_end.c"
            top_level__mercury_compile_llds_back_end__TypeCtorInfo_142_142 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 714 "mercury_compile_llds_back_end.m"
            {
#line 714 "mercury_compile_llds_back_end.m"
              mercury__list__map2_foldl_6_p_2(top_level__mercury_compile_llds_back_end__TypeCtorInfo_142_142, top_level__mercury_compile_llds_back_end__TypeCtorInfo_142_142, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_135_135, top_level__mercury_compile_llds_back_end__V_123_123, top_level__mercury_compile_llds_back_end__FactTableBaseFiles_90, top_level__mercury_compile_llds_back_end__FactTableObjFiles_14, &top_level__mercury_compile_llds_back_end__FactTableCompileOKs_91, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_124_124);
            }
#line 717 "mercury_compile_llds_back_end.m"
            {
#line 717 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_125_125, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CompileOK_89));
#line 717 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_125_125, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__FactTableCompileOKs_91));
#line 717 "mercury_compile_llds_back_end.m"
            }
#line 717 "mercury_compile_llds_back_end.m"
            {
#line 717 "mercury_compile_llds_back_end.m"
              mercury__bool__and_list_2_p_0(top_level__mercury_compile_llds_back_end__V_125_125, top_level__mercury_compile_llds_back_end__Succeeded_13);
            }
#line 718 "mercury_compile_llds_back_end.m"
            {
#line 718 "mercury_compile_llds_back_end.m"
              parse_tree__module_cmds__maybe_set_exit_status_3_p_0(*top_level__mercury_compile_llds_back_end__Succeeded_13);
#line 718 "mercury_compile_llds_back_end.m"
              return;
            }
#line 710 "mercury_compile_llds_back_end.m"
          }
#line 719 "mercury_compile_llds_back_end.m"
        else
#line 720 "mercury_compile_llds_back_end.m"
          {
#line 721 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__Succeeded_13 = (MR_Integer) 1;
#line 722 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__FactTableObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 720 "mercury_compile_llds_back_end.m"
          }
#line 702 "mercury_compile_llds_back_end.m"
      }
#line 607 "mercury_compile_llds_back_end.m"
  }
#line 33 "mercury_compile_llds_back_end.m"
}

#line 29 "mercury_compile_llds_back_end.m"
void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_26,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_27,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_11,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_28,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_29)
#line 29 "mercury_compile_llds_back_end.m"
{
#line 102 "mercury_compile_llds_back_end.m"
  {
#line 102 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_14;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OptUnboxFloat_16;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__DoCommonData_17;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UnboxFloats_18;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo0_19;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__TSStringTableSize_20;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSRevStringTable_21;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_22;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_23;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TradPasses_24;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_34_34;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44;

#line 103 "mercury_compile_llds_back_end.m"
    {
#line 103 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__ModuleName_14);
    }
#line 104 "mercury_compile_llds_back_end.m"
    {
#line 104 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 105 "mercury_compile_llds_back_end.m"
    {
#line 105 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 237, &top_level__mercury_compile_llds_back_end__OptUnboxFloat_16);
    }
#line 106 "mercury_compile_llds_back_end.m"
    {
#line 106 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 455, &top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
#line 110 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__OptUnboxFloat_16 == (MR_Integer) 0))
#line 112 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 1;
#line 110 "mercury_compile_llds_back_end.m"
    else
#line 109 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 0;
#line 114 "mercury_compile_llds_back_end.m"
    {
#line 114 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__StaticCellInfo0_19 = ll_backend__global_data__init_static_cell_info_3_f_0(top_level__mercury_compile_llds_back_end__ModuleName_14, top_level__mercury_compile_llds_back_end__UnboxFloats_18, top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
#line 116 "mercury_compile_llds_back_end.m"
    {
#line 116 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__TSStringTableSize_20, &top_level__mercury_compile_llds_back_end__TSRevStringTable_21);
    }
#line 118 "mercury_compile_llds_back_end.m"
    {
#line 118 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_init_4_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo0_19, top_level__mercury_compile_llds_back_end__TSStringTableSize_20, top_level__mercury_compile_llds_back_end__TSRevStringTable_21, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_34_34);
    }
#line 121 "mercury_compile_llds_back_end.m"
    {
#line 121 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 44, &top_level__mercury_compile_llds_back_end__Verbose_22);
    }
#line 122 "mercury_compile_llds_back_end.m"
    {
#line 122 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 54, &top_level__mercury_compile_llds_back_end__Stats_23);
    }
#line 418 "mercury_compile_llds_back_end.m"
    {
#line 418 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) "% Mapping args to regs...");
    }
#line 419 "mercury_compile_llds_back_end.m"
    {
#line 419 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_22);
    }
#line 420 "mercury_compile_llds_back_end.m"
    {
#line 420 "mercury_compile_llds_back_end.m"
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37);
    }
#line 421 "mercury_compile_llds_back_end.m"
    {
#line 421 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) " done.\n");
    }
#line 422 "mercury_compile_llds_back_end.m"
    {
#line 422 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_23);
    }
#line 127 "mercury_compile_llds_back_end.m"
    {
#line 127 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, (MR_Integer) 305, (MR_String) "args_to_regs", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_28, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41);
    }
#line 129 "mercury_compile_llds_back_end.m"
    {
#line 129 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 298, &top_level__mercury_compile_llds_back_end__TradPasses_24);
    }
#line 130 "mercury_compile_llds_back_end.m"
    {
#line 130 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_34_34, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44);
    }
#line 134 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__TradPasses_24 == (MR_Integer) 0))
#line 133 "mercury_compile_llds_back_end.m"
      {
#line 133 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_26, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_27, top_level__mercury_compile_llds_back_end__LLDS_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_29);
#line 133 "mercury_compile_llds_back_end.m"
        return;
      }
#line 134 "mercury_compile_llds_back_end.m"
    else
#line 135 "mercury_compile_llds_back_end.m"
      {
#line 136 "mercury_compile_llds_back_end.m"
        {
#line 136 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_26, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_27, top_level__mercury_compile_llds_back_end__LLDS_11);
        }
#line 136 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_29 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41;
#line 135 "mercury_compile_llds_back_end.m"
      }
#line 102 "mercury_compile_llds_back_end.m"
  }
#line 29 "mercury_compile_llds_back_end.m"
}

void mercury__top_level__mercury_compile_llds_back_end__init(void)
{
}

void mercury__top_level__mercury_compile_llds_back_end__init_type_tables(void)
{
}

void mercury__top_level__mercury_compile_llds_back_end__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile_llds_back_end. */
