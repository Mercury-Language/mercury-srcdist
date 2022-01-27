/*
** Automatically generated from `mercury_compile_llds_back_end.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "integer.mih"
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
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
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




#line 202 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 205 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 208 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 211 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

#line 214 "top_level.mercury_compile_llds_back_end.c"
static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6];

#line 217 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0;

#line 220 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1];

#line 223 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1];

#line 226 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1];

#line 229 "top_level.mercury_compile_llds_back_end.c"
static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1];

#line 232 "top_level.mercury_compile_llds_back_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
#line 235 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 237 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2);

#line 240 "top_level.mercury_compile_llds_back_end.c"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
#line 243 "top_level.mercury_compile_llds_back_end.c"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 245 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 247 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3);

#line 163 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__163__1_2_p_0(
#line 163 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_57,
#line 163 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_58);

#line 734 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3);

#line 734 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2);

#line 879 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
#line 879 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
#line 879 "mercury_compile_llds_back_end.m"
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12);

#line 865 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10);

#line 858 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
#line 858 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 858 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
#line 858 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8);

#line 847 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
#line 847 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 847 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 847 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
#line 847 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4);

#line 841 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
#line 841 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
#line 841 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
#line 841 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6);

#line 809 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
#line 809 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 809 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
#line 809 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8);

#line 797 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
#line 797 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
#line 797 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
#line 797 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6);

#line 792 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2);

#line 756 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
#line 756 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
#line 756 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
#line 756 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Foreign_InterfaceInfo_6);

#line 593 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);

#line 575 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);

#line 564 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13);

#line 560 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 553 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

#line 549 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 542 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

#line 524 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_5_p_0(
#line 524 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_6,
#line 524 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_7,
#line 524 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_8);

#line 516 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1(
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 501 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15,
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16);

#line 495 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 480 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);

#line 472 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 462 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 455 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 444 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 437 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 426 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 301 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__ProcCode_19,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47);

#line 284 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9);

#line 216 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_7,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9);

#line 190 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_24,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_25,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_10);

#line 163 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0_1(
#line 163 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg);

#line 143 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0(
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_21,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_23,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_24,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_25);

#line 715 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3(
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 679 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2(
#line 679 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 679 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1);

#line 672 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1(
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);


static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[8][2];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[3][8];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][4];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[6][3];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[1][10];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][5];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[5][1];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][9];




static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[1]))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[2]))
  },
  /* row 7 */
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1017 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1025 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1033 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1041 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

#line 1049 "top_level.mercury_compile_llds_back_end.c"
static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
};

#line 1059 "top_level.mercury_compile_llds_back_end.c"
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
  NULL
};

#line 1074 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

#line 1079 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0
  }
};

#line 1088 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

#line 1093 "top_level.mercury_compile_llds_back_end.c"
static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1] = {
  (MR_Integer) 0
};

#line 1098 "top_level.mercury_compile_llds_back_end.c"
const MR_TypeCtorInfo_Struct top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_foreign_interface_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1115 "top_level.mercury_compile_llds_back_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
#line 1118 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 1120 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2)
#line 1122 "top_level.mercury_compile_llds_back_end.c"
{
#line 1124 "top_level.mercury_compile_llds_back_end.c"
  {
#line 1126 "top_level.mercury_compile_llds_back_end.c"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 1129 "top_level.mercury_compile_llds_back_end.c"
    {
#line 1131 "top_level.mercury_compile_llds_back_end.c"
      top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2));
    }
#line 1134 "top_level.mercury_compile_llds_back_end.c"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 1136 "top_level.mercury_compile_llds_back_end.c"
  }
#line 1138 "top_level.mercury_compile_llds_back_end.c"
}

#line 1141 "top_level.mercury_compile_llds_back_end.c"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
#line 1144 "top_level.mercury_compile_llds_back_end.c"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 1146 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 1148 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3)
#line 1150 "top_level.mercury_compile_llds_back_end.c"
{
#line 1152 "top_level.mercury_compile_llds_back_end.c"
  {
#line 1154 "top_level.mercury_compile_llds_back_end.c"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1;

#line 1157 "top_level.mercury_compile_llds_back_end.c"
    {
#line 1159 "top_level.mercury_compile_llds_back_end.c"
      top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(&top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3));
    }
#line 1162 "top_level.mercury_compile_llds_back_end.c"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1));
#line 1164 "top_level.mercury_compile_llds_back_end.c"
  }
#line 1166 "top_level.mercury_compile_llds_back_end.c"
}

#line 163 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__163__1_2_p_0(
#line 163 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_57,
#line 163 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_58)
#line 163 "mercury_compile_llds_back_end.m"
{
#line 163 "mercury_compile_llds_back_end.m"
  {
#line 163 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__HeadVar__1_57 == top_level__mercury_compile_llds_back_end__HeadVar__2_58);

#line 163 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 163 "mercury_compile_llds_back_end.m"
  }
#line 163 "mercury_compile_llds_back_end.m"
}

#line 734 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3)
#line 734 "mercury_compile_llds_back_end.m"
{
#line 734 "mercury_compile_llds_back_end.m"
  {
#line 734 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 734 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastX_21 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__2_2;
#line 734 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastY_22 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__3_3;

#line 734 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__CastX_21 == top_level__mercury_compile_llds_back_end__CastY_22);
#line 734 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 1214 "top_level.mercury_compile_llds_back_end.c"
      *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = (MR_Integer) 0;
#line 734 "mercury_compile_llds_back_end.m"
    else
#line 734 "mercury_compile_llds_back_end.m"
      {
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 0)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 1)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 2)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 3)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 4)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 5)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 0)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 1)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 2)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 3)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 4)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 5)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_16_16;

#line 734 "mercury_compile_llds_back_end.m"
        {
#line 734 "mercury_compile_llds_back_end.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&top_level__mercury_compile_llds_back_end__V_16_16, top_level__mercury_compile_llds_back_end__V_4_4, top_level__mercury_compile_llds_back_end__V_10_10);
        }
#line 1252 "top_level.mercury_compile_llds_back_end.c"
        top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_16_16 == (MR_Integer) 0);
#line 734 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 734 "mercury_compile_llds_back_end.m"
        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_16_16;
#line 734 "mercury_compile_llds_back_end.m"
        else
#line 734 "mercury_compile_llds_back_end.m"
          {
#line 734 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__V_17_17;

#line 734 "mercury_compile_llds_back_end.m"
            {
#line 734 "mercury_compile_llds_back_end.m"
              mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[1], &top_level__mercury_compile_llds_back_end__V_17_17, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_5_5)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_11_11)));
            }
#line 1272 "top_level.mercury_compile_llds_back_end.c"
            top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_17_17 == (MR_Integer) 0);
#line 734 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 734 "mercury_compile_llds_back_end.m"
            if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
              *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_17_17;
#line 734 "mercury_compile_llds_back_end.m"
            else
#line 734 "mercury_compile_llds_back_end.m"
              {
#line 734 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__V_18_18;

#line 734 "mercury_compile_llds_back_end.m"
                {
#line 734 "mercury_compile_llds_back_end.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[2], &top_level__mercury_compile_llds_back_end__V_18_18, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_6_6)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_12_12)));
                }
#line 1292 "top_level.mercury_compile_llds_back_end.c"
                top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_18_18 == (MR_Integer) 0);
#line 734 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 734 "mercury_compile_llds_back_end.m"
                if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
                  *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_18_18;
#line 734 "mercury_compile_llds_back_end.m"
                else
#line 734 "mercury_compile_llds_back_end.m"
                  {
#line 734 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;

#line 734 "mercury_compile_llds_back_end.m"
                    {
#line 734 "mercury_compile_llds_back_end.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[3], &top_level__mercury_compile_llds_back_end__V_19_19, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_7_7)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_13_13)));
                    }
#line 1312 "top_level.mercury_compile_llds_back_end.c"
                    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_19_19 == (MR_Integer) 0);
#line 734 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 734 "mercury_compile_llds_back_end.m"
                    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
                      *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_19_19;
#line 734 "mercury_compile_llds_back_end.m"
                    else
#line 734 "mercury_compile_llds_back_end.m"
                      {
#line 734 "mercury_compile_llds_back_end.m"
                        MR_Word top_level__mercury_compile_llds_back_end__V_20_20;

#line 734 "mercury_compile_llds_back_end.m"
                        {
#line 734 "mercury_compile_llds_back_end.m"
                          parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&top_level__mercury_compile_llds_back_end__V_20_20, top_level__mercury_compile_llds_back_end__V_8_8, top_level__mercury_compile_llds_back_end__V_14_14);
                        }
#line 1332 "top_level.mercury_compile_llds_back_end.c"
                        top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_20_20 == (MR_Integer) 0);
#line 734 "mercury_compile_llds_back_end.m"
                        top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 734 "mercury_compile_llds_back_end.m"
                        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
                          *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_20_20;
#line 734 "mercury_compile_llds_back_end.m"
                        else
#line 734 "mercury_compile_llds_back_end.m"
                          {
#line 734 "mercury_compile_llds_back_end.m"
                            {
#line 734 "mercury_compile_llds_back_end.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[4], top_level__mercury_compile_llds_back_end__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_9_9)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_15_15)));
#line 734 "mercury_compile_llds_back_end.m"
                              return;
                            }
#line 734 "mercury_compile_llds_back_end.m"
                          }
#line 734 "mercury_compile_llds_back_end.m"
                      }
#line 734 "mercury_compile_llds_back_end.m"
                  }
#line 734 "mercury_compile_llds_back_end.m"
              }
#line 734 "mercury_compile_llds_back_end.m"
          }
#line 734 "mercury_compile_llds_back_end.m"
      }
#line 734 "mercury_compile_llds_back_end.m"
  }
#line 734 "mercury_compile_llds_back_end.m"
}

#line 734 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 734 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2)
#line 734 "mercury_compile_llds_back_end.m"
{
#line 734 "mercury_compile_llds_back_end.m"
  {
#line 734 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 734 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastX_15 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__1_1;
#line 734 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastY_16 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__2_2;

#line 734 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__CastX_15 == top_level__mercury_compile_llds_back_end__CastY_16);
#line 734 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = MR_TRUE;
#line 734 "mercury_compile_llds_back_end.m"
    else
#line 734 "mercury_compile_llds_back_end.m"
      {
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_18_18;
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_19_19;
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_20_20;
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_22_22;
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 2)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 3)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 4)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 5)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 0)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 1)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 2)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 3)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 4)));
#line 734 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 5)));

#line 1429 "top_level.mercury_compile_llds_back_end.c"
        {
#line 1431 "top_level.mercury_compile_llds_back_end.c"
          top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_llds_back_end__V_3_3, top_level__mercury_compile_llds_back_end__V_9_9);
        }
#line 734 "mercury_compile_llds_back_end.m"
        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
          {
#line 1438 "top_level.mercury_compile_llds_back_end.c"
            top_level__mercury_compile_llds_back_end__TypeInfo_18_18 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[1];
#line 1440 "top_level.mercury_compile_llds_back_end.c"
            {
#line 1442 "top_level.mercury_compile_llds_back_end.c"
              top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_18_18, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_4_4)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_10_10)));
            }
#line 734 "mercury_compile_llds_back_end.m"
            if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
              {
#line 1449 "top_level.mercury_compile_llds_back_end.c"
                top_level__mercury_compile_llds_back_end__TypeInfo_19_19 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[2];
#line 1451 "top_level.mercury_compile_llds_back_end.c"
                {
#line 1453 "top_level.mercury_compile_llds_back_end.c"
                  top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_19_19, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_5_5)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_11_11)));
                }
#line 734 "mercury_compile_llds_back_end.m"
                if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
                  {
#line 1460 "top_level.mercury_compile_llds_back_end.c"
                    top_level__mercury_compile_llds_back_end__TypeInfo_20_20 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[3];
#line 1462 "top_level.mercury_compile_llds_back_end.c"
                    {
#line 1464 "top_level.mercury_compile_llds_back_end.c"
                      top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_20_20, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_6_6)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_12_12)));
                    }
#line 734 "mercury_compile_llds_back_end.m"
                    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
                      {
#line 1471 "top_level.mercury_compile_llds_back_end.c"
                        {
#line 1473 "top_level.mercury_compile_llds_back_end.c"
                          top_level__mercury_compile_llds_back_end__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(top_level__mercury_compile_llds_back_end__V_7_7, top_level__mercury_compile_llds_back_end__V_13_13);
                        }
#line 734 "mercury_compile_llds_back_end.m"
                        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 734 "mercury_compile_llds_back_end.m"
                          {
#line 1480 "top_level.mercury_compile_llds_back_end.c"
                            top_level__mercury_compile_llds_back_end__TypeInfo_22_22 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[4];
#line 1482 "top_level.mercury_compile_llds_back_end.c"
                            {
#line 1484 "top_level.mercury_compile_llds_back_end.c"
                              return top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_22_22, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_8_8)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_14_14)));
                            }
#line 734 "mercury_compile_llds_back_end.m"
                          }
#line 734 "mercury_compile_llds_back_end.m"
                      }
#line 734 "mercury_compile_llds_back_end.m"
                  }
#line 734 "mercury_compile_llds_back_end.m"
              }
#line 734 "mercury_compile_llds_back_end.m"
          }
#line 734 "mercury_compile_llds_back_end.m"
      }
#line 734 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 734 "mercury_compile_llds_back_end.m"
  }
#line 734 "mercury_compile_llds_back_end.m"
}

