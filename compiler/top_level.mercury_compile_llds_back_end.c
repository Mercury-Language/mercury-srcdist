/*
** Automatically generated from `mercury_compile_llds_back_end.m'
** by the Mercury compiler,
** version rotd-2023-05-15
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
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
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.simplify.mih"
#include "hlds.arg_info.mih"
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
#include "hlds.hlds_out.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.module_qual.mih"
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
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "check_hlds.simplify.simplify_proc.mih"
#include "check_hlds.simplify.simplify_tasks.mih"
#include "hlds.hlds_out.hlds_out_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "ll_backend.llds_out.llds_out_file.mih"




static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0;

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6];

static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0;

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1];

static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1];

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1];

static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1];

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__195__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_65);

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
top_level__mercury_compile_llds_back_end__compile_fact_table_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String BaseName_12,
  MR_String * O_FileName_13,
  MR_Word * Succeeded_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
  MR_Word Globals_6,
  MR_Word FIMSpec_7,
  MR_Word * Include_8);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
  MR_Word Decl_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
  MR_Word Globals_6,
  MR_Word LLDS0_7,
  MR_Word * Succeeded_8);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_3_p_0(
  MR_String ModName_4,
  MR_Word ChunkList_5,
  MR_Word * Modules_6);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_loop_4_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
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
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word * LLDS_11,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word STATE_VARIABLE_HLDS_0_2,
  MR_Word * STATE_VARIABLE_HLDS_3,
  MR_Word ConstStructMap_4,
  MR_Word SCCMap_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_MaybeDupProcMap_0_7,
  MR_Word STATE_VARIABLE_CProcsCord_0_8,
  MR_Word * STATE_VARIABLE_CProcsCord_9,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word ConstStructMap_2,
  MR_Word SCCMap_3,
  MR_Word PredId_4,
  MR_Word PredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9,
  MR_Word STATE_VARIABLE_HLDS_0_10,
  MR_Word * STATE_VARIABLE_HLDS_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ConstStructMap_16,
  MR_Word SCCMap_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Word PredInfo_20,
  MR_Word STATE_VARIABLE_ProcInfo_0_46,
  MR_Word * CProc_22,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48,
  MR_Word STATE_VARIABLE_HLDS_0_49,
  MR_Word * STATE_VARIABLE_HLDS_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word * STATE_VARIABLE_LLDS_26,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30,
  MR_Word STATE_VARIABLE_DumpInfo_0_31,
  MR_Word * STATE_VARIABLE_DumpInfo_32);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word HLDS_11,
  MR_Word LLDS_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word HLDS_11,
  MR_Word GlobalData_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_LLDS_0_21,
  MR_Word * STATE_VARIABLE_LLDS_22);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word HLDS_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18,
  MR_Word * LLDS_15);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

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


static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[6][3];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[6][2];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[6][1];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[1][9];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[3][8];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[2][11];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[2][4];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][5];




static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_stack_opt_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_followcode_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_stack_vars_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[1]))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[2]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[6][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "\n#endif")) },
  /* row   1 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".mh")))) },
  /* row   2 */
  { ((MR_Box) (((MR_Box) ((MR_String) ".c")))) },
  /* row   3 */
  { ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[3])) },
  /* row   4 */
  { ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[0])) },
  /* row   5 */
  { ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[4])) },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[3][8] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__store_alloc__ll_backend__store_alloc__type_ctor_info_store_map_run_type_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__allocate_store_map_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__pti_tree234_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_spec__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0) }
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001)),
  (MR_String) "top_level.mercury_compile_llds_back_end",
  (MR_String) "dup_proc_label_map",
  { NULL },
  { (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0) }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0) }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0),
  (MR_PseudoTypeInfo) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0),
  (MR_PseudoTypeInfo) (&top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0)
};

static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0 = {
  (MR_String) "foreign_interface_info",
  INT16_C(6),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1] = { &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0 };

static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1] = { &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0 };

