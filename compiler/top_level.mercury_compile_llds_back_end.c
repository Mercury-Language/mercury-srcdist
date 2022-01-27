/*
** Automatically generated from `mercury_compile_llds_back_end.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module top_level.mercury_compile_llds_back_end. */
/* :- implementation. */

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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
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
#include "ll_backend.unify_gen.mih"
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
#include "transform_hlds.dependency_graph.mih"
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
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001(
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001(
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__173__1_2_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_62,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_63);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
  MR_Word * top_level__mercury_compile_llds_back_end__ForeignInterfaceInfo_6);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16,
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_7);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_9,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_10,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_16,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_17);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_41,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_43,
  MR_Word * top_level__mercury_compile_llds_back_end__CProc_19,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_44,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_46,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_12_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_7,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_22,
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_24,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_25,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_26);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_25,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_26,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_27,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_28,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_30);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_3(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_2(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);


static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[8][3];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[7][2];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][8];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[2][4];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[2][10];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][5];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[4][1];




static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[1])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[2]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[4]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][8] = {
  /* row 0 */
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

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[2])),
    ((MR_Box) (top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[2][10] = {
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
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

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[5]))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[7]))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[1]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "\n#endif"))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct2 top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
  }
};

const MR_TypeCtorInfo_Struct top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_dup_proc_label_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001)),
  ((MR_Box) (top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001)),
  (MR_String) "top_level.mercury_compile_llds_back_end",
  (MR_String) "dup_proc_label_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0mdbcomp__prim_data__type_ctor_info_proc_label_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0
  }
};

static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
};