#line 879 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
#line 879 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
#line 879 "mercury_compile_llds_back_end.m"
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12)
#line 879 "mercury_compile_llds_back_end.m"
{
#line 883 "mercury_compile_llds_back_end.m"
  {
#line 883 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 883 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_14;
#line 883 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PIC_15;
#line 883 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Obj_16;
#line 883 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__C_File_17;

#line 884 "mercury_compile_llds_back_end.m"
    {
#line 884 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_8, &top_level__mercury_compile_llds_back_end__LinkedTargetType_14);
    }
#line 885 "mercury_compile_llds_back_end.m"
    {
#line 885 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__LinkedTargetType_14, &top_level__mercury_compile_llds_back_end__PIC_15);
    }
#line 886 "mercury_compile_llds_back_end.m"
    {
#line 886 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__PIC_15, &top_level__mercury_compile_llds_back_end__Obj_16);
    }
#line 887 "mercury_compile_llds_back_end.m"
    {
#line 887 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__C_File_17 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, (MR_String) ".c");
    }
#line 888 "mercury_compile_llds_back_end.m"
    {
#line 888 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__O_File_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, top_level__mercury_compile_llds_back_end__Obj_16);
    }
#line 889 "mercury_compile_llds_back_end.m"
    {
#line 889 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__ErrorStream_9, top_level__mercury_compile_llds_back_end__PIC_15, top_level__mercury_compile_llds_back_end__C_File_17, *top_level__mercury_compile_llds_back_end__O_File_11, top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__Succeeded_12);
#line 889 "mercury_compile_llds_back_end.m"
      return;
    }
#line 883 "mercury_compile_llds_back_end.m"
  }
#line 879 "mercury_compile_llds_back_end.m"
}

#line 865 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
#line 865 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10)
#line 865 "mercury_compile_llds_back_end.m"
{
#line 868 "mercury_compile_llds_back_end.m"
  {
#line 868 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 868 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_12;
#line 868 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PIC_13;
#line 868 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Obj_14;
#line 868 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__C_File_15;
#line 868 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__O_File_16;

#line 869 "mercury_compile_llds_back_end.m"
    {
#line 869 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_7, &top_level__mercury_compile_llds_back_end__LinkedTargetType_12);
    }
#line 870 "mercury_compile_llds_back_end.m"
    {
#line 870 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__LinkedTargetType_12, &top_level__mercury_compile_llds_back_end__PIC_13);
    }
#line 871 "mercury_compile_llds_back_end.m"
    {
#line 871 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__PIC_13, &top_level__mercury_compile_llds_back_end__Obj_14);
    }
#line 872 "mercury_compile_llds_back_end.m"
    {
#line 872 "mercury_compile_llds_back_end.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__C_File_15);
    }
#line 874 "mercury_compile_llds_back_end.m"
    {
#line 874 "mercury_compile_llds_back_end.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, top_level__mercury_compile_llds_back_end__Obj_14, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__O_File_16);
    }
#line 876 "mercury_compile_llds_back_end.m"
    {
#line 876 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__ErrorStream_8, top_level__mercury_compile_llds_back_end__PIC_13, top_level__mercury_compile_llds_back_end__C_File_15, top_level__mercury_compile_llds_back_end__O_File_16, top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__Succeeded_10);
#line 876 "mercury_compile_llds_back_end.m"
      return;
    }
#line 868 "mercury_compile_llds_back_end.m"
  }
#line 865 "mercury_compile_llds_back_end.m"
}

#line 858 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
#line 858 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 858 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
#line 858 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8)
#line 858 "mercury_compile_llds_back_end.m"
{
#line 861 "mercury_compile_llds_back_end.m"
  {
#line 861 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 861 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LLDS_10;

#line 862 "mercury_compile_llds_back_end.m"
    {
#line 862 "mercury_compile_llds_back_end.m"
      ll_backend__transform_llds__transform_llds_3_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS0_7, &top_level__mercury_compile_llds_back_end__LLDS_10);
    }
#line 863 "mercury_compile_llds_back_end.m"
    {
#line 863 "mercury_compile_llds_back_end.m"
      ll_backend__llds_out__llds_out_file__output_llds_5_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__Succeeded_8);
#line 863 "mercury_compile_llds_back_end.m"
      return;
    }
#line 861 "mercury_compile_llds_back_end.m"
  }
#line 858 "mercury_compile_llds_back_end.m"
}

#line 847 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
#line 847 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 847 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 847 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
#line 847 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4)
#line 847 "mercury_compile_llds_back_end.m"
{
#line 850 "mercury_compile_llds_back_end.m"
  {
#line 850 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 850 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 850 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "mercury_compile_llds_back_end.m"
    else
#line 851 "mercury_compile_llds_back_end.m"
      {
#line 851 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Chunk_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
#line 851 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Chunks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
#line 851 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Module_11;
#line 851 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Modules_12;
#line 851 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__NumString_13;
#line 851 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__ThisModuleName_14;
#line 851 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__Num1_15;

#line 852 "mercury_compile_llds_back_end.m"
        {
#line 852 "mercury_compile_llds_back_end.m"
          mercury__string__int_to_string_2_p_0(top_level__mercury_compile_llds_back_end__HeadVar__3_3, &top_level__mercury_compile_llds_back_end__NumString_13);
        }
#line 853 "mercury_compile_llds_back_end.m"
        {
#line 853 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ThisModuleName_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__NumString_13);
        }
#line 854 "mercury_compile_llds_back_end.m"
        {
#line 854 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__Module_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 854 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ThisModuleName_14));
#line 854 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Chunk_7));
#line 854 "mercury_compile_llds_back_end.m"
        }
#line 855 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__Num1_15 = (top_level__mercury_compile_llds_back_end__HeadVar__3_3 + (MR_Integer) 1);
#line 856 "mercury_compile_llds_back_end.m"
        {
#line 856 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__Chunks_8, top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__Num1_15, &top_level__mercury_compile_llds_back_end__Modules_12);
        }
#line 851 "mercury_compile_llds_back_end.m"
        {
#line 851 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 851 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = base;
#line 851 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Module_11));
#line 851 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Modules_12));
#line 851 "mercury_compile_llds_back_end.m"
        }
#line 851 "mercury_compile_llds_back_end.m"
      }
#line 850 "mercury_compile_llds_back_end.m"
  }
#line 847 "mercury_compile_llds_back_end.m"
}

#line 841 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
#line 841 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
#line 841 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
#line 841 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6)
#line 841 "mercury_compile_llds_back_end.m"
{
#line 844 "mercury_compile_llds_back_end.m"
  {
#line 844 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 845 "mercury_compile_llds_back_end.m"
    {
#line 845 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__ChunkList_4, top_level__mercury_compile_llds_back_end__ModName_5, (MR_Integer) 0, top_level__mercury_compile_llds_back_end__Modules_6);
#line 845 "mercury_compile_llds_back_end.m"
      return;
    }
#line 844 "mercury_compile_llds_back_end.m"
  }
#line 841 "mercury_compile_llds_back_end.m"
}

#line 809 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
#line 809 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 809 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
#line 809 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8)
#line 809 "mercury_compile_llds_back_end.m"
{
#line 813 "mercury_compile_llds_back_end.m"
  {
#line 813 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 813 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 0)));
#line 813 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 1)));
#line 813 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Context_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 2)));

#line 823 "mercury_compile_llds_back_end.m"
#line 823 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__Lang_10) {
#line 823 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 823 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 817 "mercury_compile_llds_back_end.m"
        {
#line 817 "mercury_compile_llds_back_end.m"
          MR_String top_level__mercury_compile_llds_back_end__HeaderFileName_13;
#line 817 "mercury_compile_llds_back_end.m"
          MR_String top_level__mercury_compile_llds_back_end__IncludeString_14;
#line 817 "mercury_compile_llds_back_end.m"
          MR_String top_level__mercury_compile_llds_back_end__V_40_40;
#line 817 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_44_44;

#line 818 "mercury_compile_llds_back_end.m"
          {
#line 818 "mercury_compile_llds_back_end.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__ModuleName_11, (MR_String) ".mh", &top_level__mercury_compile_llds_back_end__HeaderFileName_13);
          }
#line 820 "mercury_compile_llds_back_end.m"
          {
#line 820 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_40_40 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeaderFileName_13, (MR_String) "\"\n");
          }
#line 820 "mercury_compile_llds_back_end.m"
          {
#line 820 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__IncludeString_14 = mercury__string__f_43_43_2_f_0((MR_String) "#include \"", top_level__mercury_compile_llds_back_end__V_40_40);
          }
#line 822 "mercury_compile_llds_back_end.m"
          {
#line 822 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 822 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_44_44, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__IncludeString_14));
#line 822 "mercury_compile_llds_back_end.m"
          }
#line 821 "mercury_compile_llds_back_end.m"
          {
#line 821 "mercury_compile_llds_back_end.m"
            MR_Word base;
#line 821 "mercury_compile_llds_back_end.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 821 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__Include_8 = base;
#line 821 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 821 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 821 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_44_44));
#line 821 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Context_12));
#line 821 "mercury_compile_llds_back_end.m"
          }
#line 817 "mercury_compile_llds_back_end.m"
        }
#line 823 "mercury_compile_llds_back_end.m"
        break;
#line 823 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 824 "mercury_compile_llds_back_end.m"
        {
#line 825 "mercury_compile_llds_back_end.m"
          {
#line 825 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for C#");
#line 825 "mercury_compile_llds_back_end.m"
            return;
          }
#line 824 "mercury_compile_llds_back_end.m"
        }
#line 823 "mercury_compile_llds_back_end.m"
        break;
#line 823 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 4:
#line 836 "mercury_compile_llds_back_end.m"
        {
#line 837 "mercury_compile_llds_back_end.m"
          {
#line 837 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Erlang");
#line 837 "mercury_compile_llds_back_end.m"
            return;
          }
#line 836 "mercury_compile_llds_back_end.m"
        }
#line 823 "mercury_compile_llds_back_end.m"
        break;
#line 823 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 3:
#line 828 "mercury_compile_llds_back_end.m"
        {
#line 829 "mercury_compile_llds_back_end.m"
          {
#line 829 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for IL");
#line 829 "mercury_compile_llds_back_end.m"
            return;
          }
#line 828 "mercury_compile_llds_back_end.m"
        }
#line 823 "mercury_compile_llds_back_end.m"
        break;
#line 823 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 2:
#line 832 "mercury_compile_llds_back_end.m"
        {
#line 833 "mercury_compile_llds_back_end.m"
          {
#line 833 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Java");
#line 833 "mercury_compile_llds_back_end.m"
            return;
          }
#line 832 "mercury_compile_llds_back_end.m"
        }
#line 823 "mercury_compile_llds_back_end.m"
        break;
#line 823 "mercury_compile_llds_back_end.m"
    }
#line 813 "mercury_compile_llds_back_end.m"
  }
#line 809 "mercury_compile_llds_back_end.m"
}

#line 797 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
#line 797 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
#line 797 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
#line 797 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6)
#line 797 "mercury_compile_llds_back_end.m"
{
#line 800 "mercury_compile_llds_back_end.m"
  {
#line 800 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 800 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Define_7;
#line 800 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Start_8;
#line 800 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_11_11;
#line 800 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_12_12;
#line 800 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_14_14;
#line 800 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_18_18;
#line 800 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;
#line 800 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_23_23;

#line 801 "mercury_compile_llds_back_end.m"
    {
#line 801 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__Define_7 = backend_libs__foreign__decl_guard_1_f_0(top_level__mercury_compile_llds_back_end__ModuleName_4);
    }
#line 802 "mercury_compile_llds_back_end.m"
    {
#line 802 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_14_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, (MR_String) "\n");
    }
#line 802 "mercury_compile_llds_back_end.m"
    {
#line 802 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\n#define ", top_level__mercury_compile_llds_back_end__V_14_14);
    }
#line 802 "mercury_compile_llds_back_end.m"
    {
#line 802 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_11_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, top_level__mercury_compile_llds_back_end__V_12_12);
    }
#line 802 "mercury_compile_llds_back_end.m"
    {
#line 802 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__Start_8 = mercury__string__f_43_43_2_f_0((MR_String) "#ifndef ", top_level__mercury_compile_llds_back_end__V_11_11);
    }
#line 805 "mercury_compile_llds_back_end.m"
    {
#line 805 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 805 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_18_18, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_8));
#line 805 "mercury_compile_llds_back_end.m"
    }
#line 805 "mercury_compile_llds_back_end.m"
    {
#line 805 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_19_19 = mercury__term__context_init_0_f_0();
    }
#line 804 "mercury_compile_llds_back_end.m"
    {
#line 804 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 804 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 804 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__StartGuard_5 = base;
#line 804 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 804 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 804 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_18_18));
#line 804 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_19_19));
#line 804 "mercury_compile_llds_back_end.m"
    }
#line 807 "mercury_compile_llds_back_end.m"
    {
#line 807 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_23_23 = mercury__term__context_init_0_f_0();
    }
#line 806 "mercury_compile_llds_back_end.m"
    {
#line 806 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 806 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 806 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__EndGuard_6 = base;
#line 806 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 806 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 806 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[4]));
#line 806 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_23_23));
#line 806 "mercury_compile_llds_back_end.m"
    }
#line 800 "mercury_compile_llds_back_end.m"
  }
#line 797 "mercury_compile_llds_back_end.m"
}

#line 792 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2)
#line 792 "mercury_compile_llds_back_end.m"
{
#line 794 "mercury_compile_llds_back_end.m"
  {
#line 794 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 794 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 1)));
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 0)));
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 2)));
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 3)));

#line 795 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_6_6 == (MR_Integer) 0);
#line 794 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 794 "mercury_compile_llds_back_end.m"
  }
#line 792 "mercury_compile_llds_back_end.m"
}

