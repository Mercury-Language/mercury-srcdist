/*
** Automatically generated from `mercury_compile_llds_back_end.m'
** by the Mercury compiler,
** version rotd-2018-09-16
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


// :- module top_level.mercury_compile_llds_back_end.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_llds_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_llds_back_end.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "check_hlds.type_util.mih"
#include "hlds.arg_info.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mark_tail_calls.mih"
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
#include "ll_backend.unify_gen_construct.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_file.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6];

static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0;

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1];

static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1];

static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1];

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__182__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word HeadVar__2_62);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_String BaseName_10,
  MR_String * O_File_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
  MR_Word Globals_6,
  MR_Word ForeignImportModule_7,
  MR_Word * Include_8);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
  MR_Word Decl_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
  MR_Word Globals_7,
  MR_Word ErrorStream_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
  MR_Word Globals_6,
  MR_Word LLDS0_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
  MR_Word ChunkList_4,
  MR_String ModName_5,
  MR_Word * Modules_6);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
  MR_Word ModuleName_4,
  MR_Word * StartGuard_5,
  MR_Word * EndGuard_6);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
  MR_Word HLDS_4,
  MR_Word UseForeignLanguage_5,
  MR_Word * ForeignInterfaceInfo_6);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * LLDS_9,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_12_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_1,
  MR_Word * STATE_VARIABLE_HLDS_2,
  MR_Word ConstStructMap_3,
  MR_Word SCCMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_MaybeDupProcMap_0_6,
  MR_Word STATE_VARIABLE_CProcsCord_0_7,
  MR_Word * STATE_VARIABLE_CProcsCord_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_13_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_42,
  MR_Word * STATE_VARIABLE_HLDS_43,
  MR_Word ConstStructMap_15,
  MR_Word SCCMap_16,
  MR_Word PredId_17,
  MR_Word STATE_VARIABLE_MaybeDupProcMap_0_44,
  MR_Word * STATE_VARIABLE_MaybeDupProcMap_45,
  MR_Word STATE_VARIABLE_CProcsCord_0_46,
  MR_Word * STATE_VARIABLE_CProcsCord_47,
  MR_Word STATE_VARIABLE_GlobalData_0_48,
  MR_Word * STATE_VARIABLE_GlobalData_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_12_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_1,
  MR_Word * STATE_VARIABLE_HLDS_2,
  MR_Word ConstStructMap_3,
  MR_Word SCCMap_4,
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_13_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_42,
  MR_Word * STATE_VARIABLE_HLDS_43,
  MR_Word ConstStructMap_15,
  MR_Word SCCMap_16,
  MR_Word PredId_17,
  MR_Word PredInfo_18,
  MR_Integer ProcId_19,
  MR_Word STATE_VARIABLE_ProcInfo_0_44,
  MR_Word * CProc_21,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * STATE_VARIABLE_LLDS_24,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * STATE_VARIABLE_DumpInfo_30);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
  MR_Word HLDS_9,
  MR_Word LLDS_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
  MR_Word HLDS_9,
  MR_Word GlobalData_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_LLDS_0_17,
  MR_Word * STATE_VARIABLE_LLDS_18);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
  MR_Word HLDS_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16,
  MR_Word * LLDS_13);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[7][3];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[7][2];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][8];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[1][7];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[4][1];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][11];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[2][4];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[1][5];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][10];




static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[1]))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[2]))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[3]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][8] = {
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
  /* row 1 */
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[5]))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n#endif"))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[2][4] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][10] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0),
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)
  }
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_dup_proc_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001)),
  (MR_String) "top_level.mercury_compile_llds_back_end",
  (MR_String) "dup_proc_label_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0)
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0)
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0)
  }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0)
};