static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0 = {
  (MR_String) "foreign_interface_info",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0_10001(
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2));
    }
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0_10001(
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3)
{
  {
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1;

    {
      top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(&top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3));
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2));
    }
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3)
{
  {
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1;

    {
      top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(&top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3));
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__173__1_2_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_62,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_63)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__HeadVar__1_62 == top_level__mercury_compile_llds_back_end__HeadVar__2_63);

    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Integer top_level__mercury_compile_llds_back_end__CastX_21 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__2_2;
    MR_Integer top_level__mercury_compile_llds_back_end__CastY_22 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__3_3;

    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__CastX_21 == top_level__mercury_compile_llds_back_end__CastY_22);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word top_level__mercury_compile_llds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 5)));
        MR_Word top_level__mercury_compile_llds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_llds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word top_level__mercury_compile_llds_back_end__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word top_level__mercury_compile_llds_back_end__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word top_level__mercury_compile_llds_back_end__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 4)));
        MR_Word top_level__mercury_compile_llds_back_end__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 5)));
        MR_Word top_level__mercury_compile_llds_back_end__V_16_16;

        {
          mdbcomp__sym_name____Compare____sym_name_0_0(&top_level__mercury_compile_llds_back_end__V_16_16, top_level__mercury_compile_llds_back_end__V_4_4, top_level__mercury_compile_llds_back_end__V_10_10);
        }
        top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_16_16 == (MR_Integer) 0);
        top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
        if (top_level__mercury_compile_llds_back_end__succeeded)
          *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_16_16;
        else
          {
            MR_Word top_level__mercury_compile_llds_back_end__V_17_17;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[0], &top_level__mercury_compile_llds_back_end__V_17_17, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_5_5)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_11_11)));
            }
            top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_17_17 == (MR_Integer) 0);
            top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
            if (top_level__mercury_compile_llds_back_end__succeeded)
              *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_17_17;
            else
              {
                MR_Word top_level__mercury_compile_llds_back_end__V_18_18;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[1], &top_level__mercury_compile_llds_back_end__V_18_18, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_6_6)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_12_12)));
                }
                top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_18_18 == (MR_Integer) 0);
                top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
                if (top_level__mercury_compile_llds_back_end__succeeded)
                  *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_18_18;
                else
                  {
                    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;

                    {
                      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[2], &top_level__mercury_compile_llds_back_end__V_19_19, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_7_7)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_13_13)));
                    }
                    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_19_19 == (MR_Integer) 0);
                    top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
                    if (top_level__mercury_compile_llds_back_end__succeeded)
                      *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_19_19;
                    else
                      {
                        MR_Word top_level__mercury_compile_llds_back_end__V_20_20;

                        {
                          parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&top_level__mercury_compile_llds_back_end__V_20_20, top_level__mercury_compile_llds_back_end__V_8_8, top_level__mercury_compile_llds_back_end__V_14_14);
                        }
                        top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_20_20 == (MR_Integer) 0);
                        top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
                        if (top_level__mercury_compile_llds_back_end__succeeded)
                          *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_20_20;
                        else
                          {
                            {
                              mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[3], top_level__mercury_compile_llds_back_end__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_9_9)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_15_15)));
                            }
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
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Integer top_level__mercury_compile_llds_back_end__CastX_15 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__1_1;
    MR_Integer top_level__mercury_compile_llds_back_end__CastY_16 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__2_2;

    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__CastX_15 == top_level__mercury_compile_llds_back_end__CastY_16);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      top_level__mercury_compile_llds_back_end__succeeded = MR_TRUE;
    else
      {
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_18_18;
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_19_19;
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_20_20;
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_22_22;
        MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word top_level__mercury_compile_llds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 4)));
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 5)));
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_llds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word top_level__mercury_compile_llds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word top_level__mercury_compile_llds_back_end__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word top_level__mercury_compile_llds_back_end__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 4)));
        MR_Word top_level__mercury_compile_llds_back_end__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 5)));

        {
          top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_llds_back_end__V_3_3, top_level__mercury_compile_llds_back_end__V_9_9);
        }
        if (top_level__mercury_compile_llds_back_end__succeeded)
          {
            top_level__mercury_compile_llds_back_end__TypeInfo_18_18 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[0];
            {
              top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_18_18, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_4_4)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_10_10)));
            }
            if (top_level__mercury_compile_llds_back_end__succeeded)
              {
                top_level__mercury_compile_llds_back_end__TypeInfo_19_19 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[1];
                {
                  top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_19_19, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_5_5)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_11_11)));
                }
                if (top_level__mercury_compile_llds_back_end__succeeded)
                  {
                    top_level__mercury_compile_llds_back_end__TypeInfo_20_20 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[2];
                    {
                      top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_20_20, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_6_6)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_12_12)));
                    }
                    if (top_level__mercury_compile_llds_back_end__succeeded)
                      {
                        {
                          top_level__mercury_compile_llds_back_end__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(top_level__mercury_compile_llds_back_end__V_7_7, top_level__mercury_compile_llds_back_end__V_13_13);
                        }
                        if (top_level__mercury_compile_llds_back_end__succeeded)
                          {
                            top_level__mercury_compile_llds_back_end__TypeInfo_22_22 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_2[3];
                            {
                              top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_22_22, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_8_8)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_14_14)));
                            }
                          }
                      }
                  }
              }
          }
      }
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____dup_proc_label_map_0_0(
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Cast_HeadVar1_4 = top_level__mercury_compile_llds_back_end__HeadVar__2_2;
    MR_Word top_level__mercury_compile_llds_back_end__Cast_HeadVar2_5 = top_level__mercury_compile_llds_back_end__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[0], top_level__mercury_compile_llds_back_end__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile_llds_back_end__Cast_HeadVar1_4)), ((MR_Box) (top_level__mercury_compile_llds_back_end__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____dup_proc_label_map_0_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Cast_HeadVar1_3 = top_level__mercury_compile_llds_back_end__HeadVar__1_1;
    MR_Word top_level__mercury_compile_llds_back_end__Cast_HeadVar2_4 = top_level__mercury_compile_llds_back_end__HeadVar__2_2;

    {
      top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[0], ((MR_Box) (top_level__mercury_compile_llds_back_end__Cast_HeadVar1_3)), ((MR_Box) (top_level__mercury_compile_llds_back_end__Cast_HeadVar2_4)));
    }
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_14;
    MR_Word top_level__mercury_compile_llds_back_end__PIC_15;
    MR_String top_level__mercury_compile_llds_back_end__Obj_16;
    MR_String top_level__mercury_compile_llds_back_end__C_File_17;

    {
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_8, &top_level__mercury_compile_llds_back_end__LinkedTargetType_14);
    }
    {
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__LinkedTargetType_14, &top_level__mercury_compile_llds_back_end__PIC_15);
    }
    {
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__PIC_15, &top_level__mercury_compile_llds_back_end__Obj_16);
    }
    {
      top_level__mercury_compile_llds_back_end__C_File_17 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, (MR_String) ".c");
    }
    {
      *top_level__mercury_compile_llds_back_end__O_File_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, top_level__mercury_compile_llds_back_end__Obj_16);
    }
    {
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__ErrorStream_9, top_level__mercury_compile_llds_back_end__PIC_15, top_level__mercury_compile_llds_back_end__C_File_17, *top_level__mercury_compile_llds_back_end__O_File_11, top_level__mercury_compile_llds_back_end__Succeeded_12);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_12;
    MR_Word top_level__mercury_compile_llds_back_end__PIC_13;
    MR_String top_level__mercury_compile_llds_back_end__Obj_14;
    MR_String top_level__mercury_compile_llds_back_end__C_File_15;
    MR_String top_level__mercury_compile_llds_back_end__O_File_16;

    {
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_7, &top_level__mercury_compile_llds_back_end__LinkedTargetType_12);
    }
    {
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__LinkedTargetType_12, &top_level__mercury_compile_llds_back_end__PIC_13);
    }
    {
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__PIC_13, &top_level__mercury_compile_llds_back_end__Obj_14);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__C_File_15);
    }
    {
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, top_level__mercury_compile_llds_back_end__Obj_14, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__O_File_16);
    }
    {
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ErrorStream_8, top_level__mercury_compile_llds_back_end__PIC_13, top_level__mercury_compile_llds_back_end__C_File_15, top_level__mercury_compile_llds_back_end__O_File_16, top_level__mercury_compile_llds_back_end__Succeeded_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__LLDS_10;

    {
      ll_backend__transform_llds__transform_llds_3_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS0_7, &top_level__mercury_compile_llds_back_end__LLDS_10);
    }
    {
      ll_backend__llds_out__llds_out_file__output_llds_5_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__Succeeded_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    if ((top_level__mercury_compile_llds_back_end__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word top_level__mercury_compile_llds_back_end__Chunk_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_llds_back_end__Chunks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word top_level__mercury_compile_llds_back_end__Module_11;
        MR_Word top_level__mercury_compile_llds_back_end__Modules_12;
        MR_String top_level__mercury_compile_llds_back_end__NumString_13;
        MR_String top_level__mercury_compile_llds_back_end__ThisModuleName_14;
        MR_Integer top_level__mercury_compile_llds_back_end__Num1_15;

        {
          mercury__string__int_to_string_2_p_0(top_level__mercury_compile_llds_back_end__HeadVar__3_3, &top_level__mercury_compile_llds_back_end__NumString_13);
        }
        {
          top_level__mercury_compile_llds_back_end__ThisModuleName_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__NumString_13);
        }
        {
          top_level__mercury_compile_llds_back_end__Module_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ThisModuleName_14));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Chunk_7));
        }
        top_level__mercury_compile_llds_back_end__Num1_15 = (top_level__mercury_compile_llds_back_end__HeadVar__3_3 + (MR_Integer) 1);
        {
          top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__Chunks_8, top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__Num1_15, &top_level__mercury_compile_llds_back_end__Modules_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Module_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Modules_12));
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__ChunkList_4, top_level__mercury_compile_llds_back_end__ModName_5, (MR_Integer) 0, top_level__mercury_compile_llds_back_end__Modules_6);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 1)));

    switch (top_level__mercury_compile_llds_back_end__Lang_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String top_level__mercury_compile_llds_back_end__HeaderFileName_12;
          MR_String top_level__mercury_compile_llds_back_end__IncludeString_13;
          MR_String top_level__mercury_compile_llds_back_end__V_34_34;
          MR_Word top_level__mercury_compile_llds_back_end__V_38_38;
          MR_Word top_level__mercury_compile_llds_back_end__V_39_39;

          {
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__ModuleName_11, (MR_String) ".mh", &top_level__mercury_compile_llds_back_end__HeaderFileName_12);
          }
          {
            top_level__mercury_compile_llds_back_end__V_34_34 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeaderFileName_12, (MR_String) "\"\n");
          }
          {
            top_level__mercury_compile_llds_back_end__IncludeString_13 = mercury__string__f_43_43_2_f_0((MR_String) "#include \"", top_level__mercury_compile_llds_back_end__V_34_34);
          }
          {
            top_level__mercury_compile_llds_back_end__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_38_38, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__IncludeString_13));
          }
          {
            top_level__mercury_compile_llds_back_end__V_39_39 = mercury__term__context_init_0_f_0();
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *top_level__mercury_compile_llds_back_end__Include_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_38_38));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_39_39));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for C#");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Java");
            return;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_String top_level__mercury_compile_llds_back_end__Define_7;
    MR_String top_level__mercury_compile_llds_back_end__Start_8;
    MR_String top_level__mercury_compile_llds_back_end__V_11_11;
    MR_String top_level__mercury_compile_llds_back_end__V_12_12;
    MR_String top_level__mercury_compile_llds_back_end__V_14_14;
    MR_Word top_level__mercury_compile_llds_back_end__V_18_18;
    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;
    MR_Word top_level__mercury_compile_llds_back_end__V_23_23;

    {
      top_level__mercury_compile_llds_back_end__Define_7 = backend_libs__foreign__decl_guard_1_f_0(top_level__mercury_compile_llds_back_end__ModuleName_4);
    }
    {
      top_level__mercury_compile_llds_back_end__V_14_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, (MR_String) "\n");
    }
    {
      top_level__mercury_compile_llds_back_end__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\n#define ", top_level__mercury_compile_llds_back_end__V_14_14);
    }
    {
      top_level__mercury_compile_llds_back_end__V_11_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, top_level__mercury_compile_llds_back_end__V_12_12);
    }
    {
      top_level__mercury_compile_llds_back_end__Start_8 = mercury__string__f_43_43_2_f_0((MR_String) "#ifndef ", top_level__mercury_compile_llds_back_end__V_11_11);
    }
    {
      top_level__mercury_compile_llds_back_end__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_18_18, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_8));
    }
    {
      top_level__mercury_compile_llds_back_end__V_19_19 = mercury__term__context_init_0_f_0();
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_llds_back_end__StartGuard_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_18_18));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_19_19));
    }
    {
      top_level__mercury_compile_llds_back_end__V_23_23 = mercury__term__context_init_0_f_0();
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_llds_back_end__EndGuard_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_23_23));
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 1)));
    MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 2)));
    MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 3)));

    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_6_6 == (MR_Integer) 0);
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
  MR_Word * top_level__mercury_compile_llds_back_end__ForeignInterfaceInfo_6)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_7;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignSelfImport_8;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImportsModules0_11;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImportsModules_14;
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_15;
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_17;
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignImports_19;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignExportDecls_20;
    MR_Word top_level__mercury_compile_llds_back_end__ForeignExportDefns_21;
    MR_Word top_level__mercury_compile_llds_back_end__V_22_22;
    MR_Word top_level__mercury_compile_llds_back_end___OtherDeclCodes_16;
    MR_Word top_level__mercury_compile_llds_back_end___OtherBodyCodes_18;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ModuleName_7);
    }
    {
      top_level__mercury_compile_llds_back_end__ForeignSelfImport_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UseForeignLanguage_5));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
    }
    {
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9);
    }
    {
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10);
    }
    {
      hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignImportsModules0_11);
    }
    {
      top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9);
    }
    {
      top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10);
    }
    {
      parse_tree__prog_data_foreign__add_foreign_import_module_info_3_p_0(top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, top_level__mercury_compile_llds_back_end__ForeignImportsModules0_11, &top_level__mercury_compile_llds_back_end__ForeignImportsModules_14);
    }
    {
      backend_libs__foreign__filter_decls_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12, &top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_15, &top_level__mercury_compile_llds_back_end___OtherDeclCodes_16);
    }
    {
      backend_libs__foreign__filter_bodys_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13, &top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_17, &top_level__mercury_compile_llds_back_end___OtherBodyCodes_18);
    }
    {
      top_level__mercury_compile_llds_back_end__V_22_22 = parse_tree__prog_data_foreign__get_lang_foreign_import_module_infos_2_f_0(top_level__mercury_compile_llds_back_end__ForeignImportsModules_14, top_level__mercury_compile_llds_back_end__UseForeignLanguage_5);
    }
    {
      top_level__mercury_compile_llds_back_end__WantedForeignImports_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, top_level__mercury_compile_llds_back_end__V_22_22);
    }
    {
      backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignExportDecls_20);
    }
    {
      backend_libs__export__get_foreign_export_defns_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignExportDefns_21);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_llds_back_end__ForeignInterfaceInfo_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_17));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignImports_19));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignExportDecls_20));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignExportDefns_21));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Generating call continuation information...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
    }
    {
      ll_backend__continuation_info__maybe_collect_call_continuations_in_cprocs_4_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_16;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 461, &top_level__mercury_compile_llds_back_end__Optimize_16);
    }
    switch (top_level__mercury_compile_llds_back_end__Optimize_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Doing optimizations...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
          }
          {
            ll_backend__optimize__optimize_procs_4_p_0(top_level__mercury_compile_llds_back_end__Globals_15, top_level__mercury_compile_llds_back_end__GlobalData_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16,
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% Generating code...\n");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_10);
    }
    {
      ll_backend__proc_gen__generate_module_code_4_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__LLDS_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

    {
      ll_backend__store_alloc__allocate_store_maps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Allocating store map...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
    {
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[2]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

    {
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing stack vars...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
    {
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[1]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_6,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_7)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv2_HeadVar__3_3;
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__5_5;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__7_7;

    {
      hlds__mark_tail_calls__mark_tail_calls_in_pred_7_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv2_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_6), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__7_7);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv2_HeadVar__3_3));
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__5_5));
    *top_level__mercury_compile_llds_back_end__wrapper_arg_7 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_9,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_10,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_16,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_17)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_9, (MR_String) "% Marking directly tail recursive calls...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_9);
    }
    {
      hlds__passes_aux__process_all_nonimported_preds_errors_7_p_0((MR_Word) ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_1[6])), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_17);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_9, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

    {
      ll_backend__liveness__detect_liveness_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_llds_back_end__ParallelLiveness_12;
    MR_Integer top_level__mercury_compile_llds_back_end__DebugLiveness_13;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 303, &top_level__mercury_compile_llds_back_end__ParallelLiveness_12);
    }
    {
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 80, &top_level__mercury_compile_llds_back_end__DebugLiveness_13);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing liveness...\n");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ParallelLiveness_12 == (MR_Integer) 1);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__DebugLiveness_13 == (MR_Integer) -1);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      {
        ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
      }
    else
      {
        {
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[0]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
        }
      }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

    {
      ll_backend__follow_code__move_follow_code_in_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 386, &top_level__mercury_compile_llds_back_end__FollowCode_12);
    }
    switch (top_level__mercury_compile_llds_back_end__FollowCode_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Migrating branch code...");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_2[6]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

    {
      ll_backend__stack_opt__stack_opt_cell_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 370, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
    switch (top_level__mercury_compile_llds_back_end__SavedVars_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using cells...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_2[5]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

    {
      ll_backend__saved_vars__saved_vars_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 369, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
    switch (top_level__mercury_compile_llds_back_end__SavedVars_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using constants...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_2[4]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_41,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_43,
  MR_Word * top_level__mercury_compile_llds_back_end__CProc_19,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_44,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_46,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__PredProcId_22;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_23;
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsConst_24;
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsCell_25;
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_26;
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks0_27;
    MR_Word top_level__mercury_compile_llds_back_end__SimpList0_28;
    MR_Word top_level__mercury_compile_llds_back_end__ConstProp_29;
    MR_Word top_level__mercury_compile_llds_back_end__DeepProf_30;
    MR_Word top_level__mercury_compile_llds_back_end__TSWProf_31;
    MR_Word top_level__mercury_compile_llds_back_end__TSCProf_32;
    MR_Word top_level__mercury_compile_llds_back_end__ProfTrans_33;
    MR_Word top_level__mercury_compile_llds_back_end__SimpList1_34;
    MR_Word top_level__mercury_compile_llds_back_end__SimpList_35;
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks_36;
    MR_Word top_level__mercury_compile_llds_back_end__CProc0_39;
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_40;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_50_50;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_51_51;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_53_53;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_54_54;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_56_56;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_57_57;
    MR_Word top_level__mercury_compile_llds_back_end__V_63_63;
    MR_Word top_level__mercury_compile_llds_back_end__V_64_64;
    MR_Word top_level__mercury_compile_llds_back_end__V_65_65;
    MR_Word top_level__mercury_compile_llds_back_end__V_70_70;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_76_76;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_84_84;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_98_98;
    MR_Word top_level__mercury_compile_llds_back_end__V_38_38;

    {
      top_level__mercury_compile_llds_back_end__PredProcId_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_15));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcId_17));
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_llds_back_end__Globals_23);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 369, &top_level__mercury_compile_llds_back_end__SavedVarsConst_24);
    }
    switch (top_level__mercury_compile_llds_back_end__SavedVarsConst_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_51_51 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_41;
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_50_50 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_43;
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__saved_vars__saved_vars_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_43, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_50_50, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_41, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_51_51);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 370, &top_level__mercury_compile_llds_back_end__SavedVarsCell_25);
    }
    switch (top_level__mercury_compile_llds_back_end__SavedVarsCell_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_54_54 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_51_51;
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_53_53 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_50_50;
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__stack_opt__stack_opt_cell_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_50_50, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_53_53, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_54_54);
        }
        break;
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 386, &top_level__mercury_compile_llds_back_end__FollowCode_26);
    }
    switch (top_level__mercury_compile_llds_back_end__FollowCode_26) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_57_57 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_54_54;
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_56_56 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_53_53;
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__follow_code__move_follow_code_in_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_53_53, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_56_56, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_54_54, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_57_57);
        }
        break;
    }
    {
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, top_level__mercury_compile_llds_back_end__Globals_23, &top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
    {
      top_level__mercury_compile_llds_back_end__SimpList0_28 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 366, &top_level__mercury_compile_llds_back_end__ConstProp_29);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 200, &top_level__mercury_compile_llds_back_end__DeepProf_30);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 217, &top_level__mercury_compile_llds_back_end__TSWProf_31);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 218, &top_level__mercury_compile_llds_back_end__TSCProf_32);
    }
    {
      top_level__mercury_compile_llds_back_end__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSCProf_32));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      top_level__mercury_compile_llds_back_end__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_64_64, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSWProf_31));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_64_64, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_65_65));
    }
    {
      top_level__mercury_compile_llds_back_end__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_63_63, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DeepProf_30));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_63_63, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_64_64));
    }
    {
      top_level__mercury_compile_llds_back_end__ProfTrans_33 = mercury__bool__or_list_1_f_0(top_level__mercury_compile_llds_back_end__V_63_63);
    }
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ConstProp_29 == (MR_Integer) 1);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProfTrans_33 == (MR_Integer) 0);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      {
        {
          mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 10)), top_level__mercury_compile_llds_back_end__SimpList0_28, &top_level__mercury_compile_llds_back_end__SimpList1_34);
        }
      }
    else
      {
        {
          top_level__mercury_compile_llds_back_end__SimpList1_34 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_llds_back_end__SimpList0_28, ((MR_Box) ((MR_Integer) 10)));
        }
      }
    {
      top_level__mercury_compile_llds_back_end__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_70_70, 0) = ((MR_Box) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_70_70, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SimpList1_34));
    }
    {
      top_level__mercury_compile_llds_back_end__SimpList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 0) = ((MR_Box) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_70_70));
    }
    {
      top_level__mercury_compile_llds_back_end__SimplifyTasks_36 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_llds_back_end__SimpList_35);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_57_57);
    }
    {
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(top_level__mercury_compile_llds_back_end__SimplifyTasks_36, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_57_57, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_56_56, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_76_76);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Computing liveness in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42);
    }
    {
      ll_backend__liveness__detect_liveness_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_76_76, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Marking directly tail recursive calls in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42);
    }
    {
      hlds__mark_tail_calls__mark_tail_calls_in_proc_9_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_84_84, &top_level__mercury_compile_llds_back_end__V_38_38, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating stack slots in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42);
    }
    {
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_84_84, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating storage locations for live vars in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42);
    }
    {
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 0, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94);
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating low-level (LLDS) code for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42);
    }
    {
      ll_backend__proc_gen__generate_proc_code_9_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94, &top_level__mercury_compile_llds_back_end__CProc0_39, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_44, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_98_98);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 461, &top_level__mercury_compile_llds_back_end__Optimize_40);
    }
    switch (top_level__mercury_compile_llds_back_end__Optimize_40) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_llds_back_end__CProc_19 = top_level__mercury_compile_llds_back_end__CProc0_39;
        break;
      case (MR_Integer) 1:
        {
          ll_backend__optimize__optimize_proc_4_p_0(top_level__mercury_compile_llds_back_end__Globals_23, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_98_98, top_level__mercury_compile_llds_back_end__CProc0_39, top_level__mercury_compile_llds_back_end__CProc_19);
        }
        break;
    }
    {
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating call continuation information for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42);
    }
    {
      ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42, *top_level__mercury_compile_llds_back_end__CProc_19, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_98_98, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    if ((top_level__mercury_compile_llds_back_end__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10;
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
      }
    else
      {
        MR_Integer top_level__mercury_compile_llds_back_end__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 0)));
        MR_Word top_level__mercury_compile_llds_back_end__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 1)));
        MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_30;
        MR_Word top_level__mercury_compile_llds_back_end__CProc_31;
        MR_Word top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_32;
        MR_Word top_level__mercury_compile_llds_back_end__ProcTable_35;
        MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_36;
        MR_Word top_level__mercury_compile_llds_back_end__V_43_43;
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44;
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45;
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_46;
        MR_Box top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36;

        {
          top_level__mercury_compile_llds_back_end__ProcLabel_30 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__ProcId_28);
        }
        {
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_5, &top_level__mercury_compile_llds_back_end__ProcTable_35);
        }
        {
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_35, top_level__mercury_compile_llds_back_end__ProcId_28, &top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
        }
        top_level__mercury_compile_llds_back_end__ProcInfo_36 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
        {
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcId_28, top_level__mercury_compile_llds_back_end__ProcInfo_36, &top_level__mercury_compile_llds_back_end__CProc_31, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_46);
        }
        {
          top_level__mercury_compile_llds_back_end__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_30));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CProc_31));
        }
        {
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcIds_29, &top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_43_43));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_32));
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_12_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__PredTable_20;
    MR_Word top_level__mercury_compile_llds_back_end__PredInfo_21;
    MR_Word top_level__mercury_compile_llds_back_end__ProcIds_22;
    MR_Box top_level__mercury_compile_llds_back_end__conv0_PredInfo_21;

    {
      hlds__hlds_module__module_info_get_preds_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__PredTable_20);
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, top_level__mercury_compile_llds_back_end__PredTable_20, ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_15)), &top_level__mercury_compile_llds_back_end__conv0_PredInfo_21);
    }
    top_level__mercury_compile_llds_back_end__PredInfo_21 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_PredInfo_21);
    {
      top_level__mercury_compile_llds_back_end__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
    }
    if ((top_level__mercury_compile_llds_back_end__ProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40;
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42;
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44;
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46;
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48;
      }
    else
      {
        MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78;
        MR_Word top_level__mercury_compile_llds_back_end__Globals0_25;
        MR_Word top_level__mercury_compile_llds_back_end__Verbose_26;
        MR_Word top_level__mercury_compile_llds_back_end__IdCProcs_33;
        MR_Word top_level__mercury_compile_llds_back_end__CProcs_36;
        MR_Word top_level__mercury_compile_llds_back_end__Stats_39;
        MR_Word top_level__mercury_compile_llds_back_end__V_68_68;
        MR_Word top_level__mercury_compile_llds_back_end__PredModule_28;
        MR_String top_level__mercury_compile_llds_back_end__PredName_29;
        MR_Integer top_level__mercury_compile_llds_back_end__PredArity_30;

        {
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__Globals0_25);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, (MR_Integer) 52, &top_level__mercury_compile_llds_back_end__Verbose_26);
        }
        switch (top_level__mercury_compile_llds_back_end__Verbose_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
              }
              {
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, top_level__mercury_compile_llds_back_end__PredId_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
              {
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_26);
              }
            }
            break;
        }
        {
          top_level__mercury_compile_llds_back_end__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
        }
        {
          top_level__mercury_compile_llds_back_end__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
        }
        {
          top_level__mercury_compile_llds_back_end__PredArity_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
        }
        {
          top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(top_level__mercury_compile_llds_back_end__PredModule_28, top_level__mercury_compile_llds_back_end__PredName_29, top_level__mercury_compile_llds_back_end__PredArity_30);
        }
        if (top_level__mercury_compile_llds_back_end__succeeded)
          {
            MR_Word top_level__mercury_compile_llds_back_end__TraceLevel_31;
            MR_Word top_level__mercury_compile_llds_back_end__Globals1_32;
            MR_Word top_level__mercury_compile_llds_back_end__Globals2_34;
            MR_Word top_level__mercury_compile_llds_back_end__Globals_35;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59;
            MR_Integer top_level__mercury_compile_llds_back_end__ProcId_95;
            MR_Word top_level__mercury_compile_llds_back_end__ProcIds_96;
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_97;
            MR_Word top_level__mercury_compile_llds_back_end__CProc_98;
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_99;
            MR_Word top_level__mercury_compile_llds_back_end__ProcTable_102;
            MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_103;
            MR_Word top_level__mercury_compile_llds_back_end__V_110_110;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_111;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_112;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_113;
            MR_Box top_level__mercury_compile_llds_back_end__conv1_ProcInfo_103;

            {
              libs__globals__get_trace_level_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, &top_level__mercury_compile_llds_back_end__TraceLevel_31);
            }
            {
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, &top_level__mercury_compile_llds_back_end__Globals1_32);
            }
            {
              hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals1_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58);
            }
            top_level__mercury_compile_llds_back_end__ProcId_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 0)));
            top_level__mercury_compile_llds_back_end__ProcIds_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 1)));
            {
              top_level__mercury_compile_llds_back_end__ProcLabel_97 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_95);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_21, &top_level__mercury_compile_llds_back_end__ProcTable_102);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_102, top_level__mercury_compile_llds_back_end__ProcId_95, &top_level__mercury_compile_llds_back_end__conv1_ProcInfo_103);
            }
            top_level__mercury_compile_llds_back_end__ProcInfo_103 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv1_ProcInfo_103);
            {
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_111, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcId_95, top_level__mercury_compile_llds_back_end__ProcInfo_103, &top_level__mercury_compile_llds_back_end__CProc_98, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_112, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_113);
            }
            {
              top_level__mercury_compile_llds_back_end__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_110_110, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_97));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_110_110, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CProc_98));
            }
            {
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_111, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcIds_96, &top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_99, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_112, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_113, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);
            }
            {
              top_level__mercury_compile_llds_back_end__IdCProcs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_110_110));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_99));
            }
            {
              hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile_llds_back_end__Globals2_34);
            }
            {
              libs__globals__set_trace_level_3_p_0(top_level__mercury_compile_llds_back_end__TraceLevel_31, top_level__mercury_compile_llds_back_end__Globals2_34, &top_level__mercury_compile_llds_back_end__Globals_35);
            }
            {
              hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals_35, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41);
            }
          }
        else
          {
            MR_Integer top_level__mercury_compile_llds_back_end__ProcId_135 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_llds_back_end__ProcIds_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 1)));
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_137;
            MR_Word top_level__mercury_compile_llds_back_end__CProc_138;
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_139;
            MR_Word top_level__mercury_compile_llds_back_end__ProcTable_142;
            MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_143;
            MR_Word top_level__mercury_compile_llds_back_end__V_150_150;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_151;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_152;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_153;
            MR_Box top_level__mercury_compile_llds_back_end__conv2_ProcInfo_143;

            {
              top_level__mercury_compile_llds_back_end__ProcLabel_137 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_135);
            }
            {
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_21, &top_level__mercury_compile_llds_back_end__ProcTable_142);
            }
            {
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_142, top_level__mercury_compile_llds_back_end__ProcId_135, &top_level__mercury_compile_llds_back_end__conv2_ProcInfo_143);
            }
            top_level__mercury_compile_llds_back_end__ProcInfo_143 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv2_ProcInfo_143);
            {
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_151, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcId_135, top_level__mercury_compile_llds_back_end__ProcInfo_143, &top_level__mercury_compile_llds_back_end__CProc_138, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_152, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_153);
            }
            {
              top_level__mercury_compile_llds_back_end__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_150_150, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_137));
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_150_150, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CProc_138));
            }
            {
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_151, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcIds_136, &top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_139, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_152, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_153, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);
            }
            {
              top_level__mercury_compile_llds_back_end__IdCProcs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_150_150));
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_139));
            }
          }
        if ((top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__assoc_list__values_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__IdCProcs_33, &top_level__mercury_compile_llds_back_end__CProcs_36);
            }
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42;
          }
        else
          {
            MR_Word top_level__mercury_compile_llds_back_end__DupProcMap0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_llds_back_end__DupProcMap_38;

            {
              ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(top_level__mercury_compile_llds_back_end__IdCProcs_33, &top_level__mercury_compile_llds_back_end__CProcs_36, top_level__mercury_compile_llds_back_end__DupProcMap0_37, &top_level__mercury_compile_llds_back_end__DupProcMap_38);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DupProcMap_38));
            }
          }
        top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
        {
          top_level__mercury_compile_llds_back_end__V_68_68 = mercury__cord__from_list_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78, top_level__mercury_compile_llds_back_end__CProcs_36);
        }
        {
          *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44, top_level__mercury_compile_llds_back_end__V_68_68);
        }
        {
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, (MR_Integer) 62, &top_level__mercury_compile_llds_back_end__Stats_39);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_26, (MR_String) "% done.\n");
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_39);
        }
      }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_7,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool top_level__mercury_compile_llds_back_end__succeeded;

        if ((top_level__mercury_compile_llds_back_end__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10;
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_7 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6;
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
          }
        else
          {
            MR_Word top_level__mercury_compile_llds_back_end__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 0)));
            MR_Word top_level__mercury_compile_llds_back_end__PredIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 1)));
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_43_43;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_44_44;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45_45;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_46_46;
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47_47;

            {
              top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_43_43, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_46_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47_47);
            }
            /* direct tailcall eliminated */
            {
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_43_43;
              MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4 = top_level__mercury_compile_llds_back_end__PredIds_29;
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_44_44;
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0__tmp_copy_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45_45;
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_46_46;
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0__tmp_copy_10 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47_47;

              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0__tmp_copy_10;
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8;
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0__tmp_copy_6;
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5;
              top_level__mercury_compile_llds_back_end__HeadVar__4_4 = top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4;
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_22,
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_9,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_23,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_24,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_25,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_26)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37;
    MR_Word top_level__mercury_compile_llds_back_end__PredIds_12;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_13;
    MR_Word top_level__mercury_compile_llds_back_end__ProcDups_14;
    MR_Word top_level__mercury_compile_llds_back_end__OrderedPredIds_15;
    MR_Word top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16;
    MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_19;
    MR_Word top_level__mercury_compile_llds_back_end__CProcsCord_20;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30_30;
    MR_Word top_level__mercury_compile_llds_back_end__V_32_32;

    {
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_llds_back_end__PredIds_12);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_llds_back_end__Globals_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_13, (MR_Integer) 473, &top_level__mercury_compile_llds_back_end__ProcDups_14);
    }
    switch (top_level__mercury_compile_llds_back_end__ProcDups_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          top_level__mercury_compile_llds_back_end__OrderedPredIds_15 = top_level__mercury_compile_llds_back_end__PredIds_12;
          top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35;
          MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36;
          MR_Word top_level__mercury_compile_llds_back_end__DepInfo_17;
          MR_Word top_level__mercury_compile_llds_back_end__PredSCCs_18;
          MR_Word top_level__mercury_compile_llds_back_end__V_29_29;

          {
            transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile_llds_back_end__PredIds_12, (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__DepInfo_17);
          }
          top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
          {
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35, top_level__mercury_compile_llds_back_end__DepInfo_17, &top_level__mercury_compile_llds_back_end__PredSCCs_18);
          }
          {
            mercury__list__condense_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35, top_level__mercury_compile_llds_back_end__PredSCCs_18, &top_level__mercury_compile_llds_back_end__OrderedPredIds_15);
          }
          top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
          {
            top_level__mercury_compile_llds_back_end__V_29_29 = mercury__map__init_0_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36, top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36);
          }
          {
            top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_29_29));
          }
        }
        break;
    }
    {
      ll_backend__unify_gen__generate_const_structs_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_23, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30_30);
    }
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
    {
      top_level__mercury_compile_llds_back_end__V_32_32 = mercury__cord__init_0_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37);
    }
    {
      top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_22, top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__OrderedPredIds_15, top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, top_level__mercury_compile_llds_back_end__V_32_32, &top_level__mercury_compile_llds_back_end__CProcsCord_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30_30, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_24, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_25, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_26);
    }
    {
      *top_level__mercury_compile_llds_back_end__LLDS_9 = mercury__cord__list_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37, top_level__mercury_compile_llds_back_end__CProcsCord_20);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

    {
      top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__173__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))));
    }
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_25,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_26,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_27,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_28,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_30)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_18;
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_19;
    MR_Word top_level__mercury_compile_llds_back_end__Stats_20;
    MR_Word top_level__mercury_compile_llds_back_end__SimplifySpecs_21;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_39_39;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_45_45;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_51_51;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55;
    MR_Word top_level__mercury_compile_llds_back_end__V_58_58;
    MR_Word top_level__mercury_compile_llds_back_end__V_62_62;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_66_66;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_72_72;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_79_79;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_81_81;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_85_85;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_93_93;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_94_94;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__Globals_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 52, &top_level__mercury_compile_llds_back_end__Verbose_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 62, &top_level__mercury_compile_llds_back_end__Stats_20);
    }
    {
      top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35, (MR_Integer) 310, (MR_String) "saved_vars_const", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_29, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_39_39);
    }
    {
      top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41, (MR_Integer) 315, (MR_String) "saved_vars_cell", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_39_39, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_45_45);
    }
    {
      top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 320, (MR_String) "followcode", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_45_45, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_51_51);
    }
    {
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 5, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__SimplifySpecs_21);
    }
    {
      top_level__mercury_compile_llds_back_end__V_62_62 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_llds_back_end__Globals_18, top_level__mercury_compile_llds_back_end__SimplifySpecs_21);
    }
    {
      top_level__mercury_compile_llds_back_end__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_62_62));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(top_level__mercury_compile_llds_back_end__V_58_58, (MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/11", (MR_String) "simplify has errors");
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55, (MR_Integer) 325, (MR_String) "ll_backend_simplify", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_66_66);
    }
    {
      top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68, (MR_Integer) 330, (MR_String) "liveness", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_72_72);
    }
    {
      top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_8_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_27, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_28);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74, (MR_Integer) 332, (MR_String) "mark_debug_tailrec_calls", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_72_72, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_79_79);
    }
    {
      top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_81_81);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_81_81, (MR_Integer) 335, (MR_String) "stackvars", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_79_79, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_85_85);
    }
    {
      top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_81_81, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, (MR_Integer) 340, (MR_String) "store_map", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_85_85, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_30);
    }
    {
      top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_25, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_93_93, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_94_94);
    }
    {
      top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_93_93, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_94_94, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24);
    }
    {
      top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_93_93, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_26);
    }
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Mapping args to regs...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
    {
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_3(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_String top_level__mercury_compile_llds_back_end__conv3_O_File_11;
    MR_Word top_level__mercury_compile_llds_back_end__conv2_Succeeded_12;

    {
      top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))), ((MR_String) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv3_O_File_11, &top_level__mercury_compile_llds_back_end__conv2_Succeeded_12);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv3_O_File_11));
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv2_Succeeded_12));
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_2(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

    {
      top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1));
    }
    return top_level__mercury_compile_llds_back_end__succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_1(
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
{
  {
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_llds_back_end__conv0_Include_8;

    {
      top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv0_Include_8);
    }
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_Include_8));
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__OpModeCodeGen_10,
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_11,
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData0_12,
  MR_Word top_level__mercury_compile_llds_back_end__Procs_13,
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_14,
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_15,
  MR_Word * top_level__mercury_compile_llds_back_end__FactTableObjFiles_16)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124;
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131;
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_18;
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_19;
    MR_Word top_level__mercury_compile_llds_back_end__Stats_20;
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorRttiData_21;
    MR_Word top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_22;
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassRtti_23;
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_24;
    MR_Word top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_25;
    MR_Word top_level__mercury_compile_llds_back_end__GlobalData_26;
    MR_Word top_level__mercury_compile_llds_back_end__PseudoTypeInfos_27;
    MR_Word top_level__mercury_compile_llds_back_end__HLDSVarNums_28;
    MR_Word top_level__mercury_compile_llds_back_end__ShortLocns_29;
    MR_Word top_level__mercury_compile_llds_back_end__LongLocns_30;
    MR_Word top_level__mercury_compile_llds_back_end__UserEventVarNums_31;
    MR_Word top_level__mercury_compile_llds_back_end__UserEvents_32;
    MR_Word top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_33;
    MR_Word top_level__mercury_compile_llds_back_end__SVarLabelLayouts_34;
    MR_Word top_level__mercury_compile_llds_back_end__LVarLabelLayouts_35;
    MR_Word top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_36;
    MR_Word top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_37;
    MR_Word top_level__mercury_compile_llds_back_end__CallSites_38;
    MR_Word top_level__mercury_compile_llds_back_end__CoveragePoints_39;
    MR_Word top_level__mercury_compile_llds_back_end__ProcStatics_40;
    MR_Word top_level__mercury_compile_llds_back_end__ProcHeadVarNums_41;
    MR_Word top_level__mercury_compile_llds_back_end__ProcVarNames_42;
    MR_Word top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_43;
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntries_44;
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntryMap_45;
    MR_Word top_level__mercury_compile_llds_back_end__ProcEventLayouts_46;
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraces_47;
    MR_Word top_level__mercury_compile_llds_back_end__ProcLayoutDatas_48;
    MR_Word top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_49;
    MR_Word top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50;
    MR_Word top_level__mercury_compile_llds_back_end__TablingInfoStructs_51;
    MR_Word top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_52;
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo_53;
    MR_Word top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_54;
    MR_Word top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_55;
    MR_Word top_level__mercury_compile_llds_back_end__AllocSites_56;
    MR_Word top_level__mercury_compile_llds_back_end__AllocIdMap_57;
    MR_Word top_level__mercury_compile_llds_back_end__TSStringTable_58;
    MR_Word top_level__mercury_compile_llds_back_end__RttiDatas_59;
    MR_Word top_level__mercury_compile_llds_back_end__ComplexityProcs_60;
    MR_Word top_level__mercury_compile_llds_back_end__ModuleSymName_61;
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCodes0_62;
    MR_Word top_level__mercury_compile_llds_back_end__C_BodyCodes_63;
    MR_Word top_level__mercury_compile_llds_back_end__C_Includes_64;
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportDefns_66;
    MR_String top_level__mercury_compile_llds_back_end__MangledModuleName_67;
    MR_String top_level__mercury_compile_llds_back_end__CModuleName_68;
    MR_Integer top_level__mercury_compile_llds_back_end__ProcsPerFunc_69;
    MR_Word top_level__mercury_compile_llds_back_end__ChunkedModules_70;
    MR_Word top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_72;
    MR_Word top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_73;
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_74;
    MR_Word top_level__mercury_compile_llds_back_end__Start_75;
    MR_Word top_level__mercury_compile_llds_back_end__End_76;
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCodes_77;
    MR_Word top_level__mercury_compile_llds_back_end__UserInitPredCNames_78;
    MR_Word top_level__mercury_compile_llds_back_end__UserFinalPredCNames_79;
    MR_Word top_level__mercury_compile_llds_back_end__CFile_80;
    MR_Word top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_81;
    MR_Word top_level__mercury_compile_llds_back_end__V_108_108;
    MR_Word top_level__mercury_compile_llds_back_end__V_111_111;
    MR_Word top_level__mercury_compile_llds_back_end__V_112_112;
    MR_Word top_level__mercury_compile_llds_back_end__V_113_113;
    MR_Word top_level__mercury_compile_llds_back_end__V_114_114;
    MR_Word top_level__mercury_compile_llds_back_end___C_ExportDecls_65;
    MR_Box top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_109_109;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__Globals_18);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 52, &top_level__mercury_compile_llds_back_end__Verbose_19);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 62, &top_level__mercury_compile_llds_back_end__Stats_20);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, (MR_String) "% Generating layout data...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_19);
    }
    {
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__TypeCtorRttiData_21);
    }
    {
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 282, &top_level__mercury_compile_llds_back_end__NewTypeClassRtti_23);
    }
    {
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, top_level__mercury_compile_llds_back_end__NewTypeClassRtti_23, &top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_24);
    }
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    {
      top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_25 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124, top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_22, top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_24);
    }
    {
      ll_backend__stack_layout__generate_llds_layout_data_26_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, top_level__mercury_compile_llds_back_end__GlobalData0_12, &top_level__mercury_compile_llds_back_end__GlobalData_26, &top_level__mercury_compile_llds_back_end__PseudoTypeInfos_27, &top_level__mercury_compile_llds_back_end__HLDSVarNums_28, &top_level__mercury_compile_llds_back_end__ShortLocns_29, &top_level__mercury_compile_llds_back_end__LongLocns_30, &top_level__mercury_compile_llds_back_end__UserEventVarNums_31, &top_level__mercury_compile_llds_back_end__UserEvents_32, &top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_33, &top_level__mercury_compile_llds_back_end__SVarLabelLayouts_34, &top_level__mercury_compile_llds_back_end__LVarLabelLayouts_35, &top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_36, &top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_37, &top_level__mercury_compile_llds_back_end__CallSites_38, &top_level__mercury_compile_llds_back_end__CoveragePoints_39, &top_level__mercury_compile_llds_back_end__ProcStatics_40, &top_level__mercury_compile_llds_back_end__ProcHeadVarNums_41, &top_level__mercury_compile_llds_back_end__ProcVarNames_42, &top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_43, &top_level__mercury_compile_llds_back_end__TableIoEntries_44, &top_level__mercury_compile_llds_back_end__TableIoEntryMap_45, &top_level__mercury_compile_llds_back_end__ProcEventLayouts_46, &top_level__mercury_compile_llds_back_end__ExecTraces_47, &top_level__mercury_compile_llds_back_end__ProcLayoutDatas_48, &top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_49);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_20);
    }
    {
      top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50);
    }
    {
      ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_26, &top_level__mercury_compile_llds_back_end__TablingInfoStructs_51);
    }
    {
      ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_26, &top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_52);
    }
    {
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_26, &top_level__mercury_compile_llds_back_end__StaticCellInfo_53);
    }
    {
      ll_backend__global_data__get_static_cells_3_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo_53, &top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_54, &top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_55);
    }
    {
      ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(top_level__mercury_compile_llds_back_end__GlobalData_26, &top_level__mercury_compile_llds_back_end__AllocSites_56, &top_level__mercury_compile_llds_back_end__AllocIdMap_57);
    }
    {
      ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_26, &top_level__mercury_compile_llds_back_end__TSStringTable_58);
    }
    {
      top_level__mercury_compile_llds_back_end__RttiDatas_59 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124, top_level__mercury_compile_llds_back_end__TypeCtorRttiData_21, top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_25);
    }
    {
      hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__ComplexityProcs_60);
    }
    top_level__mercury_compile_llds_back_end__ModuleSymName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 0)));
    top_level__mercury_compile_llds_back_end__C_HeaderCodes0_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 1)));
    top_level__mercury_compile_llds_back_end__C_BodyCodes_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 2)));
    top_level__mercury_compile_llds_back_end__C_Includes_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 3)));
    top_level__mercury_compile_llds_back_end___C_ExportDecls_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 4)));
    top_level__mercury_compile_llds_back_end__C_ExportDefns_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 5)));
    {
      top_level__mercury_compile_llds_back_end__MangledModuleName_67 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(top_level__mercury_compile_llds_back_end__ModuleSymName_61);
    }
    {
      top_level__mercury_compile_llds_back_end__CModuleName_68 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__MangledModuleName_67, (MR_String) "_module");
    }
    {
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 481, &top_level__mercury_compile_llds_back_end__ProcsPerFunc_69);
    }
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProcsPerFunc_69 == (MR_Integer) 0);
    if (top_level__mercury_compile_llds_back_end__succeeded)
      {
        MR_Word top_level__mercury_compile_llds_back_end__V_106_106;

        {
          top_level__mercury_compile_llds_back_end__V_106_106 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_106_106, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CModuleName_68));
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_106_106, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Procs_13));
        }
        {
          top_level__mercury_compile_llds_back_end__ChunkedModules_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_70, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_106_106));
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word top_level__mercury_compile_llds_back_end__ChunkedProcs_71;

        {
          mercury__list__chunk_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__Procs_13, top_level__mercury_compile_llds_back_end__ProcsPerFunc_69, &top_level__mercury_compile_llds_back_end__ChunkedProcs_71);
        }
        {
          top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(top_level__mercury_compile_llds_back_end__ChunkedProcs_71, top_level__mercury_compile_llds_back_end__CModuleName_68, &top_level__mercury_compile_llds_back_end__ChunkedModules_70);
        }
      }
    {
      top_level__mercury_compile_llds_back_end__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_108_108, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_18));
    }
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
    {
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__prog_data_foreign__parse_tree__prog_data_foreign__type_ctor_info_foreign_import_module_info_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132, top_level__mercury_compile_llds_back_end__V_108_108, top_level__mercury_compile_llds_back_end__C_Includes_64, &top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_72, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_109_109);
    }
    {
      mercury__list__filter_4_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[1], top_level__mercury_compile_llds_back_end__C_HeaderCodes0_62, &top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_73, &top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_74);
    }
    {
      top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(top_level__mercury_compile_llds_back_end__ModuleSymName_61, &top_level__mercury_compile_llds_back_end__Start_75, &top_level__mercury_compile_llds_back_end__End_76);
    }
    {
      top_level__mercury_compile_llds_back_end__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_113_113, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_75));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_113_113, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_74));
    }
    {
      top_level__mercury_compile_llds_back_end__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_114_114, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__End_76));
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      top_level__mercury_compile_llds_back_end__V_112_112 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__V_113_113, top_level__mercury_compile_llds_back_end__V_114_114);
    }
    {
      top_level__mercury_compile_llds_back_end__V_111_111 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_73, top_level__mercury_compile_llds_back_end__V_112_112);
    }
    {
      top_level__mercury_compile_llds_back_end__C_HeaderCodes_77 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_72, top_level__mercury_compile_llds_back_end__V_111_111);
    }
    {
      hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__UserInitPredCNames_78);
    }
    {
      hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__UserFinalPredCNames_79);
    }
    {
      top_level__mercury_compile_llds_back_end__CFile_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 39 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleSymName_61));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_HeaderCodes_77));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_BodyCodes_63));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportDefns_66));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TablingInfoStructs_51));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_54));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 6) = ((MR_Box) (top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_55));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 7) = ((MR_Box) (top_level__mercury_compile_llds_back_end__RttiDatas_59));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 8) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PseudoTypeInfos_27));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 9) = ((MR_Box) (top_level__mercury_compile_llds_back_end__HLDSVarNums_28));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 10) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ShortLocns_29));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 11) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LongLocns_30));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 12) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEventVarNums_31));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 13) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEvents_32));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 14) = ((MR_Box) (top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_33));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 15) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SVarLabelLayouts_34));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 16) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LVarLabelLayouts_35));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 17) = ((MR_Box) (top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_36));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 18) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_37));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 19) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CallSites_38));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 20) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CoveragePoints_39));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 21) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcStatics_40));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 22) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcHeadVarNums_41));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 23) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcVarNames_42));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 24) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_43));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 25) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSStringTable_58));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 26) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntries_44));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 27) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntryMap_45));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 28) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcEventLayouts_46));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 29) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ExecTraces_47));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 30) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLayoutDatas_48));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 31) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_49));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 32) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_52));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 33) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocSites_56));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 34) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocIdMap_57));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 35) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ChunkedModules_70));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 36) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserInitPredCNames_78));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 37) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserFinalPredCNames_79));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_80, 38) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ComplexityProcs_60));
    }
    {
      top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(top_level__mercury_compile_llds_back_end__Globals_18, top_level__mercury_compile_llds_back_end__CFile_80, &top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_81);
    }
    switch (top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_81) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *top_level__mercury_compile_llds_back_end__Succeeded_15 = (MR_Integer) 0;
          *top_level__mercury_compile_llds_back_end__FactTableObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_llds_back_end__C_ExportDecls_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 4)));
          MR_Word top_level__mercury_compile_llds_back_end__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 0)));
          MR_Word top_level__mercury_compile_llds_back_end__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 1)));
          MR_Word top_level__mercury_compile_llds_back_end__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 2)));
          MR_Word top_level__mercury_compile_llds_back_end__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 3)));
          MR_Word top_level__mercury_compile_llds_back_end__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_50, (MR_Integer) 5)));

          {
            backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, top_level__mercury_compile_llds_back_end__C_ExportDecls_86, top_level__mercury_compile_llds_back_end__ModuleName_14);
          }
          switch (top_level__mercury_compile_llds_back_end__OpModeCodeGen_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              {
                MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139;
                MR_Word top_level__mercury_compile_llds_back_end__OutputStream_88;
                MR_Word top_level__mercury_compile_llds_back_end__CompileOK_89;
                MR_Word top_level__mercury_compile_llds_back_end__FactTableBaseFiles_90;
                MR_Word top_level__mercury_compile_llds_back_end__FactTableCompileOKs_91;
                MR_Word top_level__mercury_compile_llds_back_end__V_120_120;
                MR_Word top_level__mercury_compile_llds_back_end__V_122_122;
                MR_Box top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_121_121;

                {
                  mercury__io__output_stream_3_p_0(&top_level__mercury_compile_llds_back_end__OutputStream_88);
                }
                {
                  top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(top_level__mercury_compile_llds_back_end__Globals_18, top_level__mercury_compile_llds_back_end__OutputStream_88, top_level__mercury_compile_llds_back_end__ModuleName_14, &top_level__mercury_compile_llds_back_end__CompileOK_89);
                }
                {
                  hlds__hlds_module__module_get_fact_table_file_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_11, &top_level__mercury_compile_llds_back_end__FactTableBaseFiles_90);
                }
                {
                  top_level__mercury_compile_llds_back_end__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_9_p_0_3));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_18));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__OutputStream_88));
                }
                top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                {
                  mercury__list__map2_foldl_6_p_2(top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139, top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132, top_level__mercury_compile_llds_back_end__V_120_120, top_level__mercury_compile_llds_back_end__FactTableBaseFiles_90, top_level__mercury_compile_llds_back_end__FactTableObjFiles_16, &top_level__mercury_compile_llds_back_end__FactTableCompileOKs_91, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_121_121);
                }
                {
                  top_level__mercury_compile_llds_back_end__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_122_122, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CompileOK_89));
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_122_122, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__FactTableCompileOKs_91));
                }
                {
                  mercury__bool__and_list_2_p_0(top_level__mercury_compile_llds_back_end__V_122_122, top_level__mercury_compile_llds_back_end__Succeeded_15);
                }
                {
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(*top_level__mercury_compile_llds_back_end__Succeeded_15);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                *top_level__mercury_compile_llds_back_end__Succeeded_15 = (MR_Integer) 1;
                *top_level__mercury_compile_llds_back_end__FactTableObjFiles_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              break;
          }
        }
        break;
    }
  }
}