#line 756 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
#line 756 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
#line 756 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
#line 756 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Foreign_InterfaceInfo_6)
#line 756 "mercury_compile_llds_back_end.m"
{
#line 759 "mercury_compile_llds_back_end.m"
  {
#line 759 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_27_27;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_7;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignSelfImport_8;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImportsCord0_11;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImportsCord_14;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImports_15;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_16;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_18;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignImports_20;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Foreign_ExportDecls_22;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Foreign_ExportDefns_23;
#line 759 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_24_24;
#line 779 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherDeclCodes_17;
#line 781 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherBodyCodes_19;
#line 783 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherImports_21;

#line 760 "mercury_compile_llds_back_end.m"
    {
#line 760 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ModuleName_7);
    }
#line 762 "mercury_compile_llds_back_end.m"
    {
#line 762 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_24_24 = mercury__term__context_init_0_f_0();
    }
#line 761 "mercury_compile_llds_back_end.m"
    {
#line 761 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignSelfImport_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 761 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UseForeignLanguage_5));
#line 761 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
#line 761 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_24_24));
#line 761 "mercury_compile_llds_back_end.m"
    }
#line 763 "mercury_compile_llds_back_end.m"
    {
#line 763 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9);
    }
#line 764 "mercury_compile_llds_back_end.m"
    {
#line 764 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10);
    }
#line 765 "mercury_compile_llds_back_end.m"
    {
#line 765 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignImportsCord0_11);
    }
#line 766 "mercury_compile_llds_back_end.m"
    {
#line 766 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9);
    }
#line 767 "mercury_compile_llds_back_end.m"
    {
#line 767 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10);
    }
#line 2186 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
#line 768 "mercury_compile_llds_back_end.m"
    {
#line 768 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignImportsCord_14 = mercury__cord__snoc_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_27_27, top_level__mercury_compile_llds_back_end__ForeignImportsCord0_11, ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignSelfImport_8)));
    }
#line 769 "mercury_compile_llds_back_end.m"
    {
#line 769 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignImports_15 = mercury__cord__list_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_27_27, top_level__mercury_compile_llds_back_end__ForeignImportsCord_14);
    }
#line 779 "mercury_compile_llds_back_end.m"
    {
#line 779 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_decls_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12, &top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_16, &top_level__mercury_compile_llds_back_end___OtherDeclCodes_17);
    }
#line 781 "mercury_compile_llds_back_end.m"
    {
#line 781 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_bodys_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13, &top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_18, &top_level__mercury_compile_llds_back_end___OtherBodyCodes_19);
    }
#line 783 "mercury_compile_llds_back_end.m"
    {
#line 783 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_imports_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignImports_15, &top_level__mercury_compile_llds_back_end__WantedForeignImports_20, &top_level__mercury_compile_llds_back_end___OtherImports_21);
    }
#line 785 "mercury_compile_llds_back_end.m"
    {
#line 785 "mercury_compile_llds_back_end.m"
      backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__Foreign_ExportDecls_22);
    }
#line 786 "mercury_compile_llds_back_end.m"
    {
#line 786 "mercury_compile_llds_back_end.m"
      backend_libs__export__get_foreign_export_defns_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__Foreign_ExportDefns_23);
    }
#line 788 "mercury_compile_llds_back_end.m"
    {
#line 788 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 788 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 788 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__Foreign_InterfaceInfo_6 = base;
#line 788 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
#line 788 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_16));
#line 788 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_18));
#line 788 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignImports_20));
#line 788 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Foreign_ExportDecls_22));
#line 788 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Foreign_ExportDefns_23));
#line 788 "mercury_compile_llds_back_end.m"
    }
#line 759 "mercury_compile_llds_back_end.m"
  }
#line 756 "mercury_compile_llds_back_end.m"
}

#line 593 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 593 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16)
#line 593 "mercury_compile_llds_back_end.m"
{
#line 597 "mercury_compile_llds_back_end.m"
  {
#line 597 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 598 "mercury_compile_llds_back_end.m"
    {
#line 598 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Generating call continuation information...");
    }
#line 600 "mercury_compile_llds_back_end.m"
    {
#line 600 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
    }
#line 601 "mercury_compile_llds_back_end.m"
    {
#line 601 "mercury_compile_llds_back_end.m"
      ll_backend__continuation_info__maybe_process_llds_4_p_0(top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);
    }
#line 602 "mercury_compile_llds_back_end.m"
    {
#line 602 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) " done.\n");
    }
#line 603 "mercury_compile_llds_back_end.m"
    {
#line 603 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
#line 603 "mercury_compile_llds_back_end.m"
      return;
    }
#line 597 "mercury_compile_llds_back_end.m"
  }
#line 593 "mercury_compile_llds_back_end.m"
}

#line 575 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
#line 575 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18)
#line 575 "mercury_compile_llds_back_end.m"
{
#line 579 "mercury_compile_llds_back_end.m"
  {
#line 579 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 579 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 579 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_16;

#line 580 "mercury_compile_llds_back_end.m"
    {
#line 580 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 581 "mercury_compile_llds_back_end.m"
    {
#line 581 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 464, &top_level__mercury_compile_llds_back_end__Optimize_16);
    }
#line 589 "mercury_compile_llds_back_end.m"
#line 589 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__Optimize_16) {
#line 589 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 589 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 590 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17;
#line 589 "mercury_compile_llds_back_end.m"
        break;
#line 589 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 583 "mercury_compile_llds_back_end.m"
        {
#line 584 "mercury_compile_llds_back_end.m"
          {
#line 584 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Doing optimizations...\n");
          }
#line 585 "mercury_compile_llds_back_end.m"
          {
#line 585 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
          }
#line 586 "mercury_compile_llds_back_end.m"
          {
#line 586 "mercury_compile_llds_back_end.m"
            ll_backend__optimize__optimize_procs_4_p_0(top_level__mercury_compile_llds_back_end__Globals_15, top_level__mercury_compile_llds_back_end__GlobalData_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);
          }
#line 587 "mercury_compile_llds_back_end.m"
          {
#line 587 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% done.\n");
          }
#line 588 "mercury_compile_llds_back_end.m"
          {
#line 588 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
#line 588 "mercury_compile_llds_back_end.m"
            return;
          }
#line 583 "mercury_compile_llds_back_end.m"
        }
#line 589 "mercury_compile_llds_back_end.m"
        break;
#line 589 "mercury_compile_llds_back_end.m"
    }
#line 579 "mercury_compile_llds_back_end.m"
  }
#line 575 "mercury_compile_llds_back_end.m"
}

#line 564 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16,
#line 564 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13)
#line 564 "mercury_compile_llds_back_end.m"
{
#line 568 "mercury_compile_llds_back_end.m"
  {
#line 568 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 569 "mercury_compile_llds_back_end.m"
    {
#line 569 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% Generating code...\n");
    }
#line 570 "mercury_compile_llds_back_end.m"
    {
#line 570 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_10);
    }
#line 571 "mercury_compile_llds_back_end.m"
    {
#line 571 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__generate_module_code_6_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16, top_level__mercury_compile_llds_back_end__LLDS_13);
    }
#line 572 "mercury_compile_llds_back_end.m"
    {
#line 572 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% done.\n");
    }
#line 573 "mercury_compile_llds_back_end.m"
    {
#line 573 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_11);
#line 573 "mercury_compile_llds_back_end.m"
      return;
    }
#line 568 "mercury_compile_llds_back_end.m"
  }
#line 564 "mercury_compile_llds_back_end.m"
}