static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_foreign_interface_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001)),
  (MR_String) "top_level.mercury_compile_llds_back_end",
  (MR_String) "foreign_interface_info",
  { top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0 },
  { top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0,

};

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__195__1_2_p_0(
  MR_Word HeadVar__1_64,
  MR_Word HeadVar__2_65)
{
  MR_bool succeeded = (HeadVar__1_64 == HeadVar__2_65);

  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_21 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_22 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_21 == CastY_22);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word ArgX5_16 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgY5_17 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 4))));
    MR_Word ArgX6_19 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));
    MR_Word ArgY6_20 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 5))));
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[0]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[1]), &SubResult3_12, ((MR_Box) (ArgX3_10)), ((MR_Box) (ArgY3_11)));
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[2]), &SubResult4_15, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
          succeeded = (SubResult4_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&SubResult5_18, ArgX5_16, ArgY5_17);
            succeeded = (SubResult5_18 != (MR_Integer) 0);
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
              mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_2[3]), HeadVar__1_1, ((MR_Box) (ArgX6_19)), ((MR_Box) (ArgY6_20)));
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgX5_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 4))));
    MR_Word ArgY5_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 4))));
    MR_Word ArgX6_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 5))));
    MR_Word ArgY6_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 5))));

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

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_8_p_0(
  MR_Word Globals_9,
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_String BaseName_12,
  MR_String * O_FileName_13,
  MR_Word * Succeeded_14)
{
  MR_Word LinkedTargetType_16;
  MR_Word PIC_17;
  MR_Word ObjOtherExt_18;
  MR_String C_FileName_19;
  MR_String Var_23;

  backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_9, &LinkedTargetType_16);
  backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_9, LinkedTargetType_16, &PIC_17);
  backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_9, PIC_17, &ObjOtherExt_18);
  C_FileName_19 = mercury__string__f_43_43_2_f_0(BaseName_12, (MR_String) ".c");
  Var_23 = parse_tree__file_names__other_extension_to_string_1_f_0(ObjOtherExt_18);
  *O_FileName_13 = mercury__string__f_43_43_2_f_0(BaseName_12, Var_23);
  backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_9, ProgressStream_10, ErrorStream_11, PIC_17, C_FileName_19, *O_FileName_13, Succeeded_14);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
  MR_Word Globals_6,
  MR_Word FIMSpec_7,
  MR_Word * Include_8)
{
  MR_Word Lang_10 = ((MR_Unsigned) ((MR_hl_field(0, FIMSpec_7, (MR_Integer) 0))) & (MR_Integer) 3);
  MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(0, FIMSpec_7, (MR_Integer) 1))));

  switch (Lang_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String HeaderFileName_12;
        MR_String IncludeString_13;
        MR_String Var_22;
        MR_Word Var_26;
        MR_Word Var_27;

        parse_tree__file_names__module_name_to_search_file_name_7_p_0(Globals_6, (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_Word) (MR_mkword(1, &top_level__mercury_compile_llds_back_end_scalar_common_3[1])), ModuleName_11, &HeaderFileName_12);
        Var_22 = mercury__string__f_43_43_2_f_0(HeaderFileName_12, (MR_String) "\"\n");
        IncludeString_13 = mercury__string__f_43_43_2_f_0((MR_String) "#include \"", Var_22);
        {
          Var_26 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_26, 0) = ((MR_Box) (IncludeString_13));
        }
        Var_27 = mercury__term_context__dummy_context_0_f_0();
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          *Include_8 = base;
          MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
          MR_hl_field(0, base, 1) = ((MR_Box) (Var_26));
          MR_hl_field(0, base, 2) = ((MR_Box) (Var_27));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_29;

        Var_29 = mercury__string__f_43_43_2_f_0((MR_String) ":- import_module not yet implemented: ", (MR_String) "\140:- pragma foreign_import_module\' for C#");
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", Var_29);
          return;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_33;

        Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ":- import_module not yet implemented: ", (MR_String) "\140:- pragma foreign_import_module\' for Java");
        {
          mercury__require__sorry_2_p_0((MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", Var_33);
          return;
        }
      }
      break;
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
  MR_Word Decl_2)
{
  MR_bool succeeded;
  MR_Word Var_6 = ((MR_Unsigned) ((MR_hl_field(0, Decl_2, (MR_Integer) 0))) & (MR_Integer) 1);

  succeeded = (Var_6 == (MR_Integer) 0);
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_String conv3_O_FileName_13;
  MR_Word conv2_Succeeded_14;

  top_level__mercury_compile_llds_back_end__compile_fact_table_file_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_String) (wrapper_arg_1)), &conv3_O_FileName_13, &conv2_Succeeded_14);
  *wrapper_arg_2 = ((MR_Box) (conv3_O_FileName_13));
  *wrapper_arg_3 = ((MR_Box) (conv2_Succeeded_14));
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Include_8;

  top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Include_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_Include_8));
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word OpModeCodeGen_14,
  MR_Word HLDS_15,
  MR_Word GlobalData0_16,
  MR_Word Procs_17,
  MR_Word ModuleName_18,
  MR_Word * Succeeded_19,
  MR_Word * FactTableObjFiles_20)
{
  MR_bool succeeded;
  MR_Word Globals_22;
  MR_Word Verbose_23;
  MR_Word Stats_24;
  MR_Word TypeCtorRttiData_25;
  MR_Word OldTypeClassInfoRttiData_26;
  MR_Word NewTypeClassRtti_27;
  MR_Word NewTypeClassInfoRttiData_28;
  MR_Word TypeClassInfoRttiData_29;
  MR_Word GlobalData_30;
  MR_Word PseudoTypeInfos_31;
  MR_Word HLDSVarNums_32;
  MR_Word ShortLocns_33;
  MR_Word LongLocns_34;
  MR_Word UserEventVarNums_35;
  MR_Word UserEvents_36;
  MR_Word NoVarLabelLayouts_37;
  MR_Word SVarLabelLayouts_38;
  MR_Word LVarLabelLayouts_39;
  MR_Word InternalLabelToLayoutMap_40;
  MR_Word ProcLabelToLayoutMap_41;
  MR_Word CallSites_42;
  MR_Word CoveragePoints_43;
  MR_Word ProcStatics_44;
  MR_Word ProcHeadVarNums_45;
  MR_Word ProcVarNames_46;
  MR_Word ProcBodyBytecodes_47;
  MR_Word TableIoEntries_48;
  MR_Word TableIoEntryMap_49;
  MR_Word ProcEventLayouts_50;
  MR_Word ExecTraces_51;
  MR_Word ProcLayoutDatas_52;
  MR_Word ModuleLayoutDatas_53;
  MR_Word C_InterfaceInfo_54;
  MR_Word TablingInfoStructs_55;
  MR_Word ClosureLayoutDatas_56;
  MR_Word StaticCellInfo_57;
  MR_Word ScalarCommonCellDatas_58;
  MR_Word VectorCommonCellDatas_59;
  MR_Word AllocSites_60;
  MR_Word AllocIdMap_61;
  MR_Word TSStringTable_62;
  MR_Word RttiDatas_63;
  MR_Word ComplexityProcs_64;
  MR_Word ModuleSymName_65;
  MR_Word C_HeaderCodes0_66;
  MR_Word C_BodyCodes_67;
  MR_Word C_Includes_68;
  MR_Word C_ExportDefns_70;
  MR_String MangledModuleName_71;
  MR_String CModuleName_72;
  MR_Word OptTuple_73;
  MR_Word JustOneCFunc_74;
  MR_Word ChunkedProcs_75;
  MR_Word ChunkedModules_77;
  MR_Word C_IncludeHeaderCodes_78;
  MR_Word DeclGuardStart_79;
  MR_Word DeclGuardEnd_80;
  MR_Word C_LocalHeaderCodes_81;
  MR_Word C_ExportedHeaderCodes_82;
  MR_Word C_HeaderCodes_83;
  MR_Word UserInitPredCNames_84;
  MR_Word UserFinalPredCNames_85;
  MR_Word CFile_86;
  MR_Word TargetCodeSucceeded_87;
  MR_Word Var_111;
  MR_Word Var_114;
  MR_Word Var_115;
  MR_Word Var_116;
  MR_Word Var_117;
  MR_Integer Var_247;
  MR_Box conv1_STATE_VARIABLE_IO_112_112;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_15, &Globals_22);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 72, &Verbose_23);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 82, &Stats_24);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_23, (MR_String) "% Generating layout data...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_12, Verbose_23);
  backend_libs__type_ctor_info__generate_rtti_2_p_0(HLDS_15, &TypeCtorRttiData_25);
  backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(HLDS_15, &OldTypeClassInfoRttiData_26);
  libs__globals__lookup_bool_option_3_p_0(Globals_22, (MR_Integer) 328, &NewTypeClassRtti_27);
  backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(HLDS_15, NewTypeClassRtti_27, &NewTypeClassInfoRttiData_28);
  TypeClassInfoRttiData_29 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), OldTypeClassInfoRttiData_26, NewTypeClassInfoRttiData_28);
  ll_backend__stack_layout__generate_llds_layout_data_26_p_0(HLDS_15, GlobalData0_16, &GlobalData_30, &PseudoTypeInfos_31, &HLDSVarNums_32, &ShortLocns_33, &LongLocns_34, &UserEventVarNums_35, &UserEvents_36, &NoVarLabelLayouts_37, &SVarLabelLayouts_38, &LVarLabelLayouts_39, &InternalLabelToLayoutMap_40, &ProcLabelToLayoutMap_41, &CallSites_42, &CoveragePoints_43, &ProcStatics_44, &ProcHeadVarNums_45, &ProcVarNames_46, &ProcBodyBytecodes_47, &TableIoEntries_48, &TableIoEntryMap_49, &ProcEventLayouts_50, &ExecTraces_51, &ProcLayoutDatas_52, &ModuleLayoutDatas_53);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_12, Verbose_23, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_12, Stats_24);
  top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(HLDS_15, (MR_Integer) 0, &C_InterfaceInfo_54);
  ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(GlobalData_30, &TablingInfoStructs_55);
  ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(GlobalData_30, &ClosureLayoutDatas_56);
  ll_backend__global_data__global_data_get_static_cell_info_2_p_0(GlobalData_30, &StaticCellInfo_57);
  ll_backend__global_data__get_static_cells_3_p_0(StaticCellInfo_57, &ScalarCommonCellDatas_58, &VectorCommonCellDatas_59);
  ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(GlobalData_30, &AllocSites_60, &AllocIdMap_61);
  ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(GlobalData_30, &TSStringTable_62);
  RttiDatas_63 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeCtorRttiData_25, TypeClassInfoRttiData_29);
  hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(HLDS_15, &ComplexityProcs_64);
  ModuleSymName_65 = ((MR_Word) ((MR_hl_field(0, C_InterfaceInfo_54, (MR_Integer) 0))));
  C_HeaderCodes0_66 = ((MR_Word) ((MR_hl_field(0, C_InterfaceInfo_54, (MR_Integer) 1))));
  C_BodyCodes_67 = ((MR_Word) ((MR_hl_field(0, C_InterfaceInfo_54, (MR_Integer) 2))));
  C_Includes_68 = ((MR_Word) ((MR_hl_field(0, C_InterfaceInfo_54, (MR_Integer) 3))));
  C_ExportDefns_70 = ((MR_Word) ((MR_hl_field(0, C_InterfaceInfo_54, (MR_Integer) 5))));
  MangledModuleName_71 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleSymName_65);
  CModuleName_72 = mercury__string__f_43_43_2_f_0(MangledModuleName_71, (MR_String) "_module");
  libs__globals__get_opt_tuple_2_p_0(Globals_22, &OptTuple_73);
  JustOneCFunc_74 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_73, (MR_Integer) 2))) >> 4)) & (MR_Integer) 1);
  Var_247 = ((MR_Integer) ((MR_hl_field(0, OptTuple_73, (MR_Integer) 39))));
  switch (JustOneCFunc_74) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__list__chunk_3_p_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), Procs_17, Var_247, &ChunkedProcs_75);
      break;
    case (MR_Integer) 0:
      {
        ChunkedProcs_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ChunkedProcs_75, 0) = ((MR_Box) (Procs_17));
        MR_hl_field(1, ChunkedProcs_75, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
  }
  top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_3_p_0(CModuleName_72, ChunkedProcs_75, &ChunkedModules_77);
  {
    Var_111 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_111, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[2]));
    MR_hl_field(0, Var_111, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_1));
    MR_hl_field(0, Var_111, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_111, 3) = ((MR_Box) (Globals_22));
  }
  mercury__list__map_foldl_5_p_2((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), (MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_111, C_Includes_68, &C_IncludeHeaderCodes_78, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_112_112);
  top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(ModuleSymName_65, &DeclGuardStart_79, &DeclGuardEnd_80);
  mercury__list__filter_4_p_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), (MR_Word) (&top_level__mercury_compile_llds_back_end_scalar_common_1[5]), C_HeaderCodes0_66, &C_LocalHeaderCodes_81, &C_ExportedHeaderCodes_82);
  {
    Var_116 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_116, 0) = ((MR_Box) (DeclGuardStart_79));
    MR_hl_field(1, Var_116, 1) = ((MR_Box) (C_ExportedHeaderCodes_82));
  }
  {
    Var_117 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_117, 0) = ((MR_Box) (DeclGuardEnd_80));
    MR_hl_field(1, Var_117, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Var_115 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), Var_116, Var_117);
  Var_114 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), C_LocalHeaderCodes_81, Var_115);
  C_HeaderCodes_83 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), C_IncludeHeaderCodes_78, Var_114);
  hlds__hlds_module__module_info_user_init_pred_target_names_2_p_0(HLDS_15, &UserInitPredCNames_84);
  hlds__hlds_module__module_info_user_final_pred_target_names_2_p_0(HLDS_15, &UserFinalPredCNames_85);
  {
    CFile_86 = (MR_Word) MR_new_object(MR_Word, (39 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CFile_86, 0) = ((MR_Box) (ModuleSymName_65));
    MR_hl_field(0, CFile_86, 1) = ((MR_Box) (C_HeaderCodes_83));
    MR_hl_field(0, CFile_86, 2) = ((MR_Box) (C_BodyCodes_67));
    MR_hl_field(0, CFile_86, 3) = ((MR_Box) (C_ExportDefns_70));
    MR_hl_field(0, CFile_86, 4) = ((MR_Box) (TablingInfoStructs_55));
    MR_hl_field(0, CFile_86, 5) = ((MR_Box) (ScalarCommonCellDatas_58));
    MR_hl_field(0, CFile_86, 6) = ((MR_Box) (VectorCommonCellDatas_59));
    MR_hl_field(0, CFile_86, 7) = ((MR_Box) (RttiDatas_63));
    MR_hl_field(0, CFile_86, 8) = ((MR_Box) (PseudoTypeInfos_31));
    MR_hl_field(0, CFile_86, 9) = ((MR_Box) (HLDSVarNums_32));
    MR_hl_field(0, CFile_86, 10) = ((MR_Box) (ShortLocns_33));
    MR_hl_field(0, CFile_86, 11) = ((MR_Box) (LongLocns_34));
    MR_hl_field(0, CFile_86, 12) = ((MR_Box) (UserEventVarNums_35));
    MR_hl_field(0, CFile_86, 13) = ((MR_Box) (UserEvents_36));
    MR_hl_field(0, CFile_86, 14) = ((MR_Box) (NoVarLabelLayouts_37));
    MR_hl_field(0, CFile_86, 15) = ((MR_Box) (SVarLabelLayouts_38));
    MR_hl_field(0, CFile_86, 16) = ((MR_Box) (LVarLabelLayouts_39));
    MR_hl_field(0, CFile_86, 17) = ((MR_Box) (InternalLabelToLayoutMap_40));
    MR_hl_field(0, CFile_86, 18) = ((MR_Box) (ProcLabelToLayoutMap_41));
    MR_hl_field(0, CFile_86, 19) = ((MR_Box) (CallSites_42));
    MR_hl_field(0, CFile_86, 20) = ((MR_Box) (CoveragePoints_43));
    MR_hl_field(0, CFile_86, 21) = ((MR_Box) (ProcStatics_44));
    MR_hl_field(0, CFile_86, 22) = ((MR_Box) (ProcHeadVarNums_45));
    MR_hl_field(0, CFile_86, 23) = ((MR_Box) (ProcVarNames_46));
    MR_hl_field(0, CFile_86, 24) = ((MR_Box) (ProcBodyBytecodes_47));
    MR_hl_field(0, CFile_86, 25) = ((MR_Box) (TSStringTable_62));
    MR_hl_field(0, CFile_86, 26) = ((MR_Box) (TableIoEntries_48));
    MR_hl_field(0, CFile_86, 27) = ((MR_Box) (TableIoEntryMap_49));
    MR_hl_field(0, CFile_86, 28) = ((MR_Box) (ProcEventLayouts_50));
    MR_hl_field(0, CFile_86, 29) = ((MR_Box) (ExecTraces_51));
    MR_hl_field(0, CFile_86, 30) = ((MR_Box) (ProcLayoutDatas_52));
    MR_hl_field(0, CFile_86, 31) = ((MR_Box) (ModuleLayoutDatas_53));
    MR_hl_field(0, CFile_86, 32) = ((MR_Box) (ClosureLayoutDatas_56));
    MR_hl_field(0, CFile_86, 33) = ((MR_Box) (AllocSites_60));
    MR_hl_field(0, CFile_86, 34) = ((MR_Box) (AllocIdMap_61));
    MR_hl_field(0, CFile_86, 35) = ((MR_Box) (ChunkedModules_77));
    MR_hl_field(0, CFile_86, 36) = ((MR_Box) (UserInitPredCNames_84));
    MR_hl_field(0, CFile_86, 37) = ((MR_Box) (UserFinalPredCNames_85));
    MR_hl_field(0, CFile_86, 38) = ((MR_Box) (ComplexityProcs_64));
  }
  top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(Globals_22, CFile_86, &TargetCodeSucceeded_87);
  switch (TargetCodeSucceeded_87) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Succeeded_19 = (MR_Integer) 0;
        *FactTableObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word C_ExportDecls_92 = ((MR_Word) ((MR_hl_field(0, C_InterfaceInfo_54, (MR_Integer) 4))));

        backend_libs__export__produce_header_file_5_p_0(HLDS_15, C_ExportDecls_92, ModuleName_18);
        switch (OpModeCodeGen_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word CompileSucceeded_94;
              MR_Word FactTableBaseFiles_95;
              MR_Word FactTableCompileSucceededs_96;
              MR_Word Var_122;
              MR_Word Var_124;
              MR_Box conv4_STATE_VARIABLE_IO_123_123;

              top_level__mercury_compile_llds_back_end__llds_c_to_obj_7_p_0(Globals_22, ProgressStream_12, ErrorStream_13, ModuleName_18, &CompileSucceeded_94);
              hlds__hlds_module__module_info_get_fact_table_file_names_2_p_0(HLDS_15, &FactTableBaseFiles_95);
              {
                Var_122 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_122, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[1]));
                MR_hl_field(0, Var_122, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_11_p_0_3));
                MR_hl_field(0, Var_122, 2) = ((MR_Box) ((MR_Integer) 3));
                MR_hl_field(0, Var_122, 3) = ((MR_Box) (Globals_22));
                MR_hl_field(0, Var_122, 4) = ((MR_Box) (ProgressStream_12));
                MR_hl_field(0, Var_122, 5) = ((MR_Box) (ErrorStream_13));
              }
              mercury__list__map2_foldl_6_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_122, FactTableBaseFiles_95, FactTableObjFiles_20, &FactTableCompileSucceededs_96, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_123_123);
              {
                Var_124 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_124, 0) = ((MR_Box) (CompileSucceeded_94));
                MR_hl_field(1, Var_124, 1) = ((MR_Box) (FactTableCompileSucceededs_96));
              }
              *Succeeded_19 = libs__maybe_util__and_list_1_f_0(Var_124);
              parse_tree__module_cmds__maybe_set_exit_status_3_p_0(*Succeeded_19);
            }
            break;
          case (MR_Integer) 0:
            {
              *Succeeded_19 = (MR_Integer) 1;
              *FactTableObjFiles_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_7_p_0(
  MR_Word Globals_8,
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word ModuleName_11,
  MR_Word * Succeeded_12)
{
  MR_Word LinkedTargetType_14;
  MR_Word PIC_15;
  MR_Word ObjOtherExt_16;
  MR_String C_File_17;
  MR_String O_File_18;
  MR_Word Var_29;

  backend_libs__compile_target_code__get_linked_target_type_2_p_0(Globals_8, &LinkedTargetType_14);
  backend_libs__compile_target_code__get_object_code_type_3_p_0(Globals_8, LinkedTargetType_14, &PIC_15);
  backend_libs__compile_target_code__pic_object_file_extension_3_p_0(Globals_8, PIC_15, &ObjOtherExt_16);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_c_to_obj\'/7", (MR_Integer) 1, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_llds_back_end_scalar_common_3[2])), ModuleName_11, &C_File_17);
  {
    Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_29, 0) = ((MR_Box) (ObjOtherExt_16));
  }
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_8, (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_c_to_obj\'/7", (MR_Integer) 0, Var_29, ModuleName_11, &O_File_18);
  backend_libs__compile_target_code__do_compile_c_file_9_p_0(Globals_8, ProgressStream_9, ErrorStream_10, PIC_15, C_File_17, O_File_18, Succeeded_12);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
  MR_Word Globals_6,
  MR_Word LLDS0_7,
  MR_Word * Succeeded_8)
{
  MR_Word LLDS_10;

  ll_backend__transform_llds__transform_llds_3_p_0(Globals_6, LLDS0_7, &LLDS_10);
  ll_backend__llds_out__llds_out_file__output_llds_5_p_0(Globals_6, LLDS_10, Succeeded_8);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_3_p_0(
  MR_String ModName_4,
  MR_Word ChunkList_5,
  MR_Word * Modules_6)
{
  top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_loop_4_p_0(ModName_4, (MR_Integer) 0, ChunkList_5, Modules_6);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_loop_4_p_0(
  MR_String HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Chunk_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Chunks_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Module_11;
    MR_Word Modules_12;
    MR_String NumString_13;
    MR_String Var_14;
    MR_Integer Var_15;

    mercury__string__int_to_string_2_p_0(HeadVar__2_2, &NumString_13);
    Var_14 = mercury__string__f_43_43_2_f_0(HeadVar__1_1, NumString_13);
    {
      Module_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Module_11, 0) = ((MR_Box) (Var_14));
      MR_hl_field(0, Module_11, 1) = ((MR_Box) (Chunk_9));
    }
    Var_15 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    top_level__mercury_compile_llds_back_end__proc_chunks_to_c_modules_loop_4_p_0(HeadVar__1_1, Var_15, Chunks_10, &Modules_12);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__4_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Module_11));
      MR_hl_field(1, base, 1) = ((MR_Box) (Modules_12));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
  MR_Word ModuleName_4,
  MR_Word * StartGuard_5,
  MR_Word * EndGuard_6)
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
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (Start_8));
  }
  Var_19 = mercury__term_context__dummy_context_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *StartGuard_5 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_18));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_19));
  }
  Var_23 = mercury__term_context__dummy_context_0_f_0();
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *EndGuard_6 = base;
    MR_hl_field(0, base, 0) = (MR_Box) (((((MR_Unsigned) ((MR_Integer) 0) << 1)) | (MR_Unsigned) ((MR_Integer) 1)));
    MR_hl_field(0, base, 1) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[0]));
    MR_hl_field(0, base, 2) = ((MR_Box) (Var_23));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
  MR_Word HLDS_4,
  MR_Word UseForeignLanguage_5,
  MR_Word * ForeignInterfaceInfo_6)
{
  MR_Word ModuleName_7;
  MR_Word ForeignSelfImport_8;
  MR_Word ForeignDeclCodeUserCord_9;
  MR_Word ForeignDeclCodeAuxCord_10;
  MR_Word ForeignBodyCodeCord_11;
  MR_Word CJCsEFIMs0_12;
  MR_Word ForeignDeclCodes_13;
  MR_Word ForeignBodyCodes_14;
  MR_Word CJCsEFIMs_15;
  MR_Word WantedForeignDeclCodes_16;
  MR_Word WantedForeignBodyCodes_18;
  MR_Word WantedForeignImports_20;
  MR_Word ForeignExportDecls_21;
  MR_Word ForeignExportDefns_22;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Word _OtherDeclCodes_17;
  MR_Word _OtherBodyCodes_19;

  hlds__hlds_module__module_info_get_name_2_p_0(HLDS_4, &ModuleName_7);
  {
    ForeignSelfImport_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ForeignSelfImport_8, 0) = (MR_Box) ((MR_Unsigned) (UseForeignLanguage_5));
    MR_hl_field(0, ForeignSelfImport_8, 1) = ((MR_Box) (ModuleName_7));
  }
  hlds__hlds_module__module_info_get_foreign_decl_codes_user_2_p_0(HLDS_4, &ForeignDeclCodeUserCord_9);
  hlds__hlds_module__module_info_get_foreign_decl_codes_aux_2_p_0(HLDS_4, &ForeignDeclCodeAuxCord_10);
  hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(HLDS_4, &ForeignBodyCodeCord_11);
  hlds__hlds_module__module_info_get_c_j_cs_fims_2_p_0(HLDS_4, &CJCsEFIMs0_12);
  Var_23 = mercury__cord__f_43_43_2_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), ForeignDeclCodeUserCord_9, ForeignDeclCodeAuxCord_10);
  ForeignDeclCodes_13 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0), Var_23);
  ForeignBodyCodes_14 = mercury__cord__list_1_f_0((MR_Word) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0), ForeignBodyCodeCord_11);
  parse_tree__prog_data_foreign__add_fim_spec_3_p_0(ForeignSelfImport_8, CJCsEFIMs0_12, &CJCsEFIMs_15);
  backend_libs__foreign__filter_decls_4_p_0(UseForeignLanguage_5, ForeignDeclCodes_13, &WantedForeignDeclCodes_16, &_OtherDeclCodes_17);
  backend_libs__foreign__filter_bodys_4_p_0(UseForeignLanguage_5, ForeignBodyCodes_14, &WantedForeignBodyCodes_18, &_OtherBodyCodes_19);
  Var_24 = parse_tree__prog_data_foreign__get_lang_fim_specs_2_f_0(CJCsEFIMs_15, UseForeignLanguage_5);
  WantedForeignImports_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_fim_spec_0), Var_24);
  backend_libs__export__get_foreign_export_decls_2_p_0(HLDS_4, &ForeignExportDecls_21);
  backend_libs__export__get_foreign_export_defns_2_p_0(HLDS_4, &ForeignExportDefns_22);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *ForeignInterfaceInfo_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ModuleName_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (WantedForeignDeclCodes_16));
    MR_hl_field(0, base, 2) = ((MR_Box) (WantedForeignBodyCodes_18));
    MR_hl_field(0, base, 3) = ((MR_Box) (WantedForeignImports_20));
    MR_hl_field(0, base, 4) = ((MR_Box) (ForeignExportDecls_21));
    MR_hl_field(0, base, 5) = ((MR_Box) (ForeignExportDefns_22));
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word STATE_VARIABLE_HLDS_0_33,
  MR_Word * STATE_VARIABLE_HLDS_34,
  MR_Word * STATE_VARIABLE_GlobalData_35,
  MR_Word * LLDS_15,
  MR_Word STATE_VARIABLE_DumpInfo_0_36,
  MR_Word * STATE_VARIABLE_DumpInfo_37)
{
  MR_Word ModuleName_18;
  MR_Word Globals_19;
  MR_Word OptUnboxFloat_20;
  MR_Word OptTuple_21;
  MR_Word DoCommonData_22;
  MR_Word UnboxFloats_23;
  MR_Word OptUnboxInt64s_24;
  MR_Word UnboxInt64s_25;
  MR_Word StaticCellInfo0_26;
  MR_Integer TSStringTableSize_27;
  MR_Word TSRevStringTable_28;
  MR_Word Verbose_29;
  MR_Word Stats_30;
  MR_Word TradPasses_31;
  MR_Word Specs_32;
  MR_Word STATE_VARIABLE_GlobalData_42_42;
  MR_Word STATE_VARIABLE_HLDS_45_45;
  MR_Word STATE_VARIABLE_DumpInfo_49_49;
  MR_Word STATE_VARIABLE_GlobalData_52_52;

  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_0_33, &ModuleName_18);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_33, &Globals_19);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 288, &OptUnboxFloat_20);
  libs__globals__get_opt_tuple_2_p_0(Globals_19, &OptTuple_21);
  DoCommonData_22 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_21, (MR_Integer) 1))) & (MR_Integer) 1);
  switch (OptUnboxFloat_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxFloats_23 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UnboxFloats_23 = (MR_Integer) 0;
      break;
  }
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 289, &OptUnboxInt64s_24);
  switch (OptUnboxInt64s_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      UnboxInt64s_25 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      UnboxInt64s_25 = (MR_Integer) 0;
      break;
  }
  StaticCellInfo0_26 = ll_backend__global_data__init_static_cell_info_4_f_0(ModuleName_18, UnboxFloats_23, UnboxInt64s_25, DoCommonData_22);
  hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(STATE_VARIABLE_HLDS_0_33, &TSStringTableSize_27, &TSRevStringTable_28);
  ll_backend__global_data__global_data_init_4_p_0(StaticCellInfo0_26, TSStringTableSize_27, TSRevStringTable_28, &STATE_VARIABLE_GlobalData_42_42);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 72, &Verbose_29);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 82, &Stats_30);
  top_level__mercury_compile_llds_back_end__map_args_to_regs_7_p_0(ProgressStream_11, Verbose_29, Stats_30, STATE_VARIABLE_HLDS_0_33, &STATE_VARIABLE_HLDS_45_45);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_45_45, (MR_Integer) 305, (MR_String) "args_to_regs", STATE_VARIABLE_DumpInfo_0_36, &STATE_VARIABLE_DumpInfo_49_49);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 346, &TradPasses_31);
  ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(STATE_VARIABLE_HLDS_45_45, STATE_VARIABLE_GlobalData_42_42, &STATE_VARIABLE_GlobalData_52_52);
  switch (TradPasses_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_45_45, STATE_VARIABLE_HLDS_34, LLDS_15, STATE_VARIABLE_GlobalData_52_52, STATE_VARIABLE_GlobalData_35, (MR_Word) ((MR_Unsigned) 0U), &Specs_32, STATE_VARIABLE_DumpInfo_49_49, STATE_VARIABLE_DumpInfo_37);
      break;
    case (MR_Integer) 1:
      {
        top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_45_45, STATE_VARIABLE_HLDS_34, LLDS_15, STATE_VARIABLE_GlobalData_52_52, STATE_VARIABLE_GlobalData_35, (MR_Word) ((MR_Unsigned) 0U), &Specs_32);
        *STATE_VARIABLE_DumpInfo_37 = STATE_VARIABLE_DumpInfo_49_49;
      }
      break;
  }
  parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_12, Globals_19, Specs_32);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word * LLDS_11,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  MR_Word PredIds_14;
  MR_Word Globals_15;
  MR_Word OptTuple_16;
  MR_Word ProcDups_17;
  MR_Word OrderedPredIds_18;
  MR_Word MaybeDupProcMap_19;
  MR_Word ProcDepInfo_21;
  MR_Word SCCMap_22;
  MR_Word ConstStructMap_23;
  MR_Word CProcsCord_24;
  MR_Word STATE_VARIABLE_HLDS_33_33;
  MR_Word STATE_VARIABLE_GlobalData_34_34;
  MR_Word Var_36;

  hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(STATE_VARIABLE_HLDS_0_25, &PredIds_14);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_25, &Globals_15);
  libs__globals__get_opt_tuple_2_p_0(Globals_15, &OptTuple_16);
  ProcDups_17 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_16, (MR_Integer) 2))) >> 10)) & (MR_Integer) 1);
  switch (ProcDups_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        OrderedPredIds_18 = PredIds_14;
        MaybeDupProcMap_19 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word PredDepInfo_20;
        MR_Word Var_32;

        PredDepInfo_20 = hlds__hlds_dependency_graph__build_pred_dependency_graph_3_f_0(STATE_VARIABLE_HLDS_0_25, PredIds_14, (MR_Integer) 1);
        OrderedPredIds_18 = libs__dependency_graph__dependency_info_get_condensed_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), PredDepInfo_20);
        Var_32 = mercury__map__init_0_f_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0));
        {
          MaybeDupProcMap_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeDupProcMap_19, 0) = ((MR_Box) (Var_32));
        }
      }
      break;
  }
  hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_25, &STATE_VARIABLE_HLDS_33_33, &ProcDepInfo_21);
  SCCMap_22 = libs__dependency_graph__dependency_info_make_scc_map_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), ProcDepInfo_21);
  ll_backend__unify_gen_construct__generate_const_structs_4_p_0(STATE_VARIABLE_HLDS_33_33, &ConstStructMap_23, STATE_VARIABLE_GlobalData_0_27, &STATE_VARIABLE_GlobalData_34_34);
  Var_36 = mercury__cord__init_0_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0));
  top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_13_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_33_33, STATE_VARIABLE_HLDS_26, ConstStructMap_23, SCCMap_22, OrderedPredIds_18, MaybeDupProcMap_19, Var_36, &CProcsCord_24, STATE_VARIABLE_GlobalData_34_34, STATE_VARIABLE_GlobalData_28, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  *LLDS_11 = mercury__cord__list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), CProcsCord_24);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word STATE_VARIABLE_HLDS_0_2,
  MR_Word * STATE_VARIABLE_HLDS_3,
  MR_Word ConstStructMap_4,
  MR_Word SCCMap_5,
  MR_Word HeadVar__6_6,
  MR_Word STATE_VARIABLE_MaybeDupProcMap_0_7,
  MR_Word STATE_VARIABLE_CProcsCord_0_8,
  MR_Word * STATE_VARIABLE_CProcsCord_9,
  MR_Word STATE_VARIABLE_GlobalData_0_10,
  MR_Word * STATE_VARIABLE_GlobalData_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
      *STATE_VARIABLE_GlobalData_11 = STATE_VARIABLE_GlobalData_0_10;
      *STATE_VARIABLE_CProcsCord_9 = STATE_VARIABLE_CProcsCord_0_8;
      *STATE_VARIABLE_HLDS_3 = STATE_VARIABLE_HLDS_0_2;
    }
    else
    {
      MR_Word PredId_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
      MR_Word PredIds_35 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_HLDS_49_49;
      MR_Word STATE_VARIABLE_MaybeDupProcMap_50_50;
      MR_Word STATE_VARIABLE_CProcsCord_51_51;
      MR_Word STATE_VARIABLE_GlobalData_52_52;
      MR_Word STATE_VARIABLE_Specs_53_53;
      MR_Word PredInfo_54;
      MR_Word ProcIds_55;
      MR_Word next_value_of_STATE_VARIABLE_HLDS_0_2;
      MR_Word next_value_of_HeadVar__6_6;
      MR_Word next_value_of_STATE_VARIABLE_MaybeDupProcMap_0_7;
      MR_Word next_value_of_STATE_VARIABLE_CProcsCord_0_8;
      MR_Word next_value_of_STATE_VARIABLE_GlobalData_0_10;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_12;

      hlds__hlds_module__module_info_pred_info_3_p_0(STATE_VARIABLE_HLDS_0_2, PredId_34, &PredInfo_54);
      ProcIds_55 = hlds__hlds_pred__pred_info_valid_non_imported_procids_1_f_0(PredInfo_54);
      if ((ProcIds_55 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_HLDS_49_49 = STATE_VARIABLE_HLDS_0_2;
        STATE_VARIABLE_MaybeDupProcMap_50_50 = STATE_VARIABLE_MaybeDupProcMap_0_7;
        STATE_VARIABLE_CProcsCord_51_51 = STATE_VARIABLE_CProcsCord_0_8;
        STATE_VARIABLE_GlobalData_52_52 = STATE_VARIABLE_GlobalData_0_10;
        STATE_VARIABLE_Specs_53_53 = STATE_VARIABLE_Specs_0_12;
      }
      else
      {
        MR_Word Globals0_58;
        MR_Word Verbose_59;
        MR_Word IdCProcs_66;
        MR_Word CProcs_69;
        MR_Word Stats_72;
        MR_Word Var_83;
        MR_Word PredModule_61;
        MR_String PredName_62;
        MR_Integer PredArity_63;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_2, &Globals0_58);
        libs__globals__lookup_bool_option_3_p_0(Globals0_58, (MR_Integer) 72, &Verbose_59);
        switch (Verbose_59) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String PredStr_60;

              PredStr_60 = hlds__hlds_out__hlds_out_util__pred_id_to_user_string_2_f_0(STATE_VARIABLE_HLDS_0_2, PredId_34);
              mercury__io__write_string_4_p_0(ProgressStream_1, (MR_String) "% Generating code for ");
              mercury__io__write_string_4_p_0(ProgressStream_1, PredStr_60);
              mercury__io__write_string_4_p_0(ProgressStream_1, (MR_String) "\n");
              libs__file_util__maybe_flush_output_4_p_0(ProgressStream_1, Verbose_59);
            }
            break;
        }
        PredModule_61 = hlds__hlds_pred__pred_info_module_1_f_0(PredInfo_54);
        PredName_62 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_54);
        PredArity_63 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(PredInfo_54);
        succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_61, PredName_62, PredArity_63);
        if (succeeded)
        {
          MR_Word TraceLevel_64;
          MR_Word Globals1_65;
          MR_Word Globals2_67;
          MR_Word Globals_68;
          MR_Word STATE_VARIABLE_HLDS_62_81;
          MR_Word STATE_VARIABLE_HLDS_64_82;

          libs__globals__get_trace_level_2_p_0(Globals0_58, &TraceLevel_64);
          libs__globals__set_trace_level_none_2_p_0(Globals0_58, &Globals1_65);
          hlds__hlds_module__module_info_set_globals_3_p_0(Globals1_65, STATE_VARIABLE_HLDS_0_2, &STATE_VARIABLE_HLDS_62_81);
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_13_p_0(ProgressStream_1, ConstStructMap_4, SCCMap_5, PredId_34, PredInfo_54, ProcIds_55, &IdCProcs_66, STATE_VARIABLE_GlobalData_0_10, &STATE_VARIABLE_GlobalData_52_52, STATE_VARIABLE_HLDS_62_81, &STATE_VARIABLE_HLDS_64_82, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_53_53);
          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_64_82, &Globals2_67);
          libs__globals__set_trace_level_3_p_0(TraceLevel_64, Globals2_67, &Globals_68);
          hlds__hlds_module__module_info_set_globals_3_p_0(Globals_68, STATE_VARIABLE_HLDS_64_82, &STATE_VARIABLE_HLDS_49_49);
        }
        else
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_13_p_0(ProgressStream_1, ConstStructMap_4, SCCMap_5, PredId_34, PredInfo_54, ProcIds_55, &IdCProcs_66, STATE_VARIABLE_GlobalData_0_10, &STATE_VARIABLE_GlobalData_52_52, STATE_VARIABLE_HLDS_0_2, &STATE_VARIABLE_HLDS_49_49, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_53_53);
        if ((STATE_VARIABLE_MaybeDupProcMap_0_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__assoc_list__values_2_p_0((MR_Word) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0), (MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), IdCProcs_66, &CProcs_69);
          STATE_VARIABLE_MaybeDupProcMap_50_50 = STATE_VARIABLE_MaybeDupProcMap_0_7;
        }
        else
        {
          MR_Word DupProcMap0_70 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_MaybeDupProcMap_0_7, (MR_Integer) 0))));
          MR_Word DupProcMap_71;

          ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(IdCProcs_66, &CProcs_69, DupProcMap0_70, &DupProcMap_71);
          {
            STATE_VARIABLE_MaybeDupProcMap_50_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_MaybeDupProcMap_50_50, 0) = ((MR_Box) (DupProcMap_71));
          }
        }
        Var_83 = mercury__cord__from_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), CProcs_69);
        STATE_VARIABLE_CProcsCord_51_51 = mercury__cord__f_43_43_2_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0), STATE_VARIABLE_CProcsCord_0_8, Var_83);
        libs__globals__lookup_bool_option_3_p_0(Globals0_58, (MR_Integer) 82, &Stats_72);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_1, Verbose_59, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_1, Stats_72);
      }
      // direct tailcall eliminated
      ;
      next_value_of_STATE_VARIABLE_HLDS_0_2 = STATE_VARIABLE_HLDS_49_49;
      next_value_of_HeadVar__6_6 = PredIds_35;
      next_value_of_STATE_VARIABLE_MaybeDupProcMap_0_7 = STATE_VARIABLE_MaybeDupProcMap_50_50;
      next_value_of_STATE_VARIABLE_CProcsCord_0_8 = STATE_VARIABLE_CProcsCord_51_51;
      next_value_of_STATE_VARIABLE_GlobalData_0_10 = STATE_VARIABLE_GlobalData_52_52;
      next_value_of_STATE_VARIABLE_Specs_0_12 = STATE_VARIABLE_Specs_53_53;
      STATE_VARIABLE_HLDS_0_2 = next_value_of_STATE_VARIABLE_HLDS_0_2;
      HeadVar__6_6 = next_value_of_HeadVar__6_6;
      STATE_VARIABLE_MaybeDupProcMap_0_7 = next_value_of_STATE_VARIABLE_MaybeDupProcMap_0_7;
      STATE_VARIABLE_CProcsCord_0_8 = next_value_of_STATE_VARIABLE_CProcsCord_0_8;
      STATE_VARIABLE_GlobalData_0_10 = next_value_of_STATE_VARIABLE_GlobalData_0_10;
      STATE_VARIABLE_Specs_0_12 = next_value_of_STATE_VARIABLE_Specs_0_12;
      continue;
    }
    break;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_13_p_0(
  MR_Word ProgressStream_1,
  MR_Word ConstStructMap_2,
  MR_Word SCCMap_3,
  MR_Word PredId_4,
  MR_Word PredInfo_5,
  MR_Word HeadVar__6_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_GlobalData_0_8,
  MR_Word * STATE_VARIABLE_GlobalData_9,
  MR_Word STATE_VARIABLE_HLDS_0_10,
  MR_Word * STATE_VARIABLE_HLDS_11,
  MR_Word STATE_VARIABLE_Specs_0_12,
  MR_Word * STATE_VARIABLE_Specs_13)
{
  if ((HeadVar__6_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Specs_13 = STATE_VARIABLE_Specs_0_12;
    *STATE_VARIABLE_HLDS_11 = STATE_VARIABLE_HLDS_0_10;
    *STATE_VARIABLE_GlobalData_9 = STATE_VARIABLE_GlobalData_0_8;
  }
  else
  {
    MR_Integer ProcId_33 = ((MR_Integer) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 0))));
    MR_Word ProcIds_34 = ((MR_Word) ((MR_hl_field(1, HeadVar__6_6, (MR_Integer) 1))));
    MR_Word ProcLabel_35;
    MR_Word CProc_36;
    MR_Word ProcLabelsCProcs_37;
    MR_Word ProcTable_41;
    MR_Word ProcInfo_42;
    MR_Word Var_49;
    MR_Word STATE_VARIABLE_GlobalData_50_50;
    MR_Word STATE_VARIABLE_HLDS_51_51;
    MR_Word STATE_VARIABLE_Specs_52_52;
    MR_Box conv0_ProcInfo_42;

    ProcLabel_35 = backend_libs__proc_label__make_proc_label_3_f_0(STATE_VARIABLE_HLDS_0_10, PredId_4, ProcId_33);
    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(PredInfo_5, &ProcTable_41);
    mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0), ProcTable_41, ((MR_Box) (ProcId_33)), &conv0_ProcInfo_42);
    ProcInfo_42 = ((MR_Word) (conv0_ProcInfo_42));
    top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_14_p_0(ProgressStream_1, ConstStructMap_2, SCCMap_3, PredId_4, ProcId_33, PredInfo_5, ProcInfo_42, &CProc_36, STATE_VARIABLE_GlobalData_0_8, &STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_HLDS_0_10, &STATE_VARIABLE_HLDS_51_51, STATE_VARIABLE_Specs_0_12, &STATE_VARIABLE_Specs_52_52);
    {
      Var_49 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_49, 0) = ((MR_Box) (ProcLabel_35));
      MR_hl_field(0, Var_49, 1) = ((MR_Box) (CProc_36));
    }
    top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_13_p_0(ProgressStream_1, ConstStructMap_2, SCCMap_3, PredId_4, PredInfo_5, ProcIds_34, &ProcLabelsCProcs_37, STATE_VARIABLE_GlobalData_50_50, STATE_VARIABLE_GlobalData_9, STATE_VARIABLE_HLDS_51_51, STATE_VARIABLE_HLDS_11, STATE_VARIABLE_Specs_52_52, STATE_VARIABLE_Specs_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__7_7 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Var_49));
      MR_hl_field(1, base, 1) = ((MR_Box) (ProcLabelsCProcs_37));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_14_p_0(
  MR_Word ProgressStream_15,
  MR_Word ConstStructMap_16,
  MR_Word SCCMap_17,
  MR_Word PredId_18,
  MR_Integer ProcId_19,
  MR_Word PredInfo_20,
  MR_Word STATE_VARIABLE_ProcInfo_0_46,
  MR_Word * CProc_22,
  MR_Word STATE_VARIABLE_GlobalData_0_47,
  MR_Word * STATE_VARIABLE_GlobalData_48,
  MR_Word STATE_VARIABLE_HLDS_0_49,
  MR_Word * STATE_VARIABLE_HLDS_50,
  MR_Word STATE_VARIABLE_Specs_0_51,
  MR_Word * STATE_VARIABLE_Specs_52)
{
  MR_bool succeeded;
  MR_Word Globals_26;
  MR_Word OptTuple_27;
  MR_Word SavedVarsConst_28;
  MR_Word PredProcId_29;
  MR_Word SavedVarsCell_30;
  MR_Word FollowCode_31;
  MR_Word SimplifyTasks0_32;
  MR_Word SimpList0_33;
  MR_Word ConstProp_34;
  MR_Word DeepProf_35;
  MR_Word TSWProf_36;
  MR_Word TSCProf_37;
  MR_Word ProfTrans_38;
  MR_Word SimpList1_39;
  MR_Word SimpList_40;
  MR_Word SimplifyTasks_41;
  MR_Word CProc0_43;
  MR_Word Optimize_44;
  MR_Word STATE_VARIABLE_ProcInfo_53_53;
  MR_Word STATE_VARIABLE_HLDS_54_54;
  MR_Word STATE_VARIABLE_ProcInfo_55_55;
  MR_Word STATE_VARIABLE_HLDS_56_56;
  MR_Word STATE_VARIABLE_ProcInfo_57_57;
  MR_Word STATE_VARIABLE_HLDS_58_58;
  MR_Word Var_63;
  MR_Word Var_64;
  MR_Word Var_65;
  MR_Word Var_70;
  MR_Word Var_75;
  MR_Word STATE_VARIABLE_ProcInfo_77_77;
  MR_Word STATE_VARIABLE_ProcInfo_81_81;
  MR_Word STATE_VARIABLE_ProcInfo_85_85;
  MR_Word STATE_VARIABLE_ProcInfo_90_90;
  MR_Word STATE_VARIABLE_ProcInfo_95_95;
  MR_Word STATE_VARIABLE_GlobalData_99_99;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_49, &Globals_26);
  libs__globals__get_opt_tuple_2_p_0(Globals_26, &OptTuple_27);
  SavedVarsConst_28 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_27, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
  SavedVarsCell_30 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_27, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
  FollowCode_31 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_27, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
  {
    PredProcId_29 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, PredProcId_29, 0) = ((MR_Box) (PredId_18));
    MR_hl_field(0, PredProcId_29, 1) = ((MR_Box) (ProcId_19));
  }
  switch (SavedVarsConst_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_ProcInfo_53_53 = STATE_VARIABLE_ProcInfo_0_46;
        STATE_VARIABLE_HLDS_54_54 = STATE_VARIABLE_HLDS_0_49;
      }
      break;
    case (MR_Integer) 0:
      ll_backend__saved_vars__saved_vars_proc_6_p_0(ProgressStream_15, PredProcId_29, STATE_VARIABLE_ProcInfo_0_46, &STATE_VARIABLE_ProcInfo_53_53, STATE_VARIABLE_HLDS_0_49, &STATE_VARIABLE_HLDS_54_54);
      break;
  }
  switch (SavedVarsCell_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_ProcInfo_55_55 = STATE_VARIABLE_ProcInfo_53_53;
        STATE_VARIABLE_HLDS_56_56 = STATE_VARIABLE_HLDS_54_54;
      }
      break;
    case (MR_Integer) 0:
      ll_backend__stack_opt__stack_opt_cell_5_p_0(PredProcId_29, STATE_VARIABLE_ProcInfo_53_53, &STATE_VARIABLE_ProcInfo_55_55, STATE_VARIABLE_HLDS_54_54, &STATE_VARIABLE_HLDS_56_56);
      break;
  }
  switch (FollowCode_31) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        STATE_VARIABLE_ProcInfo_57_57 = STATE_VARIABLE_ProcInfo_55_55;
        STATE_VARIABLE_HLDS_58_58 = STATE_VARIABLE_HLDS_56_56;
      }
      break;
    case (MR_Integer) 0:
      ll_backend__follow_code__move_follow_code_in_proc_5_p_0(PredProcId_29, STATE_VARIABLE_ProcInfo_55_55, &STATE_VARIABLE_ProcInfo_57_57, STATE_VARIABLE_HLDS_56_56, &STATE_VARIABLE_HLDS_58_58);
      break;
  }
  check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0(Globals_26, (MR_Integer) 0, &SimplifyTasks0_32);
  SimpList0_33 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(SimplifyTasks0_32);
  ConstProp_34 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_27, (MR_Integer) 0))) >> 20)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 244, &DeepProf_35);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 261, &TSWProf_36);
  libs__globals__lookup_bool_option_3_p_0(Globals_26, (MR_Integer) 262, &TSCProf_37);
  {
    Var_65 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_65, 0) = ((MR_Box) (TSCProf_37));
    MR_hl_field(1, Var_65, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_64, 0) = ((MR_Box) (TSWProf_36));
    MR_hl_field(1, Var_64, 1) = ((MR_Box) (Var_65));
  }
  {
    Var_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_63, 0) = ((MR_Box) (DeepProf_35));
    MR_hl_field(1, Var_63, 1) = ((MR_Box) (Var_64));
  }
  ProfTrans_38 = mercury__bool__or_list_1_f_0(Var_63);
  succeeded = (ConstProp_34 == (MR_Integer) 0);
  if (succeeded)
    succeeded = (ProfTrans_38 == (MR_Integer) 0);
  if (succeeded)
    mercury__list__cons_3_p_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), ((MR_Box) ((MR_Integer) 11)), SimpList0_33, &SimpList1_39);
  else
    SimpList1_39 = mercury__list__delete_all_2_f_0((MR_Word) (&check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0), SimpList0_33, ((MR_Box) ((MR_Integer) 11)));
  {
    Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_70, 0) = ((MR_Box) ((MR_Integer) 9));
    MR_hl_field(1, Var_70, 1) = ((MR_Box) (SimpList1_39));
  }
  {
    SimpList_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SimpList_40, 0) = ((MR_Box) ((MR_Integer) 5));
    MR_hl_field(1, SimpList_40, 1) = ((MR_Box) (Var_70));
  }
  SimplifyTasks_41 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_2_f_0(Globals_26, SimpList_40);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, STATE_VARIABLE_HLDS_58_58, (MR_String) "Simplifying", PredProcId_29);
  {
    Var_75 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_75, 0) = ((MR_Box) (ProgressStream_15));
  }
  check_hlds__simplify__simplify_proc__simplify_proc_8_p_0(Var_75, SimplifyTasks_41, PredId_18, ProcId_19, STATE_VARIABLE_HLDS_58_58, STATE_VARIABLE_HLDS_50, STATE_VARIABLE_ProcInfo_57_57, &STATE_VARIABLE_ProcInfo_77_77);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, *STATE_VARIABLE_HLDS_50, (MR_String) "Computing liveness in", PredProcId_29);
  ll_backend__liveness__detect_liveness_proc_4_p_0(*STATE_VARIABLE_HLDS_50, PredProcId_29, STATE_VARIABLE_ProcInfo_77_77, &STATE_VARIABLE_ProcInfo_81_81);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, *STATE_VARIABLE_HLDS_50, (MR_String) "Marking directly tail recursive calls in", PredProcId_29);
  hlds__mark_tail_calls__mark_tail_rec_calls_in_proc_for_llds_code_gen_9_p_0(*STATE_VARIABLE_HLDS_50, PredId_18, ProcId_19, PredInfo_20, SCCMap_17, STATE_VARIABLE_ProcInfo_81_81, &STATE_VARIABLE_ProcInfo_85_85, STATE_VARIABLE_Specs_0_51, STATE_VARIABLE_Specs_52);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, *STATE_VARIABLE_HLDS_50, (MR_String) "Allocating stack slots in", PredProcId_29);
  ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(*STATE_VARIABLE_HLDS_50, PredProcId_29, STATE_VARIABLE_ProcInfo_85_85, &STATE_VARIABLE_ProcInfo_90_90);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, *STATE_VARIABLE_HLDS_50, (MR_String) "Allocating storage locations for live vars in", PredProcId_29);
  ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 0, *STATE_VARIABLE_HLDS_50, PredProcId_29, STATE_VARIABLE_ProcInfo_90_90, &STATE_VARIABLE_ProcInfo_95_95);
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, *STATE_VARIABLE_HLDS_50, (MR_String) "Generating low-level (LLDS) code for", PredProcId_29);
  ll_backend__proc_gen__generate_proc_code_9_p_0(*STATE_VARIABLE_HLDS_50, ConstStructMap_16, PredId_18, PredInfo_20, ProcId_19, STATE_VARIABLE_ProcInfo_95_95, &CProc0_43, STATE_VARIABLE_GlobalData_0_47, &STATE_VARIABLE_GlobalData_99_99);
  Optimize_44 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_27, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
  switch (Optimize_44) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *CProc_22 = CProc0_43;
      break;
    case (MR_Integer) 0:
      {
        MR_Word ModuleName_45;

        hlds__hlds_module__module_info_get_name_2_p_0(*STATE_VARIABLE_HLDS_50, &ModuleName_45);
        ll_backend__optimize__optimize_proc_5_p_0(Globals_26, ModuleName_45, STATE_VARIABLE_GlobalData_99_99, CProc0_43, CProc_22);
      }
      break;
  }
  hlds__passes_aux__maybe_write_proc_progress_message_6_p_0(ProgressStream_15, *STATE_VARIABLE_HLDS_50, (MR_String) "Generating call continuation information for", PredProcId_29);
  ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(*STATE_VARIABLE_HLDS_50, *CProc_22, STATE_VARIABLE_GlobalData_99_99, STATE_VARIABLE_GlobalData_48);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__liveness__detect_liveness_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__195__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0(
  MR_Word ProgressStream_13,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word * STATE_VARIABLE_LLDS_26,
  MR_Word STATE_VARIABLE_GlobalData_0_27,
  MR_Word * STATE_VARIABLE_GlobalData_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30,
  MR_Word STATE_VARIABLE_DumpInfo_0_31,
  MR_Word * STATE_VARIABLE_DumpInfo_32)
{
  MR_bool succeeded;
  MR_Word Globals_20;
  MR_Word Verbose_21;
  MR_Word Stats_22;
  MR_Word SimplifySpecs_23;
  MR_Word STATE_VARIABLE_HLDS_37_37;
  MR_Word STATE_VARIABLE_DumpInfo_41_41;
  MR_Word STATE_VARIABLE_HLDS_43_43;
  MR_Word STATE_VARIABLE_DumpInfo_47_47;
  MR_Word STATE_VARIABLE_HLDS_49_49;
  MR_Word STATE_VARIABLE_DumpInfo_53_53;
  MR_Word STATE_VARIABLE_HLDS_58_58;
  MR_Word Var_61;
  MR_Word Var_64;
  MR_Word STATE_VARIABLE_DumpInfo_68_68;
  MR_Word STATE_VARIABLE_HLDS_70_70;
  MR_Word STATE_VARIABLE_DumpInfo_74_74;
  MR_Word STATE_VARIABLE_HLDS_76_76;
  MR_Word STATE_VARIABLE_DumpInfo_81_81;
  MR_Word STATE_VARIABLE_HLDS_83_83;
  MR_Word STATE_VARIABLE_DumpInfo_87_87;
  MR_Word STATE_VARIABLE_GlobalData_95_95;
  MR_Word STATE_VARIABLE_LLDS_96_96;
  MR_Word Globals_100;
  MR_Word ParallelLiveness_101;
  MR_Integer DebugLiveness_102;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_24, &Globals_20);
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 72, &Verbose_21);
  libs__globals__lookup_bool_option_3_p_0(Globals_20, (MR_Integer) 82, &Stats_22);
  top_level__mercury_compile_llds_back_end__maybe_saved_vars_7_p_0(ProgressStream_13, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_0_24, &STATE_VARIABLE_HLDS_37_37);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_37_37, (MR_Integer) 310, (MR_String) "saved_vars_const", STATE_VARIABLE_DumpInfo_0_31, &STATE_VARIABLE_DumpInfo_41_41);
  top_level__mercury_compile_llds_back_end__maybe_stack_opt_7_p_0(ProgressStream_13, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_37_37, &STATE_VARIABLE_HLDS_43_43);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_43_43, (MR_Integer) 315, (MR_String) "saved_vars_cell", STATE_VARIABLE_DumpInfo_41_41, &STATE_VARIABLE_DumpInfo_47_47);
  top_level__mercury_compile_llds_back_end__maybe_followcode_7_p_0(ProgressStream_13, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_43_43, &STATE_VARIABLE_HLDS_49_49);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_49_49, (MR_Integer) 320, (MR_String) "followcode", STATE_VARIABLE_DumpInfo_47_47, &STATE_VARIABLE_DumpInfo_53_53);
  top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_13, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 5, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_49_49, &STATE_VARIABLE_HLDS_58_58, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_23);
  Var_64 = parse_tree__error_util__contains_errors_2_f_0(Globals_20, SimplifySpecs_23);
  {
    Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_61, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_9[0]));
    MR_hl_field(0, Var_61, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_12_p_0_1));
    MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_61, 3) = ((MR_Box) (Var_64));
    MR_hl_field(0, Var_61, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_61, (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/12", (MR_String) "simplify has errors");
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_58_58, (MR_Integer) 325, (MR_String) "ll_backend_simplify", STATE_VARIABLE_DumpInfo_53_53, &STATE_VARIABLE_DumpInfo_68_68);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_58_58, &Globals_100);
  libs__globals__lookup_bool_option_3_p_0(Globals_100, (MR_Integer) 347, &ParallelLiveness_101);
  libs__globals__lookup_int_option_3_p_0(Globals_100, (MR_Integer) 103, &DebugLiveness_102);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% Computing liveness...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_13, Verbose_21);
  succeeded = (ParallelLiveness_101 == (MR_Integer) 1);
  if (succeeded)
    succeeded = (DebugLiveness_102 == (MR_Integer) -1);
  if (succeeded)
    ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(STATE_VARIABLE_HLDS_58_58, &STATE_VARIABLE_HLDS_70_70);
  else
    hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(1, &top_level__mercury_compile_llds_back_end_scalar_common_3[5])), STATE_VARIABLE_HLDS_58_58, &STATE_VARIABLE_HLDS_70_70);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_13, Verbose_21, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_13, Stats_22);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_70_70, (MR_Integer) 330, (MR_String) "liveness", STATE_VARIABLE_DumpInfo_68_68, &STATE_VARIABLE_DumpInfo_74_74);
  top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_9_p_0(ProgressStream_13, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_70_70, &STATE_VARIABLE_HLDS_76_76, STATE_VARIABLE_Specs_0_29, STATE_VARIABLE_Specs_30);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_76_76, (MR_Integer) 332, (MR_String) "mark_debug_tailrec_calls", STATE_VARIABLE_DumpInfo_74_74, &STATE_VARIABLE_DumpInfo_81_81);
  top_level__mercury_compile_llds_back_end__compute_stack_vars_7_p_0(ProgressStream_13, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_76_76, &STATE_VARIABLE_HLDS_83_83);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, STATE_VARIABLE_HLDS_83_83, (MR_Integer) 335, (MR_String) "stackvars", STATE_VARIABLE_DumpInfo_81_81, &STATE_VARIABLE_DumpInfo_87_87);
  top_level__mercury_compile_llds_back_end__allocate_store_map_7_p_0(ProgressStream_13, Verbose_21, Stats_22, STATE_VARIABLE_HLDS_83_83, STATE_VARIABLE_HLDS_25);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_13, *STATE_VARIABLE_HLDS_25, (MR_Integer) 340, (MR_String) "store_map", STATE_VARIABLE_DumpInfo_87_87, STATE_VARIABLE_DumpInfo_32);
  top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_9_p_0(ProgressStream_13, *STATE_VARIABLE_HLDS_25, Verbose_21, Stats_22, STATE_VARIABLE_GlobalData_0_27, &STATE_VARIABLE_GlobalData_95_95, &STATE_VARIABLE_LLDS_96_96);
  top_level__mercury_compile_llds_back_end__maybe_optimize_llds_9_p_0(ProgressStream_13, *STATE_VARIABLE_HLDS_25, STATE_VARIABLE_GlobalData_95_95, Verbose_21, Stats_22, STATE_VARIABLE_LLDS_96_96, STATE_VARIABLE_LLDS_26);
  top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_9_p_0(ProgressStream_13, *STATE_VARIABLE_HLDS_25, *STATE_VARIABLE_LLDS_26, Verbose_21, Stats_22, STATE_VARIABLE_GlobalData_95_95, STATE_VARIABLE_GlobalData_28);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word HLDS_11,
  MR_Word LLDS_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_13, (MR_String) "% Generating call continuation information...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_13);
  ll_backend__continuation_info__maybe_collect_call_continuations_in_cprocs_4_p_0(HLDS_11, LLDS_12, STATE_VARIABLE_GlobalData_0_17, STATE_VARIABLE_GlobalData_18);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_13, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_14);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word HLDS_11,
  MR_Word GlobalData_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_LLDS_0_21,
  MR_Word * STATE_VARIABLE_LLDS_22)
{
  MR_Word Globals_17;
  MR_Word OptTuple_18;
  MR_Word Optimize_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_11, &Globals_17);
  libs__globals__get_opt_tuple_2_p_0(Globals_17, &OptTuple_18);
  Optimize_19 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_18, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
  switch (Optimize_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_LLDS_22 = STATE_VARIABLE_LLDS_0_21;
      break;
    case (MR_Integer) 0:
      {
        MR_Word ModuleName_20;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_13, (MR_String) "% Doing optimizations...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_13);
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS_11, &ModuleName_20);
        ll_backend__optimize__optimize_procs_5_p_0(Globals_17, ModuleName_20, GlobalData_12, STATE_VARIABLE_LLDS_0_21, STATE_VARIABLE_LLDS_22);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_13, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_14);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word HLDS_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word STATE_VARIABLE_GlobalData_0_17,
  MR_Word * STATE_VARIABLE_GlobalData_18,
  MR_Word * LLDS_15)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% Generating code...\n");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_12);
  ll_backend__proc_gen__generate_module_code_4_p_0(HLDS_11, LLDS_15, STATE_VARIABLE_GlobalData_0_17, STATE_VARIABLE_GlobalData_18);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_12, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_13);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  ll_backend__store_alloc__allocate_store_maps_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Allocating store map...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(1, &top_level__mercury_compile_llds_back_end_scalar_common_3[4])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Computing stack vars...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(1, &top_level__mercury_compile_llds_back_end_scalar_common_3[3])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  hlds__mark_tail_calls__mark_tail_rec_calls_in_pred_for_llds_code_gen_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_Word DepInfo_16;
  MR_Word SCCMap_17;
  MR_Word STATE_VARIABLE_HLDS_27_27;
  MR_Word Var_28;
  MR_Word Var_32;

  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Marking directly tail recursive calls...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
  hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_27_27, &DepInfo_16);
  SCCMap_17 = libs__dependency_graph__dependency_info_make_scc_map_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DepInfo_16);
  {
    Var_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_32, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[0]));
    MR_hl_field(0, Var_32, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_9_p_0_1));
    MR_hl_field(0, Var_32, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_32, 3) = ((MR_Box) (SCCMap_17));
  }
  Var_28 = (MR_Word) (Var_32);
  hlds__passes_aux__process_valid_nonimported_preds_errors_7_p_0(Var_28, STATE_VARIABLE_HLDS_27_27, STATE_VARIABLE_HLDS_19, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  ll_backend__follow_code__move_follow_code_in_proc_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word FollowCode_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  FollowCode_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 7)) & (MR_Integer) 1);
  switch (FollowCode_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Migrating branch code...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(3, &top_level__mercury_compile_llds_back_end_scalar_common_2[5])), STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__3_3;
  MR_Word conv0_HeadVar__5_5;

  ll_backend__stack_opt__stack_opt_cell_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word SavedVars_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  SavedVars_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 14)) & (MR_Integer) 1);
  switch (SavedVars_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Minimizing variable saves using cells...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(3, &top_level__mercury_compile_llds_back_end_scalar_common_2[4])), STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_7_p_0_1(
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

  ll_backend__saved_vars__saved_vars_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word SavedVars_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  SavedVars_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 15)) & (MR_Integer) 1);
  switch (SavedVars_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_23;
        MR_Word Var_25;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Minimizing variable saves using constants...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[0]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_saved_vars_7_p_0_1));
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

void MR_CALL 
top_level__mercury_compile_llds_back_end__map_args_to_regs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Mapping args to regs...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  hlds__arg_info__generate_arg_info_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