static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0 = {
  (MR_String) "foreign_interface_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_foreign_interface_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001)),
  (MR_String) "top_level.mercury_compile_llds_back_end",
  (MR_String) "foreign_interface_info",
  {     top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0 },
  {     top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0
};

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__182__1_2_p_0(
  MR_Word HeadVar__1_61,
  MR_Word HeadVar__2_62)
{
  {
    MR_bool succeeded = (HeadVar__1_61 == HeadVar__2_62);

    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word ArgX5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgY5_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 4))));
      MR_Word ArgX6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));
      MR_Word ArgY6_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 5))));
      MR_Word Var_16;

      mdbcomp__sym_name____Compare____sym_name_0_0(&Var_16, ArgX1_4, ArgY1_5);
      succeeded = (Var_16 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_16;
      else
      {
        MR_Word Var_17;

        mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[0]), &Var_17, ((MR_Box) (ArgX2_6)), ((MR_Box) (ArgY2_7)));
        succeeded = (Var_17 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_17;
        else
        {
          MR_Word Var_18;

          mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[1]), &Var_18, ((MR_Box) (ArgX3_8)), ((MR_Box) (ArgY3_9)));
          succeeded = (Var_18 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_18;
          else
          {
            MR_Word Var_19;

            mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[2]), &Var_19, ((MR_Box) (ArgX4_10)), ((MR_Box) (ArgY4_11)));
            succeeded = (Var_19 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_19;
            else
            {
              MR_Word Var_20;

              parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&Var_20, ArgX5_12, ArgY5_13);
              succeeded = (Var_20 == (MR_Integer) 0);
              succeeded = !(succeeded);
              if (succeeded)
                *HeadVar__1_1 = Var_20;
              else
              {
                mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX6_14)), ((MR_Box) (ArgY6_15)));
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word TypeInfo_18_18;
      MR_Word TypeInfo_19_19;
      MR_Word TypeInfo_20_20;
      MR_Word TypeInfo_22_22;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 4))));
      MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 4))));
      MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 5))));
      MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 5))));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        TypeInfo_18_18 = (MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
        if (succeeded)
        {
          TypeInfo_19_19 = (MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[1]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_19_19, ((MR_Box) (ArgX3_7)), ((MR_Box) (ArgY3_8)));
          if (succeeded)
          {
            TypeInfo_20_20 = (MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[2]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
            if (succeeded)
            {
              succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(ArgX5_11, ArgY5_12);
              if (succeeded)
              {
                TypeInfo_22_22 = (MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[3]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_22_22, ((MR_Box) (ArgX6_13)), ((MR_Box) (ArgY6_14)));
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
  MR_Word Globals_8,
  MR_Word ErrorStream_9,
  MR_String BaseName_10,
  MR_String * O_File_11,
  MR_Word * Succeeded_12)
{
  {
    MR_Word LinkedTargetType_14;
    MR_Word PIC_15;
    MR_String Obj_16;
    MR_String C_File_17;

    backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_8, &LinkedTargetType_14);
    backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_8, LinkedTargetType_14, &PIC_15);
    backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_8, PIC_15, &Obj_16);
    C_File_17 = mercury__string__f_43_43_2_f_0(BaseName_10, (MR_String) ".c");
    *O_File_11 = mercury__string__f_43_43_2_f_0(BaseName_10, Obj_16);
    backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_8, ErrorStream_9, PIC_15, C_File_17, *O_File_11, Succeeded_12);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
  MR_Word Globals_6,
  MR_Word ForeignImportModule_7,
  MR_Word * Include_8)
{
  {
    MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignImportModule_7, (MR_Integer) 0))) & (MR_Integer) 3);
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignImportModule_7, (MR_Integer) 1))));
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ForeignImportModule_7, (MR_Integer) 0)));

    switch (Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String HeaderFileName_12;
          MR_String IncludeString_13;
          MR_String Var_31;
          MR_Word Var_35;
          MR_Word Var_36;

          parse_tree__file_names__module_name_to_search_file_name_6_p_0(Globals_6, (MR_String) ".mh", ModuleName_11, &HeaderFileName_12);
          Var_31 = mercury__string__f_43_43_2_f_0(HeaderFileName_12, (MR_String) "\"\n");
          IncludeString_13 = mercury__string__f_43_43_2_f_0((MR_String) "#include \"", Var_31);
          {
            Var_35 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_35, 0) = ((MR_Box) (IncludeString_13));
          }
          Var_36 = mercury__term__context_init_0_f_0();
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
            *Include_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_36));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for C#");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_2_p_0((MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Java");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
  MR_Word Decl_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Decl_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), Decl_2, (MR_Integer) 0)));

    succeeded = (Var_6 == (MR_Integer) 0);
    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Mapping args to regs...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    hlds__arg_info__generate_arg_info_2_p_0(STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv3_O_File_11;
    MR_Word conv2_Succeeded_12;

    top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_String) (wrapper_arg_1)), &conv3_O_File_11, &conv2_Succeeded_12);
    *wrapper_arg_2 = ((MR_Box) (conv3_O_File_11));
    *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_12));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Include_8;

    top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Include_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_Include_8));
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(
  MR_Word OpModeCodeGen_10,
  MR_Word HLDS_11,
  MR_Word GlobalData0_12,
  MR_Word Procs_13,
  MR_Word ModuleName_14,
  MR_Word * Succeeded_15,
  MR_Word * FactTableObjFiles_16)
{
  {
    MR_bool succeeded;
    MR_Word Globals_18;
    MR_Word Verbose_19;
    MR_Word Stats_20;
    MR_Word TypeCtorRttiData_21;
    MR_Word OldTypeClassInfoRttiData_22;
    MR_Word NewTypeClassRtti_23;
    MR_Word NewTypeClassInfoRttiData_24;
    MR_Word TypeClassInfoRttiData_25;
    MR_Word GlobalData_26;
    MR_Word PseudoTypeInfos_27;
    MR_Word HLDSVarNums_28;
    MR_Word ShortLocns_29;
    MR_Word LongLocns_30;
    MR_Word UserEventVarNums_31;
    MR_Word UserEvents_32;
    MR_Word NoVarLabelLayouts_33;
    MR_Word SVarLabelLayouts_34;
    MR_Word LVarLabelLayouts_35;
    MR_Word InternalLabelToLayoutMap_36;
    MR_Word ProcLabelToLayoutMap_37;
    MR_Word CallSites_38;
    MR_Word CoveragePoints_39;
    MR_Word ProcStatics_40;
    MR_Word ProcHeadVarNums_41;
    MR_Word ProcVarNames_42;
    MR_Word ProcBodyBytecodes_43;
    MR_Word TableIoEntries_44;
    MR_Word TableIoEntryMap_45;
    MR_Word ProcEventLayouts_46;
    MR_Word ExecTraces_47;
    MR_Word ProcLayoutDatas_48;
    MR_Word ModuleLayoutDatas_49;
    MR_Word C_InterfaceInfo_50;
    MR_Word TablingInfoStructs_51;
    MR_Word ClosureLayoutDatas_52;
    MR_Word StaticCellInfo_53;
    MR_Word ScalarCommonCellDatas_54;
    MR_Word VectorCommonCellDatas_55;
    MR_Word AllocSites_56;
    MR_Word AllocIdMap_57;
    MR_Word TSStringTable_58;
    MR_Word RttiDatas_59;
    MR_Word ComplexityProcs_60;
    MR_Word ModuleSymName_61;
    MR_Word C_HeaderCodes0_62;
    MR_Word C_BodyCodes_63;
    MR_Word C_Includes_64;
    MR_Word C_ExportDefns_66;
    MR_String MangledModuleName_67;
    MR_String CModuleName_68;
    MR_Integer ProcsPerFunc_69;
    MR_Word ChunkedModules_70;
    MR_Word C_IncludeHeaderCodes_72;
    MR_Word C_LocalHeaderCodes_73;
    MR_Word C_ExportedHeaderCodes_74;
    MR_Word Start_75;
    MR_Word End_76;
    MR_Word C_HeaderCodes_77;
    MR_Word UserInitPredCNames_78;
    MR_Word UserFinalPredCNames_79;
    MR_Word CFile_80;
    MR_Word TargetCodeSucceeded_81;
    MR_Word Var_108;
    MR_Word Var_111;
    MR_Word Var_112;
    MR_Word Var_113;
    MR_Word Var_114;
    MR_Box conv1_STATE_VARIABLE_IO_109_109;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_11, &Globals_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 59, &Verbose_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 69, &Stats_20);
    libs__file_util__maybe_write_string_4_p_0(Verbose_19, (MR_String) "% Generating layout data...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_19);
    backend_libs__type_ctor_info__generate_rtti_2_p_0(HLDS_11, &TypeCtorRttiData_21);
    backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(HLDS_11, &OldTypeClassInfoRttiData_22);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 297, &NewTypeClassRtti_23);
    backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(HLDS_11, NewTypeClassRtti_23, &NewTypeClassInfoRttiData_24);
    TypeClassInfoRttiData_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), OldTypeClassInfoRttiData_22, NewTypeClassInfoRttiData_24);
    ll_backend__stack_layout__generate_llds_layout_data_26_p_0(HLDS_11, GlobalData0_12, &GlobalData_26, &PseudoTypeInfos_27, &HLDSVarNums_28, &ShortLocns_29, &LongLocns_30, &UserEventVarNums_31, &UserEvents_32, &NoVarLabelLayouts_33, &SVarLabelLayouts_34, &LVarLabelLayouts_35, &InternalLabelToLayoutMap_36, &ProcLabelToLayoutMap_37, &CallSites_38, &CoveragePoints_39, &ProcStatics_40, &ProcHeadVarNums_41, &ProcVarNames_42, &ProcBodyBytecodes_43, &TableIoEntries_44, &TableIoEntryMap_45, &ProcEventLayouts_46, &ExecTraces_47, &ProcLayoutDatas_48, &ModuleLayoutDatas_49);
    libs__file_util__maybe_write_string_4_p_0(Verbose_19, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_20);
    top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(HLDS_11, (MR_Integer) 0, &C_InterfaceInfo_50);
    ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(GlobalData_26, &TablingInfoStructs_51);
    ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(GlobalData_26, &ClosureLayoutDatas_52);
    ll_backend__global_data__global_data_get_static_cell_info_2_p_0(GlobalData_26, &StaticCellInfo_53);
    ll_backend__global_data__get_static_cells_3_p_0(StaticCellInfo_53, &ScalarCommonCellDatas_54, &VectorCommonCellDatas_55);
    ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(GlobalData_26, &AllocSites_56, &AllocIdMap_57);
    ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(GlobalData_26, &TSStringTable_58);
    RttiDatas_59 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeCtorRttiData_21, TypeClassInfoRttiData_25);
    hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(HLDS_11, &ComplexityProcs_60);
    ModuleSymName_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_InterfaceInfo_50, (MR_Integer) 0))));
    C_HeaderCodes0_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_InterfaceInfo_50, (MR_Integer) 1))));
    C_BodyCodes_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_InterfaceInfo_50, (MR_Integer) 2))));
    C_Includes_64 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_InterfaceInfo_50, (MR_Integer) 3))));
    C_ExportDefns_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_InterfaceInfo_50, (MR_Integer) 5))));
    MangledModuleName_67 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_61);
    CModuleName_68 = mercury__string__f_43_43_2_f_0(MangledModuleName_67, (MR_String) "_module");
    libs__globals__lookup_int_option_3_p_0(Globals_18, (MR_Integer) 502, &ProcsPerFunc_69);
    succeeded = (ProcsPerFunc_69 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word Var_106;

      {
        Var_106 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_106, 0) = ((MR_Box) (CModuleName_68));
        MR_hl_field(MR_mktag(0), Var_106, 1) = ((MR_Box) (Procs_13));
      }
      {
        ChunkedModules_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ChunkedModules_70, 0) = ((MR_Box) (Var_106));
        MR_hl_field(MR_mktag(1), ChunkedModules_70, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word ChunkedProcs_71;

      mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), Procs_13, ProcsPerFunc_69, &ChunkedProcs_71);
      top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(ChunkedProcs_71, CModuleName_68, &ChunkedModules_70);
    }
    {
      Var_108 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_108, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), Var_108, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_108, 3) = ((MR_Box) (Globals_18));
    }
    mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_108, C_Includes_64, &C_IncludeHeaderCodes_72, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_109_109);
    mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_1[6]), C_HeaderCodes0_62, &C_LocalHeaderCodes_73, &C_ExportedHeaderCodes_74);
    top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(ModuleSymName_61, &Start_75, &End_76);
    {
      Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (Start_75));
      MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (C_ExportedHeaderCodes_74));
    }
    {
      Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (End_76));
      MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_112 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), Var_113, Var_114);
    Var_111 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), C_LocalHeaderCodes_73, Var_112);
    C_HeaderCodes_77 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), C_IncludeHeaderCodes_72, Var_111);
    hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(HLDS_11, &UserInitPredCNames_78);
    hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(HLDS_11, &UserFinalPredCNames_79);
    {
      CFile_80 = (MR_Word) MR_new_object(MR_Word, (39 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CFile_80, 0) = ((MR_Box) (ModuleSymName_61));
      MR_hl_field(MR_mktag(0), CFile_80, 1) = ((MR_Box) (C_HeaderCodes_77));
      MR_hl_field(MR_mktag(0), CFile_80, 2) = ((MR_Box) (C_BodyCodes_63));
      MR_hl_field(MR_mktag(0), CFile_80, 3) = ((MR_Box) (C_ExportDefns_66));
      MR_hl_field(MR_mktag(0), CFile_80, 4) = ((MR_Box) (TablingInfoStructs_51));
      MR_hl_field(MR_mktag(0), CFile_80, 5) = ((MR_Box) (ScalarCommonCellDatas_54));
      MR_hl_field(MR_mktag(0), CFile_80, 6) = ((MR_Box) (VectorCommonCellDatas_55));
      MR_hl_field(MR_mktag(0), CFile_80, 7) = ((MR_Box) (RttiDatas_59));
      MR_hl_field(MR_mktag(0), CFile_80, 8) = ((MR_Box) (PseudoTypeInfos_27));
      MR_hl_field(MR_mktag(0), CFile_80, 9) = ((MR_Box) (HLDSVarNums_28));
      MR_hl_field(MR_mktag(0), CFile_80, 10) = ((MR_Box) (ShortLocns_29));
      MR_hl_field(MR_mktag(0), CFile_80, 11) = ((MR_Box) (LongLocns_30));
      MR_hl_field(MR_mktag(0), CFile_80, 12) = ((MR_Box) (UserEventVarNums_31));
      MR_hl_field(MR_mktag(0), CFile_80, 13) = ((MR_Box) (UserEvents_32));
      MR_hl_field(MR_mktag(0), CFile_80, 14) = ((MR_Box) (NoVarLabelLayouts_33));
      MR_hl_field(MR_mktag(0), CFile_80, 15) = ((MR_Box) (SVarLabelLayouts_34));
      MR_hl_field(MR_mktag(0), CFile_80, 16) = ((MR_Box) (LVarLabelLayouts_35));
      MR_hl_field(MR_mktag(0), CFile_80, 17) = ((MR_Box) (InternalLabelToLayoutMap_36));
      MR_hl_field(MR_mktag(0), CFile_80, 18) = ((MR_Box) (ProcLabelToLayoutMap_37));
      MR_hl_field(MR_mktag(0), CFile_80, 19) = ((MR_Box) (CallSites_38));
      MR_hl_field(MR_mktag(0), CFile_80, 20) = ((MR_Box) (CoveragePoints_39));
      MR_hl_field(MR_mktag(0), CFile_80, 21) = ((MR_Box) (ProcStatics_40));
      MR_hl_field(MR_mktag(0), CFile_80, 22) = ((MR_Box) (ProcHeadVarNums_41));
      MR_hl_field(MR_mktag(0), CFile_80, 23) = ((MR_Box) (ProcVarNames_42));
      MR_hl_field(MR_mktag(0), CFile_80, 24) = ((MR_Box) (ProcBodyBytecodes_43));
      MR_hl_field(MR_mktag(0), CFile_80, 25) = ((MR_Box) (TSStringTable_58));
      MR_hl_field(MR_mktag(0), CFile_80, 26) = ((MR_Box) (TableIoEntries_44));
      MR_hl_field(MR_mktag(0), CFile_80, 27) = ((MR_Box) (TableIoEntryMap_45));
      MR_hl_field(MR_mktag(0), CFile_80, 28) = ((MR_Box) (ProcEventLayouts_46));
      MR_hl_field(MR_mktag(0), CFile_80, 29) = ((MR_Box) (ExecTraces_47));
      MR_hl_field(MR_mktag(0), CFile_80, 30) = ((MR_Box) (ProcLayoutDatas_48));
      MR_hl_field(MR_mktag(0), CFile_80, 31) = ((MR_Box) (ModuleLayoutDatas_49));
      MR_hl_field(MR_mktag(0), CFile_80, 32) = ((MR_Box) (ClosureLayoutDatas_52));
      MR_hl_field(MR_mktag(0), CFile_80, 33) = ((MR_Box) (AllocSites_56));
      MR_hl_field(MR_mktag(0), CFile_80, 34) = ((MR_Box) (AllocIdMap_57));
      MR_hl_field(MR_mktag(0), CFile_80, 35) = ((MR_Box) (ChunkedModules_70));
      MR_hl_field(MR_mktag(0), CFile_80, 36) = ((MR_Box) (UserInitPredCNames_78));
      MR_hl_field(MR_mktag(0), CFile_80, 37) = ((MR_Box) (UserFinalPredCNames_79));
      MR_hl_field(MR_mktag(0), CFile_80, 38) = ((MR_Box) (ComplexityProcs_60));
    }
    top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(Globals_18, CFile_80, &TargetCodeSucceeded_81);
    switch (TargetCodeSucceeded_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Succeeded_15 = (MR_Integer) 0;
          *FactTableObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word C_ExportDecls_86 = ((MR_Word) ((MR_hl_field(MR_mktag(0), C_InterfaceInfo_50, (MR_Integer) 4))));

          backend_libs__export__produce_header_file_5_p_0(HLDS_11, C_ExportDecls_86, ModuleName_14);
          switch (OpModeCodeGen_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word OutputStream_88;
                MR_Word CompileOK_89;
                MR_Word FactTableBaseFiles_90;
                MR_Word FactTableCompileOKs_91;
                MR_Word Var_120;
                MR_Word Var_122;
                MR_Box conv4_STATE_VARIABLE_IO_121_121;

                mercury__io__output_stream_3_p_0(&OutputStream_88);
                top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(Globals_18, OutputStream_88, ModuleName_14, &CompileOK_89);
                hlds__hlds_module__module_get_fact_table_file_names_2_p_0(HLDS_11, &FactTableBaseFiles_90);
                {
                  Var_120 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_120, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_9[0]));
                  MR_hl_field(MR_mktag(0), Var_120, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_3));
                  MR_hl_field(MR_mktag(0), Var_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_120, 3) = ((MR_Box) (Globals_18));
                  MR_hl_field(MR_mktag(0), Var_120, 4) = ((MR_Box) (OutputStream_88));
                }
                mercury__list__map2_foldl_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__bool__bool__type_ctor_info_bool_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_120, FactTableBaseFiles_90, FactTableObjFiles_16, &FactTableCompileOKs_91, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_121_121);
                {
                  Var_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_122, 0) = ((MR_Box) (CompileOK_89));
                  MR_hl_field(MR_mktag(1), Var_122, 1) = ((MR_Box) (FactTableCompileOKs_91));
                }
                mercury__bool__and_list_2_p_0(Var_122, Succeeded_15);
                parse_tree__module_cmds__maybe_set_exit_status_3_p_0(*Succeeded_15);
              }
              break;
            case (MR_Integer) 0:
              {
                *Succeeded_15 = (MR_Integer) 1;
                *FactTableObjFiles_16 = (MR_Word) ((MR_Unsigned) 0U);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
  MR_Word Globals_7,
  MR_Word ErrorStream_8,
  MR_Word ModuleName_9,
  MR_Word * Succeeded_10)
{
  {
    MR_Word LinkedTargetType_12;
    MR_Word PIC_13;
    MR_String Obj_14;
    MR_String C_File_15;
    MR_String O_File_16;

    backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_7, &LinkedTargetType_12);
    backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_7, LinkedTargetType_12, &PIC_13);
    backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(Globals_7, PIC_13, &Obj_14);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 1, (MR_String) ".c", ModuleName_9, &C_File_15);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, Obj_14, ModuleName_9, &O_File_16);
    backend_libs__compile_target_code__do_compile_c_file_8_p_0(Globals_7, ErrorStream_8, PIC_13, C_File_15, O_File_16, Succeeded_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
  MR_Word Globals_6,
  MR_Word LLDS0_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word LLDS_10;

    ll_backend__transform_llds__transform_llds_3_p_0(Globals_6, LLDS0_7, &LLDS_10);
    ll_backend__llds_out__llds_out_file__output_llds_5_p_0(Globals_6, LLDS_10, Succeeded_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
  MR_Word ChunkList_4,
  MR_String ModName_5,
  MR_Word * Modules_6)
{
  {
    top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(ChunkList_4, ModName_5, (MR_Integer) 0, Modules_6);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Chunk_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Chunks_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Module_11;
    MR_Word Modules_12;
    MR_String NumString_13;
    MR_String ThisModuleName_14;
    MR_Integer Num1_15;

    mercury__string__int_to_string_2_p_0(HeadVar__3_3, &NumString_13);
    ThisModuleName_14 = mercury__string__f_43_43_2_f_0(HeadVar__2_2, NumString_13);
    {
      Module_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Module_11, 0) = ((MR_Box) (ThisModuleName_14));
      MR_hl_field(MR_mktag(0), Module_11, 1) = ((MR_Box) (Chunk_7));
    }
    Num1_15 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) (MR_Integer) 1);
    top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(Chunks_8, HeadVar__2_2, Num1_15, &Modules_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_11));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Modules_12));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
  MR_Word ModuleName_4,
  MR_Word * StartGuard_5,
  MR_Word * EndGuard_6)
{
  {
    MR_String Define_7;
    MR_String Start_8;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_23;

    Define_7 = backend_libs__foreign__decl_guard_1_f_0(ModuleName_4);
    Var_14 = mercury__string__f_43_43_2_f_0(Define_7, (MR_String) "\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) "\n#define ", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(Define_7, Var_12);
    Start_8 = mercury__string__f_43_43_2_f_0((MR_String) "#ifndef ", Var_11);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (Start_8));
    }
    Var_19 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *StartGuard_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_19));
    }
    Var_23 = mercury__term__context_init_0_f_0();
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *EndGuard_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[3]));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_23));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
  MR_Word HLDS_4,
  MR_Word UseForeignLanguage_5,
  MR_Word * ForeignInterfaceInfo_6)
{
  {
    MR_Word ModuleName_7;
    MR_Word ForeignSelfImport_8;
    MR_Word ForeignDeclCodeCord_9;
    MR_Word ForeignBodyCodeCord_10;
    MR_Word ForeignImportsModules0_11;
    MR_Word ForeignDeclCodes_12;
    MR_Word ForeignBodyCodes_13;
    MR_Word ForeignImportsModules_14;
    MR_Word WantedForeignDeclCodes_15;
    MR_Word WantedForeignBodyCodes_17;
    MR_Word WantedForeignImports_19;
    MR_Word ForeignExportDecls_20;
    MR_Word ForeignExportDefns_21;
    MR_Word Var_22;
    MR_Word _OtherDeclCodes_16;
    MR_Word _OtherBodyCodes_18;

    hlds__hlds_module__module_info_get_name_2_p_0(HLDS_4, &ModuleName_7);
    {
      ForeignSelfImport_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ForeignSelfImport_8, 0) = (MR_Box) ((MR_Unsigned) (UseForeignLanguage_5));
      MR_hl_field(MR_mktag(0), ForeignSelfImport_8, 1) = ((MR_Box) (ModuleName_7));
    }
    hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(HLDS_4, &ForeignDeclCodeCord_9);
    hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(HLDS_4, &ForeignBodyCodeCord_10);
    hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(HLDS_4, &ForeignImportsModules0_11);
    ForeignDeclCodes_12 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodeCord_9);
    ForeignBodyCodes_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodeCord_10);
    parse_tree__prog_data_foreign__add_foreign_import_module_info_3_p_0(ForeignSelfImport_8, ForeignImportsModules0_11, &ForeignImportsModules_14);
    backend_libs__foreign__filter_decls_4_p_0(UseForeignLanguage_5, ForeignDeclCodes_12, &WantedForeignDeclCodes_15, &_OtherDeclCodes_16);
    backend_libs__foreign__filter_bodys_4_p_0(UseForeignLanguage_5, ForeignBodyCodes_13, &WantedForeignBodyCodes_17, &_OtherBodyCodes_18);
    Var_22 = parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0(ForeignImportsModules_14, UseForeignLanguage_5);
    WantedForeignImports_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0), Var_22);
    backend_libs__export__get_foreign_export_decls_2_p_0(HLDS_4, &ForeignExportDecls_20);
    backend_libs__export__get_foreign_export_defns_2_p_0(HLDS_4, &ForeignExportDefns_21);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      *ForeignInterfaceInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (WantedForeignDeclCodes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (WantedForeignBodyCodes_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (WantedForeignImports_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ForeignExportDecls_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ForeignExportDefns_21));
    }
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_30,
  MR_Word * STATE_VARIABLE_HLDS_31,
  MR_Word * STATE_VARIABLE_GlobalData_32,
  MR_Word * LLDS_11,
  MR_Word STATE_VARIABLE_DumpInfo_0_33,
  MR_Word * STATE_VARIABLE_DumpInfo_34)
{
  {
    MR_Word ModuleName_14;
    MR_Word Globals_15;
    MR_Word OptUnboxFloat_16;
    MR_Word DoCommonData_17;
    MR_Word UnboxFloats_18;
    MR_Word OptUnboxInt64s_19;
    MR_Word UnboxInt64s_20;
    MR_Word StaticCellInfo0_21;
    MR_Integer TSStringTableSize_22;
    MR_Word TSRevStringTable_23;
    MR_Word Verbose_24;
    MR_Word Stats_25;
    MR_Word TradPasses_26;
    MR_Word Specs_27;
    MR_Word STATE_VARIABLE_GlobalData_40_40;
    MR_Word STATE_VARIABLE_HLDS_43_43;
    MR_Word STATE_VARIABLE_DumpInfo_47_47;
    MR_Word STATE_VARIABLE_GlobalData_50_50;
    MR_Integer _NumWarnings_28;
    MR_Integer _NumErrors_29;

    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_30, &ModuleName_14);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_30, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 258, &OptUnboxFloat_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 480, &DoCommonData_17);
    switch (OptUnboxFloat_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxFloats_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxFloats_18 = (MR_Integer) 0;
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 259, &OptUnboxInt64s_19);
    switch (OptUnboxInt64s_19) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UnboxInt64s_20 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        UnboxInt64s_20 = (MR_Integer) 0;
        break;
    }
    StaticCellInfo0_21 = ll_backend__global_data__init_static_cell_info_4_f_0(ModuleName_14, UnboxFloats_18, UnboxInt64s_20, DoCommonData_17);
    hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(STATE_VARIABLE_HLDS_0_30, &TSStringTableSize_22, &TSRevStringTable_23);
    ll_backend__global_data__global_data_init_4_p_0(StaticCellInfo0_21, TSStringTableSize_22, TSRevStringTable_23, &STATE_VARIABLE_GlobalData_40_40);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 59, &Verbose_24);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 69, &Stats_25);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) "% Mapping args to regs...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_24);
    hlds__arg_info__generate_arg_info_2_p_0(STATE_VARIABLE_HLDS_0_30, &STATE_VARIABLE_HLDS_43_43);
    libs__file_util__maybe_write_string_4_p_0(Verbose_24, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_25);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_43_43, (MR_Integer) 305, (MR_String) "args_to_regs", STATE_VARIABLE_DumpInfo_0_33, &STATE_VARIABLE_DumpInfo_47_47);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 317, &TradPasses_26);
    ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(STATE_VARIABLE_HLDS_43_43, STATE_VARIABLE_GlobalData_40_40, &STATE_VARIABLE_GlobalData_50_50);
    switch (TradPasses_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(STATE_VARIABLE_HLDS_43_43, STATE_VARIABLE_HLDS_31, LLDS_11, STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_GlobalData_32, (MR_Word) ((MR_Unsigned) 0U), &Specs_27, STATE_VARIABLE_DumpInfo_47_47, STATE_VARIABLE_DumpInfo_34);
        }
        break;
      case (MR_Integer) 1:
        {
          top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(STATE_VARIABLE_HLDS_43_43, STATE_VARIABLE_HLDS_31, LLDS_11, STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_GlobalData_32, (MR_Word) ((MR_Unsigned) 0U), &Specs_27);
          *STATE_VARIABLE_DumpInfo_34 = STATE_VARIABLE_DumpInfo_47_47;
        }
        break;
    }
    parse_tree__error_util__write_error_specs_8_p_0(Specs_27, Globals_15, (MR_Integer) 0, &_NumWarnings_28, (MR_Integer) 0, &_NumErrors_29);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * LLDS_9,
  MR_Word STATE_VARIABLE_GlobalData_0_24,
  MR_Word * STATE_VARIABLE_GlobalData_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    MR_Word PredIds_12;
    MR_Word Globals_13;
    MR_Word ProcDups_14;
    MR_Word OrderedPredIds_15;
    MR_Word MaybeDupProcMap_16;
    MR_Word ProcDepInfo_18;
    MR_Word SCCMap_19;
    MR_Word ConstStructMap_20;
    MR_Word CProcsCord_21;
    MR_Word STATE_VARIABLE_HLDS_31_31;
    MR_Word STATE_VARIABLE_GlobalData_32_32;
    MR_Word Var_34;

    hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_HLDS_0_22, &PredIds_12);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 494, &ProcDups_14);
    switch (ProcDups_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          OrderedPredIds_15 = PredIds_12;
          MaybeDupProcMap_16 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word PredDepInfo_17;
          MR_Word Var_30;

          PredDepInfo_17 = hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0(STATE_VARIABLE_HLDS_0_22, PredIds_12, (MR_Integer) 1);
          OrderedPredIds_15 = libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDepInfo_17);
          Var_30 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0));
          {
            MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeDupProcMap_16, 0) = ((MR_Box) (Var_30));
          }
        }
        break;
    }
    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_22, &STATE_VARIABLE_HLDS_31_31, &ProcDepInfo_18);
    SCCMap_19 = libs__dependency_graph__dependency_info_make_scc_map_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ProcDepInfo_18);
    ll_backend__unify_gen_construct__generate_const_structs_4_p_0(STATE_VARIABLE_HLDS_31_31, &ConstStructMap_20, STATE_VARIABLE_GlobalData_0_24, &STATE_VARIABLE_GlobalData_32_32);
    Var_34 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0));
    top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_12_p_0(STATE_VARIABLE_HLDS_31_31, STATE_VARIABLE_HLDS_23, ConstStructMap_20, SCCMap_19, OrderedPredIds_15, MaybeDupProcMap_16, Var_34, &CProcsCord_21, STATE_VARIABLE_GlobalData_32_32, STATE_VARIABLE_GlobalData_25, STATE_VARIABLE_Specs_0_26, STATE_VARIABLE_Specs_27);
    *LLDS_9 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), CProcsCord_21);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_12_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_1,
  MR_Word * STATE_VARIABLE_HLDS_2,
  MR_Word ConstStructMap_3,
  MR_Word SCCMap_4,
  MR_Word HeadVar__5_5,
  MR_Word STATE_VARIABLE_MaybeDupProcMap_0_6,
  MR_Word STATE_VARIABLE_CProcsCord_0_7,
  MR_Word * STATE_VARIABLE_CProcsCord_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__5_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
      *STATE_VARIABLE_GlobalData_10 = STATE_VARIABLE_GlobalData_0_9;
      *STATE_VARIABLE_CProcsCord_8 = STATE_VARIABLE_CProcsCord_0_7;
      *STATE_VARIABLE_HLDS_2 = STATE_VARIABLE_HLDS_0_1;
    }
    else
    {
      MR_Word PredId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 0))));
      MR_Word PredIds_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__5_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HLDS_46_46;
      MR_Word STATE_VARIABLE_MaybeDupProcMap_47_47;
      MR_Word STATE_VARIABLE_CProcsCord_48_48;
      MR_Word STATE_VARIABLE_GlobalData_49_49;
      MR_Word STATE_VARIABLE_Specs_50_50;
      MR_Word next_value_of_STATE_VARIABLE_HLDS_0_1;
      MR_Word next_value_of_HeadVar__5_5;
      MR_Word next_value_of_STATE_VARIABLE_MaybeDupProcMap_0_6;
      MR_Word next_value_of_STATE_VARIABLE_CProcsCord_0_7;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_9;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_11;

      top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_13_p_0(STATE_VARIABLE_HLDS_0_1, &STATE_VARIABLE_HLDS_46_46, ConstStructMap_3, SCCMap_4, PredId_31, STATE_VARIABLE_MaybeDupProcMap_0_6, &STATE_VARIABLE_MaybeDupProcMap_47_47, STATE_VARIABLE_CProcsCord_0_7, &STATE_VARIABLE_CProcsCord_48_48, STATE_VARIABLE_GlobalData_0_9, &STATE_VARIABLE_GlobalData_49_49, STATE_VARIABLE_Specs_0_11, &STATE_VARIABLE_Specs_50_50);
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_HLDS_0_1 = STATE_VARIABLE_HLDS_46_46;
      next_value_of_HeadVar__5_5 = PredIds_32;
      next_value_of_STATE_VARIABLE_MaybeDupProcMap_0_6 = STATE_VARIABLE_MaybeDupProcMap_47_47;
      next_value_of_STATE_VARIABLE_CProcsCord_0_7 = STATE_VARIABLE_CProcsCord_48_48;
      next_value_of_STATE_VARIABLE_GlobalData_0_9 = STATE_VARIABLE_GlobalData_49_49;
      next_value_of_STATE_VARIABLE_Specs_0_11 = STATE_VARIABLE_Specs_50_50;
      STATE_VARIABLE_HLDS_0_1 = next_value_of_STATE_VARIABLE_HLDS_0_1;
      HeadVar__5_5 = next_value_of_HeadVar__5_5;
      STATE_VARIABLE_MaybeDupProcMap_0_6 = next_value_of_STATE_VARIABLE_MaybeDupProcMap_0_6;
      STATE_VARIABLE_CProcsCord_0_7 = next_value_of_STATE_VARIABLE_CProcsCord_0_7;
      STATE_VARIABLE_GlobalData_0_9 = next_value_of_STATE_VARIABLE_GlobalData_0_9;
      STATE_VARIABLE_Specs_0_11 = next_value_of_STATE_VARIABLE_Specs_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_13_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_42,
  MR_Word * STATE_VARIABLE_HLDS_43,
  MR_Word ConstStructMap_15,
  MR_Word SCCMap_16,
  MR_Word PredId_17,
  MR_Word STATE_VARIABLE_MaybeDupProcMap_0_44,
  MR_Word * STATE_VARIABLE_MaybeDupProcMap_45,
  MR_Word STATE_VARIABLE_CProcsCord_0_46,
  MR_Word * STATE_VARIABLE_CProcsCord_47,
  MR_Word STATE_VARIABLE_GlobalData_0_48,
  MR_Word * STATE_VARIABLE_GlobalData_49,
  MR_Word STATE_VARIABLE_Specs_0_50,
  MR_Word * STATE_VARIABLE_Specs_51)
{
  {
    MR_bool succeeded;
    MR_Word PredTable_22;
    MR_Word PredInfo_23;
    MR_Word ProcIds_24;
    MR_Box conv0_PredInfo_23;

    hlds__hlds_module__module_info_get_preds_2_p_0(STATE_VARIABLE_HLDS_0_42, &PredTable_22);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredTable_22, ((MR_Box) (PredId_17)), &conv0_PredInfo_23);
    PredInfo_23 = ((MR_Word) (conv0_PredInfo_23));
    ProcIds_24 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(PredInfo_23);
    if ((ProcIds_24 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_HLDS_43 = STATE_VARIABLE_HLDS_0_42;
      *STATE_VARIABLE_MaybeDupProcMap_45 = STATE_VARIABLE_MaybeDupProcMap_0_44;
      *STATE_VARIABLE_CProcsCord_47 = STATE_VARIABLE_CProcsCord_0_46;
      *STATE_VARIABLE_GlobalData_49 = STATE_VARIABLE_GlobalData_0_48;
      *STATE_VARIABLE_Specs_51 = STATE_VARIABLE_Specs_0_50;
    }
    else
    {
      MR_Word Globals0_27;
      MR_Word Verbose_28;
      MR_Word IdCProcs_35;
      MR_Word CProcs_38;
      MR_Word Stats_41;
      MR_Word Var_70;
      MR_Word PredModule_30;
      MR_String PredName_31;
      MR_Integer PredArity_32;

      hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_42, &Globals0_27);
      libs__globals__lookup_bool_option_3_p_0(Globals0_27, (MR_Integer) 59, &Verbose_28);
      switch (Verbose_28) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
            hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(STATE_VARIABLE_HLDS_0_42, PredId_17);
            mercury__io__write_string_3_p_0((MR_String) "\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_28);
          }
          break;
      }
      PredModule_30 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_23);
      PredName_31 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_23);
      PredArity_32 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_23);
      succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_30, PredName_31, PredArity_32);
      if (succeeded)
      {
        MR_Word TraceLevel_33;
        MR_Word Globals1_34;
        MR_Word Globals2_36;
        MR_Word Globals_37;
        MR_Word STATE_VARIABLE_HLDS_60_60;
        MR_Word STATE_VARIABLE_HLDS_61_61;

        libs__globals__get_trace_level_2_p_0(Globals0_27, &TraceLevel_33);
        libs__globals__set_trace_level_none_2_p_0(Globals0_27, &Globals1_34);
        hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_34, STATE_VARIABLE_HLDS_0_42, &STATE_VARIABLE_HLDS_60_60);
        top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_12_p_0(STATE_VARIABLE_HLDS_60_60, &STATE_VARIABLE_HLDS_61_61, ConstStructMap_15, SCCMap_16, PredId_17, PredInfo_23, ProcIds_24, &IdCProcs_35, STATE_VARIABLE_GlobalData_0_48, STATE_VARIABLE_GlobalData_49, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_61_61, &Globals2_36);
        libs__globals__set_trace_level_3_p_0(TraceLevel_33, Globals2_36, &Globals_37);
        hlds__hlds_module__module_info_set_globals_3_p_0(Globals_37, STATE_VARIABLE_HLDS_61_61, STATE_VARIABLE_HLDS_43);
      }
      else
        top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_12_p_0(STATE_VARIABLE_HLDS_0_42, STATE_VARIABLE_HLDS_43, ConstStructMap_15, SCCMap_16, PredId_17, PredInfo_23, ProcIds_24, &IdCProcs_35, STATE_VARIABLE_GlobalData_0_48, STATE_VARIABLE_GlobalData_49, STATE_VARIABLE_Specs_0_50, STATE_VARIABLE_Specs_51);
      if ((STATE_VARIABLE_MaybeDupProcMap_0_44 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__assoc_list__values_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), IdCProcs_35, &CProcs_38);
        *STATE_VARIABLE_MaybeDupProcMap_45 = STATE_VARIABLE_MaybeDupProcMap_0_44;
      }
      else
      {
        MR_Word DupProcMap0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeDupProcMap_0_44, (MR_Integer) 0))));
        MR_Word DupProcMap_40;

        ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(IdCProcs_35, &CProcs_38, DupProcMap0_39, &DupProcMap_40);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_MaybeDupProcMap_45 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DupProcMap_40));
        }
      }
      Var_70 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), CProcs_38);
      *STATE_VARIABLE_CProcsCord_47 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), STATE_VARIABLE_CProcsCord_0_46, Var_70);
      libs__globals__lookup_bool_option_3_p_0(Globals0_27, (MR_Integer) 69, &Stats_41);
      libs__file_util__maybe_write_string_4_p_0(Verbose_28, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_41);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_12_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_1,
  MR_Word * STATE_VARIABLE_HLDS_2,
  MR_Word ConstStructMap_3,
  MR_Word SCCMap_4,
  MR_Word PredId_5,
  MR_Word PredInfo_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_GlobalData_0_9,
  MR_Word * STATE_VARIABLE_GlobalData_10,
  MR_Word STATE_VARIABLE_Specs_0_11,
  MR_Word * STATE_VARIABLE_Specs_12)
{
  if ((HeadVar__7_7 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__8_8 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_12 = STATE_VARIABLE_Specs_0_11;
    *STATE_VARIABLE_GlobalData_10 = STATE_VARIABLE_GlobalData_0_9;
    *STATE_VARIABLE_HLDS_2 = STATE_VARIABLE_HLDS_0_1;
  }
  else
  {
    MR_Integer ProcId_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 0))));
    MR_Word ProcIds_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__7_7, (MR_Integer) 1))));
    MR_Word ProcLabel_33;
    MR_Word CProc_34;
    MR_Word ProcLabelsCProcs_35;
    MR_Word ProcTable_38;
    MR_Word ProcInfo_39;
    MR_Word Var_46;
    MR_Word STATE_VARIABLE_HLDS_47_47;
    MR_Word STATE_VARIABLE_GlobalData_48_48;
    MR_Word STATE_VARIABLE_Specs_49_49;
    MR_Box conv0_ProcInfo_39;

    ProcLabel_33 = backend_libs__proc_label__make_proc_label_3_f_0(STATE_VARIABLE_HLDS_0_1, PredId_5, ProcId_31);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_6, &ProcTable_38);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_38, ((MR_Box) (ProcId_31)), &conv0_ProcInfo_39);
    ProcInfo_39 = ((MR_Word) (conv0_ProcInfo_39));
    top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_13_p_0(STATE_VARIABLE_HLDS_0_1, &STATE_VARIABLE_HLDS_47_47, ConstStructMap_3, SCCMap_4, PredId_5, PredInfo_6, ProcId_31, ProcInfo_39, &CProc_34, STATE_VARIABLE_GlobalData_0_9, &STATE_VARIABLE_GlobalData_48_48, STATE_VARIABLE_Specs_0_11, &STATE_VARIABLE_Specs_49_49);
    {
      Var_46 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_46, 0) = ((MR_Box) (ProcLabel_33));
      MR_hl_field(MR_mktag(0), Var_46, 1) = ((MR_Box) (CProc_34));
    }
    top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_12_p_0(STATE_VARIABLE_HLDS_47_47, STATE_VARIABLE_HLDS_2, ConstStructMap_3, SCCMap_4, PredId_5, PredInfo_6, ProcIds_32, &ProcLabelsCProcs_35, STATE_VARIABLE_GlobalData_48_48, STATE_VARIABLE_GlobalData_10, STATE_VARIABLE_Specs_49_49, STATE_VARIABLE_Specs_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__8_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_46));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ProcLabelsCProcs_35));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_13_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_42,
  MR_Word * STATE_VARIABLE_HLDS_43,
  MR_Word ConstStructMap_15,
  MR_Word SCCMap_16,
  MR_Word PredId_17,
  MR_Word PredInfo_18,
  MR_Integer ProcId_19,
  MR_Word STATE_VARIABLE_ProcInfo_0_44,
  MR_Word * CProc_21,
  MR_Word STATE_VARIABLE_GlobalData_0_45,
  MR_Word * STATE_VARIABLE_GlobalData_46,
  MR_Word STATE_VARIABLE_Specs_0_47,
  MR_Word * STATE_VARIABLE_Specs_48)
{
  {
    MR_bool succeeded;
    MR_Word PredProcId_24;
    MR_Word Globals_25;
    MR_Word SavedVarsConst_26;
    MR_Word SavedVarsCell_27;
    MR_Word FollowCode_28;
    MR_Word SimplifyTasks0_29;
    MR_Word SimpList0_30;
    MR_Word ConstProp_31;
    MR_Word DeepProf_32;
    MR_Word TSWProf_33;
    MR_Word TSCProf_34;
    MR_Word ProfTrans_35;
    MR_Word SimpList1_36;
    MR_Word SimpList_37;
    MR_Word SimplifyTasks_38;
    MR_Word CProc0_40;
    MR_Word Optimize_41;
    MR_Word STATE_VARIABLE_ProcInfo_51_51;
    MR_Word STATE_VARIABLE_HLDS_52_52;
    MR_Word STATE_VARIABLE_ProcInfo_54_54;
    MR_Word STATE_VARIABLE_HLDS_55_55;
    MR_Word STATE_VARIABLE_ProcInfo_57_57;
    MR_Word STATE_VARIABLE_HLDS_58_58;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_71;
    MR_Word STATE_VARIABLE_ProcInfo_77_77;
    MR_Word STATE_VARIABLE_ProcInfo_81_81;
    MR_Word STATE_VARIABLE_ProcInfo_85_85;
    MR_Word STATE_VARIABLE_ProcInfo_90_90;
    MR_Word STATE_VARIABLE_ProcInfo_95_95;
    MR_Word STATE_VARIABLE_GlobalData_99_99;

    {
      PredProcId_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), PredProcId_24, 0) = ((MR_Box) (PredId_17));
      MR_hl_field(MR_mktag(0), PredProcId_24, 1) = ((MR_Box) (ProcId_19));
    }
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_42, &Globals_25);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 388, &SavedVarsConst_26);
    switch (SavedVarsConst_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_52_52 = STATE_VARIABLE_HLDS_0_42;
          STATE_VARIABLE_ProcInfo_51_51 = STATE_VARIABLE_ProcInfo_0_44;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__saved_vars__saved_vars_proc_5_p_0(PredProcId_24, STATE_VARIABLE_ProcInfo_0_44, &STATE_VARIABLE_ProcInfo_51_51, STATE_VARIABLE_HLDS_0_42, &STATE_VARIABLE_HLDS_52_52);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 389, &SavedVarsCell_27);
    switch (SavedVarsCell_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_55_55 = STATE_VARIABLE_HLDS_52_52;
          STATE_VARIABLE_ProcInfo_54_54 = STATE_VARIABLE_ProcInfo_51_51;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__stack_opt__stack_opt_cell_5_p_0(PredProcId_24, STATE_VARIABLE_ProcInfo_51_51, &STATE_VARIABLE_ProcInfo_54_54, STATE_VARIABLE_HLDS_52_52, &STATE_VARIABLE_HLDS_55_55);
        break;
    }
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 405, &FollowCode_28);
    switch (FollowCode_28) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_58_58 = STATE_VARIABLE_HLDS_55_55;
          STATE_VARIABLE_ProcInfo_57_57 = STATE_VARIABLE_ProcInfo_54_54;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__follow_code__move_follow_code_in_proc_5_p_0(PredProcId_24, STATE_VARIABLE_ProcInfo_54_54, &STATE_VARIABLE_ProcInfo_57_57, STATE_VARIABLE_HLDS_55_55, &STATE_VARIABLE_HLDS_58_58);
        break;
    }
    check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, Globals_25, &SimplifyTasks0_29);
    SimpList0_30 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(SimplifyTasks0_29);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 384, &ConstProp_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 212, &DeepProf_32);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 229, &TSWProf_33);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 230, &TSCProf_34);
    {
      Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (TSCProf_34));
      MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (TSWProf_33));
      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (Var_66));
    }
    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (DeepProf_32));
      MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (Var_65));
    }
    ProfTrans_35 = mercury__bool__or_list_1_f_0(Var_64);
    succeeded = (ConstProp_31 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (ProfTrans_35 == (MR_Integer) 0);
    if (succeeded)
    {
      mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 11)), SimpList0_30, &SimpList1_36);
    }
    else
    {
      SimpList1_36 = mercury__list__delete_all_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), SimpList0_30, ((MR_Box) ((MR_Integer) 11)));
    }
    {
      Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) ((MR_Integer) 9));
      MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (SimpList1_36));
    }
    {
      SimpList_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), SimpList_37, 0) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(1), SimpList_37, 1) = ((MR_Box) (Var_71));
    }
    SimplifyTasks_38 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(SimpList_37);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Simplifying ", PredId_17, ProcId_19, STATE_VARIABLE_HLDS_58_58);
    check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(SimplifyTasks_38, PredId_17, ProcId_19, STATE_VARIABLE_HLDS_58_58, STATE_VARIABLE_HLDS_43, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_77_77);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Computing liveness in ", PredId_17, ProcId_19, *STATE_VARIABLE_HLDS_43);
    ll_backend__liveness__detect_liveness_proc_4_p_0(*STATE_VARIABLE_HLDS_43, PredProcId_24, STATE_VARIABLE_ProcInfo_77_77, &STATE_VARIABLE_ProcInfo_81_81);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Marking directly tail recursive calls in ", PredId_17, ProcId_19, *STATE_VARIABLE_HLDS_43);
    hlds__mark_tail_calls__mark_tail_rec_calls_in_proc_for_llds_code_gen_9_p_0(*STATE_VARIABLE_HLDS_43, PredId_17, ProcId_19, PredInfo_18, SCCMap_16, STATE_VARIABLE_ProcInfo_81_81, &STATE_VARIABLE_ProcInfo_85_85, STATE_VARIABLE_Specs_0_47, STATE_VARIABLE_Specs_48);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating stack slots in ", PredId_17, ProcId_19, *STATE_VARIABLE_HLDS_43);
    ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(*STATE_VARIABLE_HLDS_43, PredProcId_24, STATE_VARIABLE_ProcInfo_85_85, &STATE_VARIABLE_ProcInfo_90_90);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating storage locations for live vars in ", PredId_17, ProcId_19, *STATE_VARIABLE_HLDS_43);
    ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 0, *STATE_VARIABLE_HLDS_43, PredProcId_24, STATE_VARIABLE_ProcInfo_90_90, &STATE_VARIABLE_ProcInfo_95_95);
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating low-level (LLDS) code for ", PredId_17, ProcId_19, *STATE_VARIABLE_HLDS_43);
    ll_backend__proc_gen__generate_proc_code_9_p_0(*STATE_VARIABLE_HLDS_43, ConstStructMap_15, PredId_17, PredInfo_18, ProcId_19, STATE_VARIABLE_ProcInfo_95_95, &CProc0_40, STATE_VARIABLE_GlobalData_0_45, &STATE_VARIABLE_GlobalData_99_99);
    libs__globals__lookup_bool_option_3_p_0(Globals_25, (MR_Integer) 482, &Optimize_41);
    switch (Optimize_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *CProc_21 = CProc0_40;
        break;
      case (MR_Integer) 1:
        ll_backend__optimize__optimize_proc_4_p_0(Globals_25, STATE_VARIABLE_GlobalData_99_99, CProc0_40, CProc_21);
        break;
    }
    hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating call continuation information for ", PredId_17, ProcId_19, *STATE_VARIABLE_HLDS_43);
    ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(*STATE_VARIABLE_HLDS_43, *CProc_21, STATE_VARIABLE_GlobalData_99_99, STATE_VARIABLE_GlobalData_46);
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__182__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word * STATE_VARIABLE_LLDS_24,
  MR_Word STATE_VARIABLE_GlobalData_0_25,
  MR_Word * STATE_VARIABLE_GlobalData_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * STATE_VARIABLE_DumpInfo_30)
{
  {
    MR_bool succeeded;
    MR_Word Globals_18;
    MR_Word Verbose_19;
    MR_Word Stats_20;
    MR_Word SimplifySpecs_21;
    MR_Word STATE_VARIABLE_HLDS_35_35;
    MR_Word STATE_VARIABLE_DumpInfo_39_39;
    MR_Word STATE_VARIABLE_HLDS_41_41;
    MR_Word STATE_VARIABLE_DumpInfo_45_45;
    MR_Word STATE_VARIABLE_HLDS_47_47;
    MR_Word STATE_VARIABLE_DumpInfo_51_51;
    MR_Word STATE_VARIABLE_HLDS_55_55;
    MR_Word Var_58;
    MR_Word Var_61;
    MR_Word STATE_VARIABLE_DumpInfo_65_65;
    MR_Word STATE_VARIABLE_HLDS_67_67;
    MR_Word STATE_VARIABLE_DumpInfo_71_71;
    MR_Word STATE_VARIABLE_HLDS_73_73;
    MR_Word STATE_VARIABLE_DumpInfo_78_78;
    MR_Word STATE_VARIABLE_HLDS_80_80;
    MR_Word STATE_VARIABLE_DumpInfo_84_84;
    MR_Word STATE_VARIABLE_GlobalData_92_92;
    MR_Word STATE_VARIABLE_LLDS_93_93;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 59, &Verbose_19);
    libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 69, &Stats_20);
    top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_0_22, &STATE_VARIABLE_HLDS_35_35);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_35_35, (MR_Integer) 310, (MR_String) "saved_vars_const", STATE_VARIABLE_DumpInfo_0_29, &STATE_VARIABLE_DumpInfo_39_39);
    top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_41_41);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_41_41, (MR_Integer) 315, (MR_String) "saved_vars_cell", STATE_VARIABLE_DumpInfo_39_39, &STATE_VARIABLE_DumpInfo_45_45);
    top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_41_41, &STATE_VARIABLE_HLDS_47_47);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_47_47, (MR_Integer) 320, (MR_String) "followcode", STATE_VARIABLE_DumpInfo_45_45, &STATE_VARIABLE_DumpInfo_51_51);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 5, Verbose_19, Stats_20, STATE_VARIABLE_HLDS_47_47, &STATE_VARIABLE_HLDS_55_55, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_21);
    Var_61 = parse_tree__error_util__contains_errors_2_f_0(Globals_18, SimplifySpecs_21);
    {
      Var_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_58, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_58, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1));
      MR_hl_field(MR_mktag(0), Var_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_58, 3) = ((MR_Box) (Var_61));
      MR_hl_field(MR_mktag(0), Var_58, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_58, (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/11", (MR_String) "simplify has errors");
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_55_55, (MR_Integer) 325, (MR_String) "ll_backend_simplify", STATE_VARIABLE_DumpInfo_51_51, &STATE_VARIABLE_DumpInfo_65_65);
    top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_55_55, &STATE_VARIABLE_HLDS_67_67);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_67_67, (MR_Integer) 330, (MR_String) "liveness", STATE_VARIABLE_DumpInfo_65_65, &STATE_VARIABLE_DumpInfo_71_71);
    top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_67_67, &STATE_VARIABLE_HLDS_73_73, STATE_VARIABLE_Specs_0_27, STATE_VARIABLE_Specs_28);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_73_73, (MR_Integer) 332, (MR_String) "mark_debug_tailrec_calls", STATE_VARIABLE_DumpInfo_71_71, &STATE_VARIABLE_DumpInfo_78_78);
    top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_73_73, &STATE_VARIABLE_HLDS_80_80);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_80_80, (MR_Integer) 335, (MR_String) "stackvars", STATE_VARIABLE_DumpInfo_78_78, &STATE_VARIABLE_DumpInfo_84_84);
    top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(Verbose_19, Stats_20, STATE_VARIABLE_HLDS_80_80, STATE_VARIABLE_HLDS_23);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_23, (MR_Integer) 340, (MR_String) "store_map", STATE_VARIABLE_DumpInfo_84_84, STATE_VARIABLE_DumpInfo_30);
    top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(*STATE_VARIABLE_HLDS_23, Verbose_19, Stats_20, STATE_VARIABLE_GlobalData_0_25, &STATE_VARIABLE_GlobalData_92_92, &STATE_VARIABLE_LLDS_93_93);
    top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(*STATE_VARIABLE_HLDS_23, STATE_VARIABLE_GlobalData_92_92, Verbose_19, Stats_20, STATE_VARIABLE_LLDS_93_93, STATE_VARIABLE_LLDS_24);
    top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(*STATE_VARIABLE_HLDS_23, *STATE_VARIABLE_LLDS_24, Verbose_19, Stats_20, STATE_VARIABLE_GlobalData_92_92, STATE_VARIABLE_GlobalData_26);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
  MR_Word HLDS_9,
  MR_Word LLDS_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Generating call continuation information...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
    ll_backend__continuation_info__maybe_collect_call_continuations_in_cprocs_4_p_0(HLDS_9, LLDS_10, STATE_VARIABLE_GlobalData_0_15, STATE_VARIABLE_GlobalData_16);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_12);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
  MR_Word HLDS_9,
  MR_Word GlobalData_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_LLDS_0_17,
  MR_Word * STATE_VARIABLE_LLDS_18)
{
  {
    MR_Word Globals_15;
    MR_Word Optimize_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_9, &Globals_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 482, &Optimize_16);
    switch (Optimize_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_LLDS_18 = STATE_VARIABLE_LLDS_0_17;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Doing optimizations...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_11);
          ll_backend__optimize__optimize_procs_4_p_0(Globals_15, GlobalData_10, STATE_VARIABLE_LLDS_0_17, STATE_VARIABLE_LLDS_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_12);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
  MR_Word HLDS_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word STATE_VARIABLE_GlobalData_0_15,
  MR_Word * STATE_VARIABLE_GlobalData_16,
  MR_Word * LLDS_13)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Generating code...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_10);
    ll_backend__proc_gen__generate_module_code_4_p_0(HLDS_9, LLDS_13, STATE_VARIABLE_GlobalData_0_15, STATE_VARIABLE_GlobalData_16);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_11);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    ll_backend__store_alloc__allocate_store_maps_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Allocating store map...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_5[2])), STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Computing stack vars...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_5[1])), STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_4;
    MR_Word conv1_HeadVar__6_6;
    MR_Word conv0_HeadVar__8_8;

    hlds__mark_tail_calls__mark_tail_rec_calls_in_pred_for_llds_code_gen_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__8_8);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__6_6));
    *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__8_8));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_Word DepInfo_14;
    MR_Word SCCMap_15;
    MR_Word STATE_VARIABLE_HLDS_25_25;
    MR_Word Var_26;
    MR_Word Var_30;

    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Marking directly tail recursive calls...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
    hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_25_25, &DepInfo_14);
    SCCMap_15 = libs__dependency_graph__dependency_info_make_scc_map_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_14);
    {
      Var_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_30, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_30, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_30, 3) = ((MR_Box) (SCCMap_15));
    }
    Var_26 = (MR_Word) (Var_30);
    hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0(Var_26, STATE_VARIABLE_HLDS_25_25, STATE_VARIABLE_HLDS_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    ll_backend__liveness__detect_liveness_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word ParallelLiveness_12;
    MR_Integer DebugLiveness_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 318, &ParallelLiveness_12);
    libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 87, &DebugLiveness_13);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Computing liveness...\n");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    succeeded = (ParallelLiveness_12 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (DebugLiveness_13 == (MR_Integer) -1);
    if (succeeded)
      ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
    else
    {
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_5[0])), STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
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

    ll_backend__follow_code__move_follow_code_in_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word FollowCode_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 405, &FollowCode_12);
    switch (FollowCode_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Migrating branch code...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_2[6])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
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

    ll_backend__stack_opt__stack_opt_cell_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word SavedVars_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 389, &SavedVars_12);
    switch (SavedVars_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Minimizing variable saves using cells...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_2[5])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
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

    ll_backend__saved_vars__saved_vars_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word SavedVars_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 388, &SavedVars_12);
    switch (SavedVars_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Minimizing variable saves using constants...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_2[4])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__top_level__mercury_compile_llds_back_end__init(void)
{
}

void mercury__top_level__mercury_compile_llds_back_end__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_dup_proc_label_map_0);
	MR_register_type_ctor_info(&top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_foreign_interface_info_0);
}

void mercury__top_level__mercury_compile_llds_back_end__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_llds_back_end__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_llds_back_end.