#line 560 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 560 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 560 "mercury_compile_llds_back_end.m"
{
#line 560 "mercury_compile_llds_back_end.m"
  {
#line 560 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 560 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 560 "mercury_compile_llds_back_end.m"
    {
#line 560 "mercury_compile_llds_back_end.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 560 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 560 "mercury_compile_llds_back_end.m"
  }
#line 560 "mercury_compile_llds_back_end.m"
}

#line 553 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 553 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 553 "mercury_compile_llds_back_end.m"
{
#line 556 "mercury_compile_llds_back_end.m"
  {
#line 556 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 557 "mercury_compile_llds_back_end.m"
    {
#line 557 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Allocating store map...");
    }
#line 558 "mercury_compile_llds_back_end.m"
    {
#line 558 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 559 "mercury_compile_llds_back_end.m"
    {
#line 559 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[3]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 561 "mercury_compile_llds_back_end.m"
    {
#line 561 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 562 "mercury_compile_llds_back_end.m"
    {
#line 562 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 562 "mercury_compile_llds_back_end.m"
      return;
    }
#line 556 "mercury_compile_llds_back_end.m"
  }
#line 553 "mercury_compile_llds_back_end.m"
}

#line 549 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 549 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 549 "mercury_compile_llds_back_end.m"
{
#line 549 "mercury_compile_llds_back_end.m"
  {
#line 549 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 549 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

#line 549 "mercury_compile_llds_back_end.m"
    {
#line 549 "mercury_compile_llds_back_end.m"
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
#line 549 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
#line 549 "mercury_compile_llds_back_end.m"
  }
#line 549 "mercury_compile_llds_back_end.m"
}

#line 542 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 542 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 542 "mercury_compile_llds_back_end.m"
{
#line 545 "mercury_compile_llds_back_end.m"
  {
#line 545 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 546 "mercury_compile_llds_back_end.m"
    {
#line 546 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing stack vars...");
    }
#line 547 "mercury_compile_llds_back_end.m"
    {
#line 547 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 548 "mercury_compile_llds_back_end.m"
    {
#line 548 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[2]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 550 "mercury_compile_llds_back_end.m"
    {
#line 550 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 551 "mercury_compile_llds_back_end.m"
    {
#line 551 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 551 "mercury_compile_llds_back_end.m"
      return;
    }
#line 545 "mercury_compile_llds_back_end.m"
  }
#line 542 "mercury_compile_llds_back_end.m"
}

#line 524 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_5_p_0(
#line 524 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_6,
#line 524 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_7,
#line 524 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_8)
#line 524 "mercury_compile_llds_back_end.m"
{
#line 527 "mercury_compile_llds_back_end.m"
  {
#line 527 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 527 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_10;
#line 527 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_11;

#line 528 "mercury_compile_llds_back_end.m"
    {
#line 528 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_8, &top_level__mercury_compile_llds_back_end__Globals_10);
    }
#line 529 "mercury_compile_llds_back_end.m"
    {
#line 529 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_10, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_11);
    }
#line 538 "mercury_compile_llds_back_end.m"
#line 538 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__WarnTailCalls_11) {
#line 538 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 538 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 539 "mercury_compile_llds_back_end.m"
        {
#line 539 "mercury_compile_llds_back_end.m"
        }
#line 538 "mercury_compile_llds_back_end.m"
        break;
#line 538 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 532 "mercury_compile_llds_back_end.m"
        {
#line 533 "mercury_compile_llds_back_end.m"
          {
#line 533 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_6, (MR_String) "% Warning about non-tail recursive calls...\n");
          }
#line 535 "mercury_compile_llds_back_end.m"
          {
#line 535 "mercury_compile_llds_back_end.m"
            hlds__mark_tail_calls__warn_non_tail_calls_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_8);
          }
#line 536 "mercury_compile_llds_back_end.m"
          {
#line 536 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_6, (MR_String) "% done.\n");
          }
#line 537 "mercury_compile_llds_back_end.m"
          {
#line 537 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_7);
#line 537 "mercury_compile_llds_back_end.m"
            return;
          }
#line 532 "mercury_compile_llds_back_end.m"
        }
#line 538 "mercury_compile_llds_back_end.m"
        break;
#line 538 "mercury_compile_llds_back_end.m"
    }
#line 527 "mercury_compile_llds_back_end.m"
  }
#line 524 "mercury_compile_llds_back_end.m"
}

#line 516 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1(
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 516 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 516 "mercury_compile_llds_back_end.m"
{
#line 516 "mercury_compile_llds_back_end.m"
  {
#line 516 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 516 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6;

#line 516 "mercury_compile_llds_back_end.m"
    {
#line 516 "mercury_compile_llds_back_end.m"
      hlds__mark_tail_calls__mark_tail_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6);
    }
#line 516 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6));
#line 516 "mercury_compile_llds_back_end.m"
  }
#line 516 "mercury_compile_llds_back_end.m"
}

#line 501 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15,
#line 501 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16)
#line 501 "mercury_compile_llds_back_end.m"
{
#line 504 "mercury_compile_llds_back_end.m"
  {
#line 504 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 504 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 504 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12;
#line 504 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_13;
#line 504 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MarkTailCalls_14;

#line 505 "mercury_compile_llds_back_end.m"
    {
#line 505 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 506 "mercury_compile_llds_back_end.m"
    {
#line 506 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 130, &top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12);
    }
#line 507 "mercury_compile_llds_back_end.m"
    {
#line 507 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_13);
    }
#line 509 "mercury_compile_llds_back_end.m"
    {
#line 509 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MarkTailCalls_14 = mercury__bool__or_2_f_0(top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12, top_level__mercury_compile_llds_back_end__WarnTailCalls_13);
    }
#line 520 "mercury_compile_llds_back_end.m"
#line 520 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__MarkTailCalls_14) {
#line 520 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 520 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 521 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15;
#line 520 "mercury_compile_llds_back_end.m"
        break;
#line 520 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 511 "mercury_compile_llds_back_end.m"
        {
#line 512 "mercury_compile_llds_back_end.m"
          {
#line 512 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Marking directly tail recursive calls...");
          }
#line 514 "mercury_compile_llds_back_end.m"
          {
#line 514 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 515 "mercury_compile_llds_back_end.m"
          {
#line 515 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &top_level__mercury_compile_llds_back_end_scalar_common_8[1]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16);
          }
#line 518 "mercury_compile_llds_back_end.m"
          {
#line 518 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
          }
#line 519 "mercury_compile_llds_back_end.m"
          {
#line 519 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 519 "mercury_compile_llds_back_end.m"
            return;
          }
#line 511 "mercury_compile_llds_back_end.m"
        }
#line 520 "mercury_compile_llds_back_end.m"
        break;
#line 520 "mercury_compile_llds_back_end.m"
    }
#line 504 "mercury_compile_llds_back_end.m"
  }
#line 501 "mercury_compile_llds_back_end.m"
}

#line 495 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 495 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 495 "mercury_compile_llds_back_end.m"
{
#line 495 "mercury_compile_llds_back_end.m"
  {
#line 495 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 495 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

#line 495 "mercury_compile_llds_back_end.m"
    {
#line 495 "mercury_compile_llds_back_end.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
#line 495 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
#line 495 "mercury_compile_llds_back_end.m"
  }
#line 495 "mercury_compile_llds_back_end.m"
}

#line 480 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
#line 480 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15)
#line 480 "mercury_compile_llds_back_end.m"
{
#line 483 "mercury_compile_llds_back_end.m"
  {
#line 483 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 483 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 483 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ParallelLiveness_12;
#line 483 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__DebugLiveness_13;

#line 484 "mercury_compile_llds_back_end.m"
    {
#line 484 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 485 "mercury_compile_llds_back_end.m"
    {
#line 485 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 305, &top_level__mercury_compile_llds_back_end__ParallelLiveness_12);
    }
#line 486 "mercury_compile_llds_back_end.m"
    {
#line 486 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 74, &top_level__mercury_compile_llds_back_end__DebugLiveness_13);
    }
#line 487 "mercury_compile_llds_back_end.m"
    {
#line 487 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing liveness...\n");
    }
#line 488 "mercury_compile_llds_back_end.m"
    {
#line 488 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 490 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ParallelLiveness_12 == (MR_Integer) 1);
#line 490 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 491 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__DebugLiveness_13 == (MR_Integer) -1);
#line 494 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 493 "mercury_compile_llds_back_end.m"
      {
#line 493 "mercury_compile_llds_back_end.m"
        ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
      }
#line 494 "mercury_compile_llds_back_end.m"
    else
#line 495 "mercury_compile_llds_back_end.m"
      {
#line 495 "mercury_compile_llds_back_end.m"
        {
#line 495 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[0]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
        }
#line 495 "mercury_compile_llds_back_end.m"
      }
#line 498 "mercury_compile_llds_back_end.m"
    {
#line 498 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 499 "mercury_compile_llds_back_end.m"
    {
#line 499 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 499 "mercury_compile_llds_back_end.m"
      return;
    }
#line 483 "mercury_compile_llds_back_end.m"
  }
#line 480 "mercury_compile_llds_back_end.m"
}

#line 472 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 472 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 472 "mercury_compile_llds_back_end.m"
{
#line 472 "mercury_compile_llds_back_end.m"
  {
#line 472 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 472 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 472 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 472 "mercury_compile_llds_back_end.m"
    {
#line 472 "mercury_compile_llds_back_end.m"
      ll_backend__follow_code__move_follow_code_in_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 472 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 472 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 472 "mercury_compile_llds_back_end.m"
  }
#line 472 "mercury_compile_llds_back_end.m"
}

#line 462 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 462 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 462 "mercury_compile_llds_back_end.m"
{
#line 465 "mercury_compile_llds_back_end.m"
  {
#line 465 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 465 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 465 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_12;

#line 466 "mercury_compile_llds_back_end.m"
    {
#line 466 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 467 "mercury_compile_llds_back_end.m"
    {
#line 467 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 389, &top_level__mercury_compile_llds_back_end__FollowCode_12);
    }
#line 476 "mercury_compile_llds_back_end.m"
#line 476 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__FollowCode_12) {
#line 476 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 476 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 477 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 476 "mercury_compile_llds_back_end.m"
        break;
#line 476 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 469 "mercury_compile_llds_back_end.m"
        {
#line 470 "mercury_compile_llds_back_end.m"
          {
#line 470 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Migrating branch code...");
          }
#line 471 "mercury_compile_llds_back_end.m"
          {
#line 471 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 472 "mercury_compile_llds_back_end.m"
          {
#line 472 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[7]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 474 "mercury_compile_llds_back_end.m"
          {
#line 474 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
          }
#line 475 "mercury_compile_llds_back_end.m"
          {
#line 475 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 475 "mercury_compile_llds_back_end.m"
            return;
          }
#line 469 "mercury_compile_llds_back_end.m"
        }
#line 476 "mercury_compile_llds_back_end.m"
        break;
#line 476 "mercury_compile_llds_back_end.m"
    }
#line 465 "mercury_compile_llds_back_end.m"
  }
#line 462 "mercury_compile_llds_back_end.m"
}

#line 455 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 455 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 455 "mercury_compile_llds_back_end.m"
{
#line 455 "mercury_compile_llds_back_end.m"
  {
#line 455 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 455 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 455 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 455 "mercury_compile_llds_back_end.m"
    {
#line 455 "mercury_compile_llds_back_end.m"
      ll_backend__stack_opt__stack_opt_cell_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 455 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 455 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 455 "mercury_compile_llds_back_end.m"
  }
#line 455 "mercury_compile_llds_back_end.m"
}

#line 444 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 444 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 444 "mercury_compile_llds_back_end.m"
{
#line 447 "mercury_compile_llds_back_end.m"
  {
#line 447 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 447 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 447 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

#line 448 "mercury_compile_llds_back_end.m"
    {
#line 448 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 449 "mercury_compile_llds_back_end.m"
    {
#line 449 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 373, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
#line 458 "mercury_compile_llds_back_end.m"
#line 458 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVars_12) {
#line 458 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 458 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 459 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 458 "mercury_compile_llds_back_end.m"
        break;
#line 458 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 451 "mercury_compile_llds_back_end.m"
        {
#line 452 "mercury_compile_llds_back_end.m"
          {
#line 452 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using cells...\n");
          }
#line 454 "mercury_compile_llds_back_end.m"
          {
#line 454 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 455 "mercury_compile_llds_back_end.m"
          {
#line 455 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[6]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 456 "mercury_compile_llds_back_end.m"
          {
#line 456 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 457 "mercury_compile_llds_back_end.m"
          {
#line 457 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 457 "mercury_compile_llds_back_end.m"
            return;
          }
#line 451 "mercury_compile_llds_back_end.m"
        }
#line 458 "mercury_compile_llds_back_end.m"
        break;
#line 458 "mercury_compile_llds_back_end.m"
    }
#line 447 "mercury_compile_llds_back_end.m"
  }
#line 444 "mercury_compile_llds_back_end.m"
}

#line 437 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 437 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 437 "mercury_compile_llds_back_end.m"
{
#line 437 "mercury_compile_llds_back_end.m"
  {
#line 437 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 437 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 437 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 437 "mercury_compile_llds_back_end.m"
    {
#line 437 "mercury_compile_llds_back_end.m"
      ll_backend__saved_vars__saved_vars_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 437 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 437 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 437 "mercury_compile_llds_back_end.m"
  }
#line 437 "mercury_compile_llds_back_end.m"
}

#line 426 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 426 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 426 "mercury_compile_llds_back_end.m"
{
#line 429 "mercury_compile_llds_back_end.m"
  {
#line 429 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 429 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 429 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

#line 430 "mercury_compile_llds_back_end.m"
    {
#line 430 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 431 "mercury_compile_llds_back_end.m"
    {
#line 431 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 372, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
#line 440 "mercury_compile_llds_back_end.m"
#line 440 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVars_12) {
#line 440 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 440 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 441 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 440 "mercury_compile_llds_back_end.m"
        break;
#line 440 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 433 "mercury_compile_llds_back_end.m"
        {
#line 434 "mercury_compile_llds_back_end.m"
          {
#line 434 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using constants...\n");
          }
#line 436 "mercury_compile_llds_back_end.m"
          {
#line 436 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 437 "mercury_compile_llds_back_end.m"
          {
#line 437 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[5]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 438 "mercury_compile_llds_back_end.m"
          {
#line 438 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 439 "mercury_compile_llds_back_end.m"
          {
#line 439 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 439 "mercury_compile_llds_back_end.m"
            return;
          }
#line 433 "mercury_compile_llds_back_end.m"
        }
#line 440 "mercury_compile_llds_back_end.m"
        break;
#line 440 "mercury_compile_llds_back_end.m"
    }
#line 429 "mercury_compile_llds_back_end.m"
  }
#line 426 "mercury_compile_llds_back_end.m"
}

#line 301 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__ProcCode_19,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 301 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47)
#line 301 "mercury_compile_llds_back_end.m"
{
#line 307 "mercury_compile_llds_back_end.m"
  {
#line 307 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredProcId_22;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_23;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsConst_24;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsCell_25;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_26;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks0_27;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList0_28;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ConstProp_29;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__DeepProf_30;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSWProf_31;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSCProf_32;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProfTrans_33;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList1_34;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList_35;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks_36;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraceTailRec_37;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_38;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MarkTailCalls_39;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcCode0_40;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_41;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Instructions_42;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_65_65;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_66_66;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_67_67;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_72_72;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_77_77;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_90_90;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94;
#line 307 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97;
#line 406 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_102_102;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__V_103_103;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_104_104;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_105_105;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_106_106;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_107_107;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_108_108;
#line 406 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_109_109;

#line 308 "mercury_compile_llds_back_end.m"
    {
#line 308 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__PredProcId_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 308 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_15));
#line 308 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcId_17));
#line 308 "mercury_compile_llds_back_end.m"
    }
#line 309 "mercury_compile_llds_back_end.m"
    {
#line 309 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43, &top_level__mercury_compile_llds_back_end__Globals_23);
    }
#line 310 "mercury_compile_llds_back_end.m"
    {
#line 310 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 372, &top_level__mercury_compile_llds_back_end__SavedVarsConst_24);
    }
#line 315 "mercury_compile_llds_back_end.m"
#line 315 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVarsConst_24) {
#line 315 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 315 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 316 "mercury_compile_llds_back_end.m"
        {
#line 316 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43;
#line 316 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45;
#line 316 "mercury_compile_llds_back_end.m"
        }
#line 315 "mercury_compile_llds_back_end.m"
        break;
#line 315 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 314 "mercury_compile_llds_back_end.m"
        {
#line 314 "mercury_compile_llds_back_end.m"
          ll_backend__saved_vars__saved_vars_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53);
        }
#line 315 "mercury_compile_llds_back_end.m"
        break;
#line 315 "mercury_compile_llds_back_end.m"
    }
#line 318 "mercury_compile_llds_back_end.m"
    {
#line 318 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 373, &top_level__mercury_compile_llds_back_end__SavedVarsCell_25);
    }
#line 323 "mercury_compile_llds_back_end.m"
#line 323 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVarsCell_25) {
#line 323 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 323 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 324 "mercury_compile_llds_back_end.m"
        {
#line 324 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53;
#line 324 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52;
#line 324 "mercury_compile_llds_back_end.m"
        }
#line 323 "mercury_compile_llds_back_end.m"
        break;
#line 323 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 322 "mercury_compile_llds_back_end.m"
        {
#line 322 "mercury_compile_llds_back_end.m"
          ll_backend__stack_opt__stack_opt_cell_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56);
        }
#line 323 "mercury_compile_llds_back_end.m"
        break;
#line 323 "mercury_compile_llds_back_end.m"
    }
#line 326 "mercury_compile_llds_back_end.m"
    {
#line 326 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 389, &top_level__mercury_compile_llds_back_end__FollowCode_26);
    }
#line 330 "mercury_compile_llds_back_end.m"
#line 330 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__FollowCode_26) {
#line 330 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 330 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 331 "mercury_compile_llds_back_end.m"
        {
#line 331 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56;
#line 331 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55;
#line 331 "mercury_compile_llds_back_end.m"
        }
#line 330 "mercury_compile_llds_back_end.m"
        break;
#line 330 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 329 "mercury_compile_llds_back_end.m"
        {
#line 329 "mercury_compile_llds_back_end.m"
          ll_backend__follow_code__move_follow_code_in_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59);
        }
#line 330 "mercury_compile_llds_back_end.m"
        break;
#line 330 "mercury_compile_llds_back_end.m"
    }
#line 333 "mercury_compile_llds_back_end.m"
    {
#line 333 "mercury_compile_llds_back_end.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, top_level__mercury_compile_llds_back_end__Globals_23, &top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
#line 334 "mercury_compile_llds_back_end.m"
    {
#line 334 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimpList0_28 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
#line 336 "mercury_compile_llds_back_end.m"
    {
#line 336 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 369, &top_level__mercury_compile_llds_back_end__ConstProp_29);
    }
#line 337 "mercury_compile_llds_back_end.m"
    {
#line 337 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 196, &top_level__mercury_compile_llds_back_end__DeepProf_30);
    }
#line 338 "mercury_compile_llds_back_end.m"
    {
#line 338 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 213, &top_level__mercury_compile_llds_back_end__TSWProf_31);
    }
#line 339 "mercury_compile_llds_back_end.m"
    {
#line 339 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 214, &top_level__mercury_compile_llds_back_end__TSCProf_32);
    }
#line 340 "mercury_compile_llds_back_end.m"
    {
#line 340 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_67_67, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSCProf_32));
#line 340 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 340 "mercury_compile_llds_back_end.m"
    }
#line 340 "mercury_compile_llds_back_end.m"
    {
#line 340 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_66_66, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSWProf_31));
#line 340 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_66_66, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_67_67));
#line 340 "mercury_compile_llds_back_end.m"
    }
#line 340 "mercury_compile_llds_back_end.m"
    {
#line 340 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DeepProf_30));
#line 340 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_66_66));
#line 340 "mercury_compile_llds_back_end.m"
    }
#line 340 "mercury_compile_llds_back_end.m"
    {
#line 340 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ProfTrans_33 = mercury__bool__or_list_1_f_0(top_level__mercury_compile_llds_back_end__V_65_65);
    }
#line 349 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ConstProp_29 == (MR_Integer) 1);
#line 349 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 350 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProfTrans_33 == (MR_Integer) 0);
#line 353 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 352 "mercury_compile_llds_back_end.m"
      {
#line 352 "mercury_compile_llds_back_end.m"
        {
#line 352 "mercury_compile_llds_back_end.m"
          mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_llds_back_end__SimpList0_28, &top_level__mercury_compile_llds_back_end__SimpList1_34);
        }
#line 352 "mercury_compile_llds_back_end.m"
      }
#line 353 "mercury_compile_llds_back_end.m"
    else
#line 354 "mercury_compile_llds_back_end.m"
      {
#line 354 "mercury_compile_llds_back_end.m"
        {
#line 354 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__SimpList1_34 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_llds_back_end__SimpList0_28, ((MR_Box) ((MR_Integer) 9)));
        }
#line 354 "mercury_compile_llds_back_end.m"
      }
#line 358 "mercury_compile_llds_back_end.m"
    {
#line 358 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_72_72, 0) = ((MR_Box) ((MR_Integer) 7));
#line 358 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_72_72, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SimpList1_34));
#line 358 "mercury_compile_llds_back_end.m"
    }
#line 357 "mercury_compile_llds_back_end.m"
    {
#line 357 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimpList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 0) = ((MR_Box) ((MR_Integer) 4));
#line 357 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_72_72));
#line 357 "mercury_compile_llds_back_end.m"
    }
#line 359 "mercury_compile_llds_back_end.m"
    {
#line 359 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimplifyTasks_36 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_llds_back_end__SimpList_35);
    }
#line 360 "mercury_compile_llds_back_end.m"
    {
#line 360 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59);
    }
#line 362 "mercury_compile_llds_back_end.m"
    {
#line 362 "mercury_compile_llds_back_end.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(top_level__mercury_compile_llds_back_end__SimplifyTasks_36, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_77_77);
    }
#line 363 "mercury_compile_llds_back_end.m"
    {
#line 363 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Computing liveness in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 365 "mercury_compile_llds_back_end.m"
    {
#line 365 "mercury_compile_llds_back_end.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_77_77, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80);
    }
#line 366 "mercury_compile_llds_back_end.m"
    {
#line 366 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 130, &top_level__mercury_compile_llds_back_end__ExecTraceTailRec_37);
    }
#line 367 "mercury_compile_llds_back_end.m"
    {
#line 367 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_38);
    }
#line 369 "mercury_compile_llds_back_end.m"
    {
#line 369 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MarkTailCalls_39 = mercury__bool__or_2_f_0(top_level__mercury_compile_llds_back_end__ExecTraceTailRec_37, top_level__mercury_compile_llds_back_end__WarnTailCalls_38);
    }
#line 377 "mercury_compile_llds_back_end.m"
#line 377 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__MarkTailCalls_39) {
#line 377 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 377 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 378 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80;
#line 377 "mercury_compile_llds_back_end.m"
        break;
#line 377 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 371 "mercury_compile_llds_back_end.m"
        {
#line 372 "mercury_compile_llds_back_end.m"
          {
#line 372 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Marking directly tail recursive calls in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
          }
#line 375 "mercury_compile_llds_back_end.m"
          {
#line 375 "mercury_compile_llds_back_end.m"
            hlds__mark_tail_calls__mark_tail_calls_6_p_0((MR_Integer) 10, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_80_80, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86);
          }
#line 371 "mercury_compile_llds_back_end.m"
        }
#line 377 "mercury_compile_llds_back_end.m"
        break;
#line 377 "mercury_compile_llds_back_end.m"
    }
#line 384 "mercury_compile_llds_back_end.m"
#line 384 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__WarnTailCalls_38) {
#line 384 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 384 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 385 "mercury_compile_llds_back_end.m"
        {
#line 385 "mercury_compile_llds_back_end.m"
        }
#line 384 "mercury_compile_llds_back_end.m"
        break;
#line 384 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 382 "mercury_compile_llds_back_end.m"
        {
#line 382 "mercury_compile_llds_back_end.m"
          hlds__mark_tail_calls__warn_non_tail_calls_in_proc_7_p_0(top_level__mercury_compile_llds_back_end__Globals_23, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86);
        }
#line 384 "mercury_compile_llds_back_end.m"
        break;
#line 384 "mercury_compile_llds_back_end.m"
    }
#line 387 "mercury_compile_llds_back_end.m"
    {
#line 387 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating stack slots in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 389 "mercury_compile_llds_back_end.m"
    {
#line 389 "mercury_compile_llds_back_end.m"
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_86_86, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_90_90);
    }
#line 390 "mercury_compile_llds_back_end.m"
    {
#line 390 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating storage locations for live vars in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 393 "mercury_compile_llds_back_end.m"
    {
#line 393 "mercury_compile_llds_back_end.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 0, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_90_90, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94);
    }
#line 394 "mercury_compile_llds_back_end.m"
    {
#line 394 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating low-level (LLDS) code for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 396 "mercury_compile_llds_back_end.m"
    {
#line 396 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__generate_proc_code_9_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97, &top_level__mercury_compile_llds_back_end__ProcCode0_40);
    }
#line 398 "mercury_compile_llds_back_end.m"
    {
#line 398 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 464, &top_level__mercury_compile_llds_back_end__Optimize_41);
    }
#line 402 "mercury_compile_llds_back_end.m"
#line 402 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__Optimize_41) {
#line 402 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 402 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 404 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__ProcCode_19 = top_level__mercury_compile_llds_back_end__ProcCode0_40;
#line 402 "mercury_compile_llds_back_end.m"
        break;
#line 402 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 401 "mercury_compile_llds_back_end.m"
        {
#line 401 "mercury_compile_llds_back_end.m"
          ll_backend__optimize__optimize_proc_4_p_0(top_level__mercury_compile_llds_back_end__Globals_23, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97, top_level__mercury_compile_llds_back_end__ProcCode0_40, top_level__mercury_compile_llds_back_end__ProcCode_19);
        }
#line 402 "mercury_compile_llds_back_end.m"
        break;
#line 402 "mercury_compile_llds_back_end.m"
    }
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_102_102 = ((MR_String) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 0)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 1)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 2)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 3)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__Instructions_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 4)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 5)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 6)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 7)));
#line 406 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), *top_level__mercury_compile_llds_back_end__ProcCode_19, (MR_Integer) 8)));
#line 407 "mercury_compile_llds_back_end.m"
    {
#line 407 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating call continuation information for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 410 "mercury_compile_llds_back_end.m"
    {
#line 410 "mercury_compile_llds_back_end.m"
      ll_backend__continuation_info__maybe_process_proc_llds_5_p_0(top_level__mercury_compile_llds_back_end__Instructions_42, top_level__mercury_compile_llds_back_end__PredProcId_22, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_97_97, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47);
#line 410 "mercury_compile_llds_back_end.m"
      return;
    }
#line 307 "mercury_compile_llds_back_end.m"
  }
#line 301 "mercury_compile_llds_back_end.m"
}

#line 284 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 284 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9)
#line 284 "mercury_compile_llds_back_end.m"
{
#line 289 "mercury_compile_llds_back_end.m"
  {
#line 289 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 289 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "mercury_compile_llds_back_end.m"
      {
#line 289 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 289 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 289 "mercury_compile_llds_back_end.m"
      }
#line 289 "mercury_compile_llds_back_end.m"
    else
#line 292 "mercury_compile_llds_back_end.m"
      {
#line 292 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 0)));
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 1)));
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_30;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcCode_31;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcCodes_32;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcTable_35;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_36;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_43_43;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44;
#line 292 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45;
#line 295 "mercury_compile_llds_back_end.m"
        MR_Box top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36;

#line 293 "mercury_compile_llds_back_end.m"
        {
#line 293 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ProcLabel_30 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__ProcId_28);
        }
#line 294 "mercury_compile_llds_back_end.m"
        {
#line 294 "mercury_compile_llds_back_end.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_5, &top_level__mercury_compile_llds_back_end__ProcTable_35);
        }
#line 295 "mercury_compile_llds_back_end.m"
        {
#line 295 "mercury_compile_llds_back_end.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_35, top_level__mercury_compile_llds_back_end__ProcId_28, &top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
        }
#line 295 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__ProcInfo_36 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
#line 296 "mercury_compile_llds_back_end.m"
        {
#line 296 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcId_28, top_level__mercury_compile_llds_back_end__ProcInfo_36, &top_level__mercury_compile_llds_back_end__ProcCode_31, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45);
        }
#line 291 "mercury_compile_llds_back_end.m"
        {
#line 291 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_30));
#line 291 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCode_31));
#line 291 "mercury_compile_llds_back_end.m"
        }
#line 298 "mercury_compile_llds_back_end.m"
        {
#line 298 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcIds_29, &top_level__mercury_compile_llds_back_end__ProcCodes_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9);
        }
#line 291 "mercury_compile_llds_back_end.m"
        {
#line 291 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 291 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = base;
#line 291 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_43_43));
#line 291 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCodes_32));
#line 291 "mercury_compile_llds_back_end.m"
        }
#line 292 "mercury_compile_llds_back_end.m"
      }
#line 289 "mercury_compile_llds_back_end.m"
  }
#line 284 "mercury_compile_llds_back_end.m"
}

#line 216 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_7,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 216 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9)
#line 216 "mercury_compile_llds_back_end.m"
{
#line 222 "mercury_compile_llds_back_end.m"
  while (MR_TRUE)
#line 222 "mercury_compile_llds_back_end.m"
    {
#line 222 "mercury_compile_llds_back_end.m"
      /* tailcall optimized into a loop */
#line 222 "mercury_compile_llds_back_end.m"
      {
#line 222 "mercury_compile_llds_back_end.m"
        MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 222 "mercury_compile_llds_back_end.m"
        if ((top_level__mercury_compile_llds_back_end__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 222 "mercury_compile_llds_back_end.m"
          {
#line 223 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 223 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_7 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6;
#line 222 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 222 "mercury_compile_llds_back_end.m"
          }
#line 222 "mercury_compile_llds_back_end.m"
        else
#line 225 "mercury_compile_llds_back_end.m"
          {
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 0)));
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 1)));
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredTable_34;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredInfo_35;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcIds_36;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcList_37;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77;
#line 225 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82;
#line 227 "mercury_compile_llds_back_end.m"
            MR_Box top_level__mercury_compile_llds_back_end__conv0_PredInfo_35;

#line 226 "mercury_compile_llds_back_end.m"
            {
#line 226 "mercury_compile_llds_back_end.m"
              hlds__hlds_module__module_info_get_preds_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__PredTable_34);
            }
#line 227 "mercury_compile_llds_back_end.m"
            {
#line 227 "mercury_compile_llds_back_end.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, top_level__mercury_compile_llds_back_end__PredTable_34, ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_28)), &top_level__mercury_compile_llds_back_end__conv0_PredInfo_35);
            }
#line 227 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__PredInfo_35 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_PredInfo_35);
#line 228 "mercury_compile_llds_back_end.m"
            {
#line 228 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__ProcIds_36 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
            }
#line 232 "mercury_compile_llds_back_end.m"
            if ((top_level__mercury_compile_llds_back_end__ProcIds_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 230 "mercury_compile_llds_back_end.m"
              {
#line 231 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__ProcList_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 230 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 230 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5;
#line 230 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 230 "mercury_compile_llds_back_end.m"
              }
#line 232 "mercury_compile_llds_back_end.m"
            else
#line 233 "mercury_compile_llds_back_end.m"
              {
#line 233 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__Globals0_40;
#line 233 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__Verbose_41;
#line 233 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__IdProcList_47;
#line 233 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__Stats_52;
#line 246 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__PredModule_42;
#line 246 "mercury_compile_llds_back_end.m"
                MR_String top_level__mercury_compile_llds_back_end__PredName_43;
#line 246 "mercury_compile_llds_back_end.m"
                MR_Integer top_level__mercury_compile_llds_back_end__PredArity_44;

#line 234 "mercury_compile_llds_back_end.m"
                {
#line 234 "mercury_compile_llds_back_end.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__Globals0_40);
                }
#line 235 "mercury_compile_llds_back_end.m"
                {
#line 235 "mercury_compile_llds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_41);
                }
#line 242 "mercury_compile_llds_back_end.m"
#line 242 "mercury_compile_llds_back_end.m"
                switch (top_level__mercury_compile_llds_back_end__Verbose_41) {
#line 242 "mercury_compile_llds_back_end.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 242 "mercury_compile_llds_back_end.m"
                  case (MR_Integer) 0:
#line 243 "mercury_compile_llds_back_end.m"
                    {
#line 243 "mercury_compile_llds_back_end.m"
                    }
#line 242 "mercury_compile_llds_back_end.m"
                    break;
#line 242 "mercury_compile_llds_back_end.m"
                  case (MR_Integer) 1:
#line 237 "mercury_compile_llds_back_end.m"
                    {
#line 238 "mercury_compile_llds_back_end.m"
                      {
#line 238 "mercury_compile_llds_back_end.m"
                        mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
                      }
#line 239 "mercury_compile_llds_back_end.m"
                      {
#line 239 "mercury_compile_llds_back_end.m"
                        hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_28);
                      }
#line 240 "mercury_compile_llds_back_end.m"
                      {
#line 240 "mercury_compile_llds_back_end.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n");
                      }
#line 241 "mercury_compile_llds_back_end.m"
                      {
#line 241 "mercury_compile_llds_back_end.m"
                        libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_41);
                      }
#line 237 "mercury_compile_llds_back_end.m"
                    }
#line 242 "mercury_compile_llds_back_end.m"
                    break;
#line 242 "mercury_compile_llds_back_end.m"
                }
#line 246 "mercury_compile_llds_back_end.m"
                {
#line 246 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__PredModule_42 = hlds__hlds_pred__pred_info_module_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
                }
#line 247 "mercury_compile_llds_back_end.m"
                {
#line 247 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__PredName_43 = hlds__hlds_pred__pred_info_name_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
                }
#line 248 "mercury_compile_llds_back_end.m"
                {
#line 248 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__PredArity_44 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_35);
                }
#line 249 "mercury_compile_llds_back_end.m"
                {
#line 249 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(top_level__mercury_compile_llds_back_end__PredModule_42, top_level__mercury_compile_llds_back_end__PredName_43, top_level__mercury_compile_llds_back_end__PredArity_44);
                }
#line 263 "mercury_compile_llds_back_end.m"
                if (top_level__mercury_compile_llds_back_end__succeeded)
#line 255 "mercury_compile_llds_back_end.m"
                  {
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__TraceLevel_45;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__Globals1_46;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__Globals2_48;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__Globals_49;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Integer top_level__mercury_compile_llds_back_end__ProcId_107;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcIds_108;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_109;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcCode_110;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcCodes_111;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcTable_114;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_115;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__V_122_122;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_123;
#line 255 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_124;
#line 295 "mercury_compile_llds_back_end.m"
                    MR_Box top_level__mercury_compile_llds_back_end__conv1_ProcInfo_115;

#line 255 "mercury_compile_llds_back_end.m"
                    {
#line 255 "mercury_compile_llds_back_end.m"
                      libs__globals__get_trace_level_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, &top_level__mercury_compile_llds_back_end__TraceLevel_45);
                    }
#line 256 "mercury_compile_llds_back_end.m"
                    {
#line 256 "mercury_compile_llds_back_end.m"
                      libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, &top_level__mercury_compile_llds_back_end__Globals1_46);
                    }
#line 257 "mercury_compile_llds_back_end.m"
                    {
#line 257 "mercury_compile_llds_back_end.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals1_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69);
                    }
#line 291 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__ProcId_107 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_36, (MR_Integer) 0)));
#line 291 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__ProcIds_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_36, (MR_Integer) 1)));
#line 293 "mercury_compile_llds_back_end.m"
                    {
#line 293 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__ProcLabel_109 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__ProcId_107);
                    }
#line 294 "mercury_compile_llds_back_end.m"
                    {
#line 294 "mercury_compile_llds_back_end.m"
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_35, &top_level__mercury_compile_llds_back_end__ProcTable_114);
                    }
#line 295 "mercury_compile_llds_back_end.m"
                    {
#line 295 "mercury_compile_llds_back_end.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_114, top_level__mercury_compile_llds_back_end__ProcId_107, &top_level__mercury_compile_llds_back_end__conv1_ProcInfo_115);
                    }
#line 295 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__ProcInfo_115 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv1_ProcInfo_115);
#line 296 "mercury_compile_llds_back_end.m"
                    {
#line 296 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_123, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__PredInfo_35, top_level__mercury_compile_llds_back_end__ProcId_107, top_level__mercury_compile_llds_back_end__ProcInfo_115, &top_level__mercury_compile_llds_back_end__ProcCode_110, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_124);
                    }
#line 291 "mercury_compile_llds_back_end.m"
                    {
#line 291 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__V_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_122_122, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_109));
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_122_122, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCode_110));
#line 291 "mercury_compile_llds_back_end.m"
                    }
#line 298 "mercury_compile_llds_back_end.m"
                    {
#line 298 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_123, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__PredInfo_35, top_level__mercury_compile_llds_back_end__ProcIds_108, &top_level__mercury_compile_llds_back_end__ProcCodes_111, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_124, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71);
                    }
#line 291 "mercury_compile_llds_back_end.m"
                    {
#line 291 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__IdProcList_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdProcList_47, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_122_122));
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdProcList_47, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCodes_111));
#line 291 "mercury_compile_llds_back_end.m"
                    }
#line 260 "mercury_compile_llds_back_end.m"
                    {
#line 260 "mercury_compile_llds_back_end.m"
                      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_llds_back_end__Globals2_48);
                    }