void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_29,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30,
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_11,
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_31,
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_32)
{
  {
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_14;
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
    MR_Word top_level__mercury_compile_llds_back_end__OptUnboxFloat_16;
    MR_Word top_level__mercury_compile_llds_back_end__DoCommonData_17;
    MR_Word top_level__mercury_compile_llds_back_end__UnboxFloats_18;
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo0_19;
    MR_Integer top_level__mercury_compile_llds_back_end__TSStringTableSize_20;
    MR_Word top_level__mercury_compile_llds_back_end__TSRevStringTable_21;
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_22;
    MR_Word top_level__mercury_compile_llds_back_end__Stats_23;
    MR_Word top_level__mercury_compile_llds_back_end__TradPasses_24;
    MR_Word top_level__mercury_compile_llds_back_end__Specs_25;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_37_37;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44;
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47;
    MR_Integer top_level__mercury_compile_llds_back_end___NumWarnings_26;
    MR_Integer top_level__mercury_compile_llds_back_end___NumErrors_27;

    {
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__ModuleName_14);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 248, &top_level__mercury_compile_llds_back_end__OptUnboxFloat_16);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 459, &top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
    switch (top_level__mercury_compile_llds_back_end__OptUnboxFloat_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 0;
        break;
    }
    {
      top_level__mercury_compile_llds_back_end__StaticCellInfo0_19 = ll_backend__global_data__init_static_cell_info_3_f_0(top_level__mercury_compile_llds_back_end__ModuleName_14, top_level__mercury_compile_llds_back_end__UnboxFloats_18, top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
    {
      hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__TSStringTableSize_20, &top_level__mercury_compile_llds_back_end__TSRevStringTable_21);
    }
    {
      ll_backend__global_data__global_data_init_4_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo0_19, top_level__mercury_compile_llds_back_end__TSStringTableSize_20, top_level__mercury_compile_llds_back_end__TSRevStringTable_21, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_37_37);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 52, &top_level__mercury_compile_llds_back_end__Verbose_22);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 62, &top_level__mercury_compile_llds_back_end__Stats_23);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) "% Mapping args to regs...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_22);
    }
    {
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) " done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_23);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, (MR_Integer) 305, (MR_String) "args_to_regs", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_31, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 302, &top_level__mercury_compile_llds_back_end__TradPasses_24);
    }
    {
      ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_37_37, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47);
    }
    switch (top_level__mercury_compile_llds_back_end__TradPasses_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_29, top_level__mercury_compile_llds_back_end__LLDS_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__Specs_25, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_32);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_29, top_level__mercury_compile_llds_back_end__LLDS_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__Specs_25);
          }
          *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_32 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44;
        }
        break;
    }
    {
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_llds_back_end__Specs_25, top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end___NumWarnings_26, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end___NumErrors_27);
    }
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

/* :- end_module top_level.mercury_compile_llds_back_end. */