#line 261 "mercury_compile_llds_back_end.m"
                    {
#line 261 "mercury_compile_llds_back_end.m"
                      libs__globals__set_trace_level_3_p_0(top_level__mercury_compile_llds_back_end__TraceLevel_45, top_level__mercury_compile_llds_back_end__Globals2_48, &top_level__mercury_compile_llds_back_end__Globals_49);
                    }
#line 262 "mercury_compile_llds_back_end.m"
                    {
#line 262 "mercury_compile_llds_back_end.m"
                      hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals_49, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_70_70, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73);
                    }
#line 255 "mercury_compile_llds_back_end.m"
                  }
#line 263 "mercury_compile_llds_back_end.m"
                else
#line 292 "mercury_compile_llds_back_end.m"
                  {
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Integer top_level__mercury_compile_llds_back_end__ProcId_147 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_36, (MR_Integer) 0)));
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcIds_148 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_36, (MR_Integer) 1)));
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_149;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcCode_150;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcCodes_151;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcTable_154;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_155;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__V_162_162;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_163;
#line 292 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_164;
#line 295 "mercury_compile_llds_back_end.m"
                    MR_Box top_level__mercury_compile_llds_back_end__conv2_ProcInfo_155;

#line 293 "mercury_compile_llds_back_end.m"
                    {
#line 293 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__ProcLabel_149 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__ProcId_147);
                    }
#line 294 "mercury_compile_llds_back_end.m"
                    {
#line 294 "mercury_compile_llds_back_end.m"
                      hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_35, &top_level__mercury_compile_llds_back_end__ProcTable_154);
                    }
#line 295 "mercury_compile_llds_back_end.m"
                    {
#line 295 "mercury_compile_llds_back_end.m"
                      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_154, top_level__mercury_compile_llds_back_end__ProcId_147, &top_level__mercury_compile_llds_back_end__conv2_ProcInfo_155);
                    }
#line 295 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__ProcInfo_155 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv2_ProcInfo_155);
#line 296 "mercury_compile_llds_back_end.m"
                    {
#line 296 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_163, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__PredInfo_35, top_level__mercury_compile_llds_back_end__ProcId_147, top_level__mercury_compile_llds_back_end__ProcInfo_155, &top_level__mercury_compile_llds_back_end__ProcCode_150, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_164);
                    }
#line 291 "mercury_compile_llds_back_end.m"
                    {
#line 291 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_162_162, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_149));
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_162_162, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCode_150));
#line 291 "mercury_compile_llds_back_end.m"
                    }
#line 298 "mercury_compile_llds_back_end.m"
                    {
#line 298 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_163, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__PredInfo_35, top_level__mercury_compile_llds_back_end__ProcIds_148, &top_level__mercury_compile_llds_back_end__ProcCodes_151, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_164, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71);
                    }
#line 291 "mercury_compile_llds_back_end.m"
                    {
#line 291 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__IdProcList_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdProcList_47, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_162_162));
#line 291 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdProcList_47, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcCodes_151));
#line 291 "mercury_compile_llds_back_end.m"
                    }
#line 292 "mercury_compile_llds_back_end.m"
                  }
#line 270 "mercury_compile_llds_back_end.m"
                if ((top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "mercury_compile_llds_back_end.m"
                  {
#line 269 "mercury_compile_llds_back_end.m"
                    {
#line 269 "mercury_compile_llds_back_end.m"
                      mercury__assoc_list__values_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__IdProcList_47, &top_level__mercury_compile_llds_back_end__ProcList_37);
                    }
#line 268 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5;
#line 268 "mercury_compile_llds_back_end.m"
                  }
#line 270 "mercury_compile_llds_back_end.m"
                else
#line 271 "mercury_compile_llds_back_end.m"
                  {
#line 271 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__DupProcMap0_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5, (MR_Integer) 0)));
#line 271 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__DupProcMap_51;

#line 272 "mercury_compile_llds_back_end.m"
                    {
#line 272 "mercury_compile_llds_back_end.m"
                      ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(top_level__mercury_compile_llds_back_end__IdProcList_47, &top_level__mercury_compile_llds_back_end__ProcList_37, top_level__mercury_compile_llds_back_end__DupProcMap0_50, &top_level__mercury_compile_llds_back_end__DupProcMap_51);
                    }
#line 274 "mercury_compile_llds_back_end.m"
                    {
#line 274 "mercury_compile_llds_back_end.m"
                      top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 274 "mercury_compile_llds_back_end.m"
                      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DupProcMap_51));
#line 274 "mercury_compile_llds_back_end.m"
                    }
#line 271 "mercury_compile_llds_back_end.m"
                  }
#line 276 "mercury_compile_llds_back_end.m"
                {
#line 276 "mercury_compile_llds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_41, (MR_String) "% done.\n");
                }
#line 277 "mercury_compile_llds_back_end.m"
                {
#line 277 "mercury_compile_llds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_40, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_52);
                }
#line 278 "mercury_compile_llds_back_end.m"
                {
#line 278 "mercury_compile_llds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_52);
                }
#line 233 "mercury_compile_llds_back_end.m"
              }
#line 280 "mercury_compile_llds_back_end.m"
            {
#line 280 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcList_37));
#line 280 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6));
#line 280 "mercury_compile_llds_back_end.m"
            }
#line 281 "mercury_compile_llds_back_end.m"
            /* direct tailcall eliminated */
#line 281 "mercury_compile_llds_back_end.m"
            {
#line 281 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_73_73;
#line 281 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4 = top_level__mercury_compile_llds_back_end__PredIds_29;
#line 281 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_77_77;
#line 281 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0__tmp_copy_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_82_82;
#line 281 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_71_71;

#line 281 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8;
#line 281 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_RevCodes_0__tmp_copy_6;
#line 281 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5;
#line 281 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__HeadVar__4_4 = top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4;
#line 281 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1;
#line 281 "mercury_compile_llds_back_end.m"
            }
#line 281 "mercury_compile_llds_back_end.m"
            continue;
#line 225 "mercury_compile_llds_back_end.m"
          }
#line 222 "mercury_compile_llds_back_end.m"
      }
#line 222 "mercury_compile_llds_back_end.m"
      break;
#line 222 "mercury_compile_llds_back_end.m"
    }
#line 216 "mercury_compile_llds_back_end.m"
}

#line 190 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_24,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_25,
#line 190 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_10)
#line 190 "mercury_compile_llds_back_end.m"
{
#line 194 "mercury_compile_llds_back_end.m"
  {
#line 194 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredIds_12;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_13;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcDups_14;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OrderedPredIds_15;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_19;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__RevCodes_20;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Codes_21;
#line 194 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_31_31;

#line 195 "mercury_compile_llds_back_end.m"
    {
#line 195 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__PredIds_12);
    }
#line 196 "mercury_compile_llds_back_end.m"
    {
#line 196 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__Globals_13);
    }
#line 197 "mercury_compile_llds_back_end.m"
    {
#line 197 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_13, (MR_Integer) 476, &top_level__mercury_compile_llds_back_end__ProcDups_14);
    }
#line 202 "mercury_compile_llds_back_end.m"
#line 202 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__ProcDups_14) {
#line 202 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 202 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 199 "mercury_compile_llds_back_end.m"
        {
#line 200 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__OrderedPredIds_15 = top_level__mercury_compile_llds_back_end__PredIds_12;
#line 201 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 199 "mercury_compile_llds_back_end.m"
        }
#line 202 "mercury_compile_llds_back_end.m"
        break;
#line 202 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 203 "mercury_compile_llds_back_end.m"
        {
#line 203 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36;
#line 203 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37;
#line 203 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__DepInfo_17;
#line 203 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__PredSCCs_18;
#line 203 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_30_30;

#line 204 "mercury_compile_llds_back_end.m"
          {
#line 204 "mercury_compile_llds_back_end.m"
            transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_llds_back_end__PredIds_12, (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__DepInfo_17);
          }
#line 4576 "top_level.mercury_compile_llds_back_end.c"
          top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 206 "mercury_compile_llds_back_end.m"
          {
#line 206 "mercury_compile_llds_back_end.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36, top_level__mercury_compile_llds_back_end__DepInfo_17, &top_level__mercury_compile_llds_back_end__PredSCCs_18);
          }
#line 207 "mercury_compile_llds_back_end.m"
          {
#line 207 "mercury_compile_llds_back_end.m"
            mercury__list__condense_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36, top_level__mercury_compile_llds_back_end__PredSCCs_18, &top_level__mercury_compile_llds_back_end__OrderedPredIds_15);
          }
#line 4588 "top_level.mercury_compile_llds_back_end.c"
          top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 208 "mercury_compile_llds_back_end.m"
          {
#line 208 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_30_30 = mercury__map__init_0_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37, top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37);
          }
#line 208 "mercury_compile_llds_back_end.m"
          {
#line 208 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_30_30));
#line 208 "mercury_compile_llds_back_end.m"
          }
#line 203 "mercury_compile_llds_back_end.m"
        }
#line 202 "mercury_compile_llds_back_end.m"
        break;
#line 202 "mercury_compile_llds_back_end.m"
    }
#line 210 "mercury_compile_llds_back_end.m"
    {
#line 210 "mercury_compile_llds_back_end.m"
      ll_backend__unify_gen__generate_const_structs_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_24, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_31_31);
    }
#line 211 "mercury_compile_llds_back_end.m"
    {
#line 211 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__OrderedPredIds_15, top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__RevCodes_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_31_31, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_25);
    }
#line 213 "mercury_compile_llds_back_end.m"
    {
#line 213 "mercury_compile_llds_back_end.m"
      mercury__list__reverse_2_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[0], top_level__mercury_compile_llds_back_end__RevCodes_20, &top_level__mercury_compile_llds_back_end__Codes_21);
    }
#line 214 "mercury_compile_llds_back_end.m"
    {
#line 214 "mercury_compile_llds_back_end.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__Codes_21, top_level__mercury_compile_llds_back_end__LLDS_10);
#line 214 "mercury_compile_llds_back_end.m"
      return;
    }
#line 194 "mercury_compile_llds_back_end.m"
  }
#line 190 "mercury_compile_llds_back_end.m"
}

#line 163 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0_1(
#line 163 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg)
#line 163 "mercury_compile_llds_back_end.m"
{
#line 163 "mercury_compile_llds_back_end.m"
  {
#line 163 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 163 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

#line 163 "mercury_compile_llds_back_end.m"
    {
#line 163 "mercury_compile_llds_back_end.m"
      return top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__163__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))));
    }
#line 163 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 163 "mercury_compile_llds_back_end.m"
  }
#line 163 "mercury_compile_llds_back_end.m"
}

#line 143 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0(
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_21,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_23,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_24,
#line 143 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_25)
#line 143 "mercury_compile_llds_back_end.m"
{
#line 147 "mercury_compile_llds_back_end.m"
  {
#line 147 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_16;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_17;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifySpecs_18;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_34_34;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_40_40;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_46_46;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_53_53;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_57_57;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_61_61;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_67_67;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_73_73;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_80_80;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_88_88;
#line 147 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89;

#line 148 "mercury_compile_llds_back_end.m"
    {
#line 148 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 149 "mercury_compile_llds_back_end.m"
    {
#line 149 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_16);
    }
#line 150 "mercury_compile_llds_back_end.m"
    {
#line 150 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_17);
    }
#line 152 "mercury_compile_llds_back_end.m"
    {
#line 152 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30);
    }
#line 153 "mercury_compile_llds_back_end.m"
    {
#line 153 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30, (MR_Integer) 310, (MR_String) "saved_vars_const", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_24, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_34_34);
    }
#line 155 "mercury_compile_llds_back_end.m"
    {
#line 155 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_30_30, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36);
    }
#line 156 "mercury_compile_llds_back_end.m"
    {
#line 156 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36, (MR_Integer) 315, (MR_String) "saved_vars_cell", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_34_34, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_40_40);
    }
#line 158 "mercury_compile_llds_back_end.m"
    {
#line 158 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42);
    }
#line 159 "mercury_compile_llds_back_end.m"
    {
#line 159 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42, (MR_Integer) 320, (MR_String) "followcode", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_40_40, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_46_46);
    }
#line 161 "mercury_compile_llds_back_end.m"
    {
#line 161 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 5, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_42_42, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__SimplifySpecs_18);
    }
#line 163 "mercury_compile_llds_back_end.m"
    {
#line 163 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_57_57 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_llds_back_end__Globals_15, top_level__mercury_compile_llds_back_end__SimplifySpecs_18);
    }
#line 163 "mercury_compile_llds_back_end.m"
    {
#line 163 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 163 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[0]));
#line 163 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0_1));
#line 163 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 163 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_57_57));
#line 163 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_53_53, 4) = ((MR_Box) ((MR_Integer) 0));
#line 163 "mercury_compile_llds_back_end.m"
    }
#line 163 "mercury_compile_llds_back_end.m"
    {
#line 163 "mercury_compile_llds_back_end.m"
      mercury__require__expect_4_p_0(top_level__mercury_compile_llds_back_end__V_53_53, (MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/9", (MR_String) "simplify has errors");
    }
#line 165 "mercury_compile_llds_back_end.m"
    {
#line 165 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 325, (MR_String) "ll_backend_simplify", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_46_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 167 "mercury_compile_llds_back_end.m"
    {
#line 167 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63);
    }
#line 168 "mercury_compile_llds_back_end.m"
    {
#line 168 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 330, (MR_String) "liveness", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_67_67);
    }
#line 170 "mercury_compile_llds_back_end.m"
    {
#line 170 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69);
    }
#line 171 "mercury_compile_llds_back_end.m"
    {
#line 171 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 332, (MR_String) "mark_debug_tailrec_calls", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_73_73);
    }
#line 173 "mercury_compile_llds_back_end.m"
    {
#line 173 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_5_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69);
    }
#line 175 "mercury_compile_llds_back_end.m"
    {
#line 175 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76);
    }
#line 176 "mercury_compile_llds_back_end.m"
    {
#line 176 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76, (MR_Integer) 335, (MR_String) "stackvars", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_80_80);
    }
#line 178 "mercury_compile_llds_back_end.m"
    {
#line 178 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_76_76, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20);
    }
#line 179 "mercury_compile_llds_back_end.m"
    {
#line 179 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, (MR_Integer) 340, (MR_String) "store_map", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_80_80, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_25);
    }
#line 181 "mercury_compile_llds_back_end.m"
    {
#line 181 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_21, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_88_88, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89);
    }
#line 184 "mercury_compile_llds_back_end.m"
    {
#line 184 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_88_88, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22);
    }
#line 188 "mercury_compile_llds_back_end.m"
    {
#line 188 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_20, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_22, top_level__mercury_compile_llds_back_end__Verbose_16, top_level__mercury_compile_llds_back_end__Stats_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_89_89, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_23);
#line 188 "mercury_compile_llds_back_end.m"
      return;
    }
#line 147 "mercury_compile_llds_back_end.m"
  }
#line 143 "mercury_compile_llds_back_end.m"
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
#line 419 "mercury_compile_llds_back_end.m"
  {
#line 419 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 420 "mercury_compile_llds_back_end.m"
    {
#line 420 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Mapping args to regs...");
    }
#line 421 "mercury_compile_llds_back_end.m"
    {
#line 421 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 422 "mercury_compile_llds_back_end.m"
    {
#line 422 "mercury_compile_llds_back_end.m"
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 423 "mercury_compile_llds_back_end.m"
    {
#line 423 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 424 "mercury_compile_llds_back_end.m"
    {
#line 424 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 424 "mercury_compile_llds_back_end.m"
      return;
    }
#line 419 "mercury_compile_llds_back_end.m"
  }
#line 37 "mercury_compile_llds_back_end.m"
}

#line 715 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3(
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 715 "mercury_compile_llds_back_end.m"
{
#line 715 "mercury_compile_llds_back_end.m"
  {
#line 715 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 715 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__conv3_O_File_11;
#line 715 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv2_Succeeded_12;

#line 715 "mercury_compile_llds_back_end.m"
    {
#line 715 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))), ((MR_String) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv3_O_File_11, &top_level__mercury_compile_llds_back_end__conv2_Succeeded_12);
    }
#line 715 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv3_O_File_11));
#line 715 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv2_Succeeded_12));
#line 715 "mercury_compile_llds_back_end.m"
  }
#line 715 "mercury_compile_llds_back_end.m"
}

#line 679 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2(
#line 679 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 679 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1)
#line 679 "mercury_compile_llds_back_end.m"
{
#line 679 "mercury_compile_llds_back_end.m"
  {
#line 679 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 679 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

#line 679 "mercury_compile_llds_back_end.m"
    {
#line 679 "mercury_compile_llds_back_end.m"
      return top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1));
    }
#line 679 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 679 "mercury_compile_llds_back_end.m"
  }
#line 679 "mercury_compile_llds_back_end.m"
}

#line 672 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1(
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 672 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 672 "mercury_compile_llds_back_end.m"
{
#line 672 "mercury_compile_llds_back_end.m"
  {
#line 672 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 672 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_Include_8;

#line 672 "mercury_compile_llds_back_end.m"
    {
#line 672 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv0_Include_8);
    }
#line 672 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_Include_8));
#line 672 "mercury_compile_llds_back_end.m"
  }
#line 672 "mercury_compile_llds_back_end.m"
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
#line 609 "mercury_compile_llds_back_end.m"
  {
#line 609 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_16;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_17;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_18;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__GlobalData_24;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__HLDSVarNums_26;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ShortLocns_27;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LongLocns_28;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserEventVarNums_29;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserEvents_30;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CallSites_36;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CoveragePoints_37;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcStatics_38;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcVarNames_40;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntries_42;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntryMap_43;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcEventLayouts_44;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraces_45;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TablingInfoStructs_49;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo_51;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__AllocSites_54;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__AllocIdMap_55;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSStringTable_56;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__RttiDatas_57;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ComplexityProcs_58;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleSymName_59;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCodes0_60;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_BodyCodes_61;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_Includes_62;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportDefns_64;
#line 609 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__MangledModuleName_65;
#line 609 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__CModuleName_66;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__ProcsPerFunc_67;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ChunkedModules_68;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_70;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_71;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_72;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Start_73;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__End_74;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCodes_75;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserInitPredCNames_76;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserFinalPredCNames_77;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CFile_78;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_79;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_107_107;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_110_110;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_111_111;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_112_112;
#line 609 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_113_113;
#line 655 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___C_ExportDecls_63;
#line 672 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_108_108;

#line 610 "mercury_compile_llds_back_end.m"
    {
#line 610 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_16);
    }
#line 611 "mercury_compile_llds_back_end.m"
    {
#line 611 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_17);
    }
#line 612 "mercury_compile_llds_back_end.m"
    {
#line 612 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_18);
    }
#line 614 "mercury_compile_llds_back_end.m"
    {
#line 614 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_17, (MR_String) "% Generating layout data...");
    }
#line 616 "mercury_compile_llds_back_end.m"
    {
#line 616 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_17);
    }
#line 620 "mercury_compile_llds_back_end.m"
    {
#line 620 "mercury_compile_llds_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19);
    }
#line 621 "mercury_compile_llds_back_end.m"
    {
#line 621 "mercury_compile_llds_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20);
    }
#line 622 "mercury_compile_llds_back_end.m"
    {
#line 622 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 283, &top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21);
    }
#line 623 "mercury_compile_llds_back_end.m"
    {
#line 623 "mercury_compile_llds_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21, &top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22);
    }
#line 5241 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 625 "mercury_compile_llds_back_end.m"
    {
#line 625 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124, top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20, top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22);
    }
#line 627 "mercury_compile_llds_back_end.m"
    {
#line 627 "mercury_compile_llds_back_end.m"
      ll_backend__stack_layout__generate_llds_layout_data_26_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__GlobalData0_10, &top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25, &top_level__mercury_compile_llds_back_end__HLDSVarNums_26, &top_level__mercury_compile_llds_back_end__ShortLocns_27, &top_level__mercury_compile_llds_back_end__LongLocns_28, &top_level__mercury_compile_llds_back_end__UserEventVarNums_29, &top_level__mercury_compile_llds_back_end__UserEvents_30, &top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31, &top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32, &top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33, &top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34, &top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35, &top_level__mercury_compile_llds_back_end__CallSites_36, &top_level__mercury_compile_llds_back_end__CoveragePoints_37, &top_level__mercury_compile_llds_back_end__ProcStatics_38, &top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39, &top_level__mercury_compile_llds_back_end__ProcVarNames_40, &top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41, &top_level__mercury_compile_llds_back_end__TableIoEntries_42, &top_level__mercury_compile_llds_back_end__TableIoEntryMap_43, &top_level__mercury_compile_llds_back_end__ProcEventLayouts_44, &top_level__mercury_compile_llds_back_end__ExecTraces_45, &top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46, &top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47);
    }
#line 636 "mercury_compile_llds_back_end.m"
    {
#line 636 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_17, (MR_String) " done.\n");
    }
#line 637 "mercury_compile_llds_back_end.m"
    {
#line 637 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_18);
    }
#line 642 "mercury_compile_llds_back_end.m"
    {
#line 642 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48);
    }
#line 643 "mercury_compile_llds_back_end.m"
    {
#line 643 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__TablingInfoStructs_49);
    }
#line 644 "mercury_compile_llds_back_end.m"
    {
#line 644 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50);
    }
#line 645 "mercury_compile_llds_back_end.m"
    {
#line 645 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__StaticCellInfo_51);
    }
#line 646 "mercury_compile_llds_back_end.m"
    {
#line 646 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__get_static_cells_3_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo_51, &top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52, &top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53);
    }
#line 648 "mercury_compile_llds_back_end.m"
    {
#line 648 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__AllocSites_54, &top_level__mercury_compile_llds_back_end__AllocIdMap_55);
    }
#line 649 "mercury_compile_llds_back_end.m"
    {
#line 649 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__TSStringTable_56);
    }
#line 652 "mercury_compile_llds_back_end.m"
    {
#line 652 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__RttiDatas_57 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124, top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19, top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23);
    }
#line 653 "mercury_compile_llds_back_end.m"
    {
#line 653 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__ComplexityProcs_58);
    }
#line 655 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__ModuleSymName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 0)));
#line 655 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_HeaderCodes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 1)));
#line 655 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_BodyCodes_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 2)));
#line 655 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_Includes_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 3)));
#line 655 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end___C_ExportDecls_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 4)));
#line 655 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_ExportDefns_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 5)));
#line 658 "mercury_compile_llds_back_end.m"
    {
#line 658 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MangledModuleName_65 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(top_level__mercury_compile_llds_back_end__ModuleSymName_59);
    }
#line 659 "mercury_compile_llds_back_end.m"
    {
#line 659 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__CModuleName_66 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__MangledModuleName_65, (MR_String) "_module");
    }
#line 663 "mercury_compile_llds_back_end.m"
    {
#line 663 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 484, &top_level__mercury_compile_llds_back_end__ProcsPerFunc_67);
    }
#line 664 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProcsPerFunc_67 == (MR_Integer) 0);
#line 668 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 667 "mercury_compile_llds_back_end.m"
      {
#line 667 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_105_105;

#line 667 "mercury_compile_llds_back_end.m"
        {
#line 667 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_105_105, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CModuleName_66));
#line 667 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_105_105, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Procs_11));
#line 667 "mercury_compile_llds_back_end.m"
        }
#line 667 "mercury_compile_llds_back_end.m"
        {
#line 667 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ChunkedModules_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_68, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_105_105));
#line 667 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 667 "mercury_compile_llds_back_end.m"
        }
#line 667 "mercury_compile_llds_back_end.m"
      }
#line 668 "mercury_compile_llds_back_end.m"
    else
#line 669 "mercury_compile_llds_back_end.m"
      {
#line 669 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ChunkedProcs_69;

#line 669 "mercury_compile_llds_back_end.m"
        {
#line 669 "mercury_compile_llds_back_end.m"
          mercury__list__chunk_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__Procs_11, top_level__mercury_compile_llds_back_end__ProcsPerFunc_67, &top_level__mercury_compile_llds_back_end__ChunkedProcs_69);
        }
#line 670 "mercury_compile_llds_back_end.m"
        {
#line 670 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(top_level__mercury_compile_llds_back_end__ChunkedProcs_69, top_level__mercury_compile_llds_back_end__CModuleName_66, &top_level__mercury_compile_llds_back_end__ChunkedModules_68);
        }
#line 669 "mercury_compile_llds_back_end.m"
      }
#line 672 "mercury_compile_llds_back_end.m"
    {
#line 672 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 672 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[0]));
#line 672 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1));
#line 672 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 672 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_16));
#line 672 "mercury_compile_llds_back_end.m"
    }
#line 5399 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 5401 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 672 "mercury_compile_llds_back_end.m"
    {
#line 672 "mercury_compile_llds_back_end.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132, top_level__mercury_compile_llds_back_end__V_107_107, top_level__mercury_compile_llds_back_end__C_Includes_62, &top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_70, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_108_108);
    }
#line 679 "mercury_compile_llds_back_end.m"
    {
#line 679 "mercury_compile_llds_back_end.m"
      mercury__list__filter_4_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_4[0], top_level__mercury_compile_llds_back_end__C_HeaderCodes0_60, &top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_71, &top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_72);
    }
#line 681 "mercury_compile_llds_back_end.m"
    {
#line 681 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(top_level__mercury_compile_llds_back_end__ModuleSymName_59, &top_level__mercury_compile_llds_back_end__Start_73, &top_level__mercury_compile_llds_back_end__End_74);
    }
#line 683 "mercury_compile_llds_back_end.m"
    {
#line 683 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_112_112, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_73));
#line 683 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_112_112, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_72));
#line 683 "mercury_compile_llds_back_end.m"
    }
#line 683 "mercury_compile_llds_back_end.m"
    {
#line 683 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_113_113, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__End_74));
#line 683 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "mercury_compile_llds_back_end.m"
    }
#line 683 "mercury_compile_llds_back_end.m"
    {
#line 683 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_111_111 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__V_112_112, top_level__mercury_compile_llds_back_end__V_113_113);
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_110_110 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_71, top_level__mercury_compile_llds_back_end__V_111_111);
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__C_HeaderCodes_75 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_70, top_level__mercury_compile_llds_back_end__V_110_110);
    }
#line 685 "mercury_compile_llds_back_end.m"
    {
#line 685 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__UserInitPredCNames_76);
    }
#line 686 "mercury_compile_llds_back_end.m"
    {
#line 686 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__UserFinalPredCNames_77);
    }
#line 688 "mercury_compile_llds_back_end.m"
    {
#line 688 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__CFile_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 39 * sizeof(MR_Word)), NULL, NULL);
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleSymName_59));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_HeaderCodes_75));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_BodyCodes_61));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportDefns_64));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TablingInfoStructs_49));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 6) = ((MR_Box) (top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 7) = ((MR_Box) (top_level__mercury_compile_llds_back_end__RttiDatas_57));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 8) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 9) = ((MR_Box) (top_level__mercury_compile_llds_back_end__HLDSVarNums_26));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 10) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ShortLocns_27));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 11) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LongLocns_28));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 12) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEventVarNums_29));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 13) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEvents_30));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 14) = ((MR_Box) (top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 15) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 16) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 17) = ((MR_Box) (top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 18) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 19) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CallSites_36));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 20) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CoveragePoints_37));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 21) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcStatics_38));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 22) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 23) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcVarNames_40));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 24) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 25) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSStringTable_56));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 26) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntries_42));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 27) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntryMap_43));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 28) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcEventLayouts_44));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 29) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ExecTraces_45));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 30) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 31) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 32) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 33) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocSites_54));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 34) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocIdMap_55));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 35) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ChunkedModules_68));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 36) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserInitPredCNames_76));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 37) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserFinalPredCNames_77));
#line 688 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 38) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ComplexityProcs_58));
#line 688 "mercury_compile_llds_back_end.m"
    }
#line 701 "mercury_compile_llds_back_end.m"
    {
#line 701 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(top_level__mercury_compile_llds_back_end__Globals_16, top_level__mercury_compile_llds_back_end__CFile_78, &top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_79);
    }
#line 725 "mercury_compile_llds_back_end.m"
#line 725 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_79) {
#line 725 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 725 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 726 "mercury_compile_llds_back_end.m"
        {
#line 727 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__Succeeded_13 = (MR_Integer) 0;
#line 728 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__FactTableObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 726 "mercury_compile_llds_back_end.m"
        }
#line 725 "mercury_compile_llds_back_end.m"
        break;
#line 725 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 703 "mercury_compile_llds_back_end.m"
        {
#line 703 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__C_ExportDecls_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 4)));
#line 703 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__TargetCodeOnly_86;
#line 705 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 0)));
#line 705 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 1)));
#line 705 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 2)));
#line 705 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 3)));
#line 705 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 5)));

#line 706 "mercury_compile_llds_back_end.m"
          {
#line 706 "mercury_compile_llds_back_end.m"
            backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__C_ExportDecls_84, top_level__mercury_compile_llds_back_end__ModuleName_12);
          }
#line 709 "mercury_compile_llds_back_end.m"
          {
#line 709 "mercury_compile_llds_back_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 99, &top_level__mercury_compile_llds_back_end__TargetCodeOnly_86);
          }
#line 720 "mercury_compile_llds_back_end.m"
#line 720 "mercury_compile_llds_back_end.m"
          switch (top_level__mercury_compile_llds_back_end__TargetCodeOnly_86) {
#line 720 "mercury_compile_llds_back_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 720 "mercury_compile_llds_back_end.m"
            case (MR_Integer) 0:
#line 711 "mercury_compile_llds_back_end.m"
              {
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139;
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__OutputStream_87;
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__CompileOK_88;
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__FactTableBaseFiles_89;
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__FactTableCompileOKs_90;
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__V_120_120;
#line 711 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__V_122_122;
#line 715 "mercury_compile_llds_back_end.m"
                MR_Box top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_121_121;

#line 712 "mercury_compile_llds_back_end.m"
                {
#line 712 "mercury_compile_llds_back_end.m"
                  mercury__io__output_stream_3_p_0(&top_level__mercury_compile_llds_back_end__OutputStream_87);
                }
#line 713 "mercury_compile_llds_back_end.m"
                {
#line 713 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(top_level__mercury_compile_llds_back_end__Globals_16, top_level__mercury_compile_llds_back_end__OutputStream_87, top_level__mercury_compile_llds_back_end__ModuleName_12, &top_level__mercury_compile_llds_back_end__CompileOK_88);
                }
#line 714 "mercury_compile_llds_back_end.m"
                {
#line 714 "mercury_compile_llds_back_end.m"
                  hlds__hlds_module__module_get_fact_table_file_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__FactTableBaseFiles_89);
                }
#line 715 "mercury_compile_llds_back_end.m"
                {
#line 715 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 715 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[0]));
#line 715 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3));
#line 715 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 715 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_16));
#line 715 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__OutputStream_87));
#line 715 "mercury_compile_llds_back_end.m"
                }
#line 5655 "top_level.mercury_compile_llds_back_end.c"
                top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 715 "mercury_compile_llds_back_end.m"
                {
#line 715 "mercury_compile_llds_back_end.m"
                  mercury__list__map2_foldl_6_p_2(top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139, top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132, top_level__mercury_compile_llds_back_end__V_120_120, top_level__mercury_compile_llds_back_end__FactTableBaseFiles_89, top_level__mercury_compile_llds_back_end__FactTableObjFiles_14, &top_level__mercury_compile_llds_back_end__FactTableCompileOKs_90, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_121_121);
                }
#line 718 "mercury_compile_llds_back_end.m"
                {
#line 718 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_122_122, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CompileOK_88));
#line 718 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_122_122, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__FactTableCompileOKs_90));
#line 718 "mercury_compile_llds_back_end.m"
                }
#line 718 "mercury_compile_llds_back_end.m"
                {
#line 718 "mercury_compile_llds_back_end.m"
                  mercury__bool__and_list_2_p_0(top_level__mercury_compile_llds_back_end__V_122_122, top_level__mercury_compile_llds_back_end__Succeeded_13);
                }
#line 719 "mercury_compile_llds_back_end.m"
                {
#line 719 "mercury_compile_llds_back_end.m"
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(*top_level__mercury_compile_llds_back_end__Succeeded_13);
#line 719 "mercury_compile_llds_back_end.m"
                  return;
                }
#line 711 "mercury_compile_llds_back_end.m"
              }
#line 720 "mercury_compile_llds_back_end.m"
              break;
#line 720 "mercury_compile_llds_back_end.m"
            case (MR_Integer) 1:
#line 721 "mercury_compile_llds_back_end.m"
              {
#line 722 "mercury_compile_llds_back_end.m"
                *top_level__mercury_compile_llds_back_end__Succeeded_13 = (MR_Integer) 1;
#line 723 "mercury_compile_llds_back_end.m"
                *top_level__mercury_compile_llds_back_end__FactTableObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 721 "mercury_compile_llds_back_end.m"
              }
#line 720 "mercury_compile_llds_back_end.m"
              break;
#line 720 "mercury_compile_llds_back_end.m"
          }
#line 703 "mercury_compile_llds_back_end.m"
        }
#line 725 "mercury_compile_llds_back_end.m"
        break;
#line 725 "mercury_compile_llds_back_end.m"
    }
#line 609 "mercury_compile_llds_back_end.m"
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
#line 104 "mercury_compile_llds_back_end.m"
  {
#line 104 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_14;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OptUnboxFloat_16;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__DoCommonData_17;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UnboxFloats_18;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo0_19;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__TSStringTableSize_20;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSRevStringTable_21;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_22;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_23;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TradPasses_24;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_34_34;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41;
#line 104 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44;

#line 105 "mercury_compile_llds_back_end.m"
    {
#line 105 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__ModuleName_14);
    }
#line 106 "mercury_compile_llds_back_end.m"
    {
#line 106 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 107 "mercury_compile_llds_back_end.m"
    {
#line 107 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 244, &top_level__mercury_compile_llds_back_end__OptUnboxFloat_16);
    }
#line 108 "mercury_compile_llds_back_end.m"
    {
#line 108 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 462, &top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
#line 112 "mercury_compile_llds_back_end.m"
#line 112 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__OptUnboxFloat_16) {
#line 112 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 112 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 114 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 1;
#line 112 "mercury_compile_llds_back_end.m"
        break;
#line 112 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 111 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 0;
#line 112 "mercury_compile_llds_back_end.m"
        break;
#line 112 "mercury_compile_llds_back_end.m"
    }
#line 116 "mercury_compile_llds_back_end.m"
    {
#line 116 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__StaticCellInfo0_19 = ll_backend__global_data__init_static_cell_info_3_f_0(top_level__mercury_compile_llds_back_end__ModuleName_14, top_level__mercury_compile_llds_back_end__UnboxFloats_18, top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
#line 118 "mercury_compile_llds_back_end.m"
    {
#line 118 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__TSStringTableSize_20, &top_level__mercury_compile_llds_back_end__TSRevStringTable_21);
    }
#line 120 "mercury_compile_llds_back_end.m"
    {
#line 120 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_init_4_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo0_19, top_level__mercury_compile_llds_back_end__TSStringTableSize_20, top_level__mercury_compile_llds_back_end__TSRevStringTable_21, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_34_34);
    }
#line 123 "mercury_compile_llds_back_end.m"
    {
#line 123 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_22);
    }
#line 124 "mercury_compile_llds_back_end.m"
    {
#line 124 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_23);
    }
#line 420 "mercury_compile_llds_back_end.m"
    {
#line 420 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) "% Mapping args to regs...");
    }
#line 421 "mercury_compile_llds_back_end.m"
    {
#line 421 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_22);
    }
#line 422 "mercury_compile_llds_back_end.m"
    {
#line 422 "mercury_compile_llds_back_end.m"
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37);
    }
#line 423 "mercury_compile_llds_back_end.m"
    {
#line 423 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) " done.\n");
    }
#line 424 "mercury_compile_llds_back_end.m"
    {
#line 424 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_23);
    }
#line 129 "mercury_compile_llds_back_end.m"
    {
#line 129 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, (MR_Integer) 305, (MR_String) "args_to_regs", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_28, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41);
    }
#line 131 "mercury_compile_llds_back_end.m"
    {
#line 131 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 304, &top_level__mercury_compile_llds_back_end__TradPasses_24);
    }
#line 132 "mercury_compile_llds_back_end.m"
    {
#line 132 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_34_34, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44);
    }
#line 136 "mercury_compile_llds_back_end.m"
#line 136 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__TradPasses_24) {
#line 136 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 136 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 135 "mercury_compile_llds_back_end.m"
        {
#line 135 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_9_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_26, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_27, top_level__mercury_compile_llds_back_end__LLDS_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_29);
#line 135 "mercury_compile_llds_back_end.m"
          return;
        }
#line 136 "mercury_compile_llds_back_end.m"
        break;
#line 136 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 137 "mercury_compile_llds_back_end.m"
        {
#line 138 "mercury_compile_llds_back_end.m"
          {
#line 138 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_37_37, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_26, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_27, top_level__mercury_compile_llds_back_end__LLDS_11);
          }
#line 137 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_29 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_41_41;
#line 137 "mercury_compile_llds_back_end.m"
        }
#line 136 "mercury_compile_llds_back_end.m"
        break;
#line 136 "mercury_compile_llds_back_end.m"
    }
#line 104 "mercury_compile_llds_back_end.m"
  }
#line 29 "mercury_compile_llds_back_end.m"
}

void mercury__top_level__mercury_compile_llds_back_end__init(void)
{
}

void mercury__top_level__mercury_compile_llds_back_end__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__type_ctor_info_foreign_interface_info_0);
}

void mercury__top_level__mercury_compile_llds_back_end__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile_llds_back_end. */
