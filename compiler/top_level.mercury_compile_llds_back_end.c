/*
** Automatically generated from `mercury_compile_llds_back_end.m'
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


/* :- module top_level.mercury_compile_llds_back_end. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile_llds_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_llds_back_end.mih"


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
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_out_term.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
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




#line 203 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

#line 206 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

#line 209 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

#line 212 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0;

#line 215 "top_level.mercury_compile_llds_back_end.c"
static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6];

#line 218 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDesc top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0;

#line 221 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1];

#line 224 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1];

#line 227 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1];

#line 230 "top_level.mercury_compile_llds_back_end.c"
static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1];

#line 233 "top_level.mercury_compile_llds_back_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
#line 236 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 238 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2);

#line 241 "top_level.mercury_compile_llds_back_end.c"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
#line 244 "top_level.mercury_compile_llds_back_end.c"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 246 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 248 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3);

#line 166 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__166__1_2_p_0(
#line 166 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_62,
#line 166 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_63);

#line 770 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3);

#line 770 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2);

#line 911 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
#line 911 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
#line 911 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
#line 911 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
#line 911 "mercury_compile_llds_back_end.m"
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
#line 911 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12);

#line 897 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10);

#line 890 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
#line 890 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 890 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
#line 890 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8);

#line 879 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 879 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4);

#line 873 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
#line 873 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
#line 873 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
#line 873 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6);

#line 846 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8);

#line 834 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
#line 834 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
#line 834 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
#line 834 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6);

#line 829 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
#line 829 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2);

#line 792 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__ForeignInterfaceInfo_6);

#line 629 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);

#line 611 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);

#line 600 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13);

#line 596 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 589 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

#line 585 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 578 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);

#line 559 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_7_p_0(
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_8,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_9,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_10,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_15,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_16);

#line 551 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1(
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 536 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15,
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16);

#line 530 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);

#line 515 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);

#line 507 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 497 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 490 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 479 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 472 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
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

#line 461 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);

#line 323 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__CProc_19,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);

#line 305 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11);

#line 236 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_12_p_0(
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);

#line 219 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_7,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11);

#line 193 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_22,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_9,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_23,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_24,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_25,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_26);

#line 166 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1(
#line 166 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg);

#line 144 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_25,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_26,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_27,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_28,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_29,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_30);

#line 751 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3(
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5);

#line 715 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2(
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1);

#line 708 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1(
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4);


static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[7][2];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_2[3][8];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_3[3][4];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_4[6][3];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_5[1][10];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_6[1][5];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_8[5][1];

static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_9[1][9];




static /* final */ const MR_Box top_level__mercury_compile_llds_back_end_scalar_common_1[7][2] = {
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
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[1]))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_4[2]))
  },
  /* row 6 */
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1062 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
  }
};

#line 1070 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
  }
};

#line 1078 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0
  }
};

#line 1086 "top_level.mercury_compile_llds_back_end.c"
static const MR_FA_TypeInfo_Struct1 top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
  }
};

#line 1094 "top_level.mercury_compile_llds_back_end.c"
static const MR_PseudoTypeInfo top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__field_types_foreign_interface_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0,
  (MR_PseudoTypeInfo) &top_level__mercury_compile_llds_back_end__list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_defn_0
};

#line 1104 "top_level.mercury_compile_llds_back_end.c"
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

#line 1119 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

#line 1124 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuPtagLayout top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_ptag_ordered_foreign_interface_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_stag_ordered_foreign_interface_info_0_0
  }
};

#line 1133 "top_level.mercury_compile_llds_back_end.c"
static const MR_DuFunctorDescPtr top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_name_ordered_foreign_interface_info_0[1] = {
  &top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__du_functor_desc_foreign_interface_info_0_0
};

#line 1138 "top_level.mercury_compile_llds_back_end.c"
static const MR_Integer top_level__mercury_compile_llds_back_end__top_level__mercury_compile_llds_back_end__functor_number_map_foreign_interface_info_0[1] = {
  (MR_Integer) 0
};

#line 1143 "top_level.mercury_compile_llds_back_end.c"
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

#line 1160 "top_level.mercury_compile_llds_back_end.c"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0_10001(
#line 1163 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 1165 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2)
#line 1167 "top_level.mercury_compile_llds_back_end.c"
{
#line 1169 "top_level.mercury_compile_llds_back_end.c"
  {
#line 1171 "top_level.mercury_compile_llds_back_end.c"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 1174 "top_level.mercury_compile_llds_back_end.c"
    {
#line 1176 "top_level.mercury_compile_llds_back_end.c"
      top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2));
    }
#line 1179 "top_level.mercury_compile_llds_back_end.c"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 1181 "top_level.mercury_compile_llds_back_end.c"
  }
#line 1183 "top_level.mercury_compile_llds_back_end.c"
}

#line 1186 "top_level.mercury_compile_llds_back_end.c"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0_10001(
#line 1189 "top_level.mercury_compile_llds_back_end.c"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 1191 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 1193 "top_level.mercury_compile_llds_back_end.c"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3)
#line 1195 "top_level.mercury_compile_llds_back_end.c"
{
#line 1197 "top_level.mercury_compile_llds_back_end.c"
  {
#line 1199 "top_level.mercury_compile_llds_back_end.c"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1;

#line 1202 "top_level.mercury_compile_llds_back_end.c"
    {
#line 1204 "top_level.mercury_compile_llds_back_end.c"
      top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(&top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3));
    }
#line 1207 "top_level.mercury_compile_llds_back_end.c"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_1 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__1_1));
#line 1209 "top_level.mercury_compile_llds_back_end.c"
  }
#line 1211 "top_level.mercury_compile_llds_back_end.c"
}

#line 166 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__166__1_2_p_0(
#line 166 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_62,
#line 166 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_63)
#line 166 "mercury_compile_llds_back_end.m"
{
#line 166 "mercury_compile_llds_back_end.m"
  {
#line 166 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__HeadVar__1_62 == top_level__mercury_compile_llds_back_end__HeadVar__2_63);

#line 166 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 166 "mercury_compile_llds_back_end.m"
  }
#line 166 "mercury_compile_llds_back_end.m"
}

#line 770 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end____Compare____foreign_interface_info_0_0(
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__3_3)
#line 770 "mercury_compile_llds_back_end.m"
{
#line 770 "mercury_compile_llds_back_end.m"
  {
#line 770 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 770 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastX_21 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__2_2;
#line 770 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastY_22 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__3_3;

#line 770 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__CastX_21 == top_level__mercury_compile_llds_back_end__CastY_22);
#line 770 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 1259 "top_level.mercury_compile_llds_back_end.c"
      *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = (MR_Integer) 0;
#line 770 "mercury_compile_llds_back_end.m"
    else
#line 770 "mercury_compile_llds_back_end.m"
      {
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 0)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 1)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 2)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 3)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 4)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 5)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 0)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 1)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 2)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 3)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 4)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__3_3, (MR_Integer) 5)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_16_16;

#line 770 "mercury_compile_llds_back_end.m"
        {
#line 770 "mercury_compile_llds_back_end.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&top_level__mercury_compile_llds_back_end__V_16_16, top_level__mercury_compile_llds_back_end__V_4_4, top_level__mercury_compile_llds_back_end__V_10_10);
        }
#line 1297 "top_level.mercury_compile_llds_back_end.c"
        top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_16_16 == (MR_Integer) 0);
#line 770 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 770 "mercury_compile_llds_back_end.m"
        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_16_16;
#line 770 "mercury_compile_llds_back_end.m"
        else
#line 770 "mercury_compile_llds_back_end.m"
          {
#line 770 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__V_17_17;

#line 770 "mercury_compile_llds_back_end.m"
            {
#line 770 "mercury_compile_llds_back_end.m"
              mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[0], &top_level__mercury_compile_llds_back_end__V_17_17, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_5_5)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_11_11)));
            }
#line 1317 "top_level.mercury_compile_llds_back_end.c"
            top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_17_17 == (MR_Integer) 0);
#line 770 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 770 "mercury_compile_llds_back_end.m"
            if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
              *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_17_17;
#line 770 "mercury_compile_llds_back_end.m"
            else
#line 770 "mercury_compile_llds_back_end.m"
              {
#line 770 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__V_18_18;

#line 770 "mercury_compile_llds_back_end.m"
                {
#line 770 "mercury_compile_llds_back_end.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[1], &top_level__mercury_compile_llds_back_end__V_18_18, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_6_6)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_12_12)));
                }
#line 1337 "top_level.mercury_compile_llds_back_end.c"
                top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_18_18 == (MR_Integer) 0);
#line 770 "mercury_compile_llds_back_end.m"
                top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 770 "mercury_compile_llds_back_end.m"
                if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
                  *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_18_18;
#line 770 "mercury_compile_llds_back_end.m"
                else
#line 770 "mercury_compile_llds_back_end.m"
                  {
#line 770 "mercury_compile_llds_back_end.m"
                    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;

#line 770 "mercury_compile_llds_back_end.m"
                    {
#line 770 "mercury_compile_llds_back_end.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[2], &top_level__mercury_compile_llds_back_end__V_19_19, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_7_7)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_13_13)));
                    }
#line 1357 "top_level.mercury_compile_llds_back_end.c"
                    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_19_19 == (MR_Integer) 0);
#line 770 "mercury_compile_llds_back_end.m"
                    top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 770 "mercury_compile_llds_back_end.m"
                    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
                      *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_19_19;
#line 770 "mercury_compile_llds_back_end.m"
                    else
#line 770 "mercury_compile_llds_back_end.m"
                      {
#line 770 "mercury_compile_llds_back_end.m"
                        MR_Word top_level__mercury_compile_llds_back_end__V_20_20;

#line 770 "mercury_compile_llds_back_end.m"
                        {
#line 770 "mercury_compile_llds_back_end.m"
                          parse_tree__prog_foreign____Compare____foreign_export_decls_0_0(&top_level__mercury_compile_llds_back_end__V_20_20, top_level__mercury_compile_llds_back_end__V_8_8, top_level__mercury_compile_llds_back_end__V_14_14);
                        }
#line 1377 "top_level.mercury_compile_llds_back_end.c"
                        top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_20_20 == (MR_Integer) 0);
#line 770 "mercury_compile_llds_back_end.m"
                        top_level__mercury_compile_llds_back_end__succeeded = !(top_level__mercury_compile_llds_back_end__succeeded);
#line 770 "mercury_compile_llds_back_end.m"
                        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
                          *top_level__mercury_compile_llds_back_end__HeadVar__1_1 = top_level__mercury_compile_llds_back_end__V_20_20;
#line 770 "mercury_compile_llds_back_end.m"
                        else
#line 770 "mercury_compile_llds_back_end.m"
                          {
#line 770 "mercury_compile_llds_back_end.m"
                            {
#line 770 "mercury_compile_llds_back_end.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[3], top_level__mercury_compile_llds_back_end__HeadVar__1_1, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_9_9)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_15_15)));
#line 770 "mercury_compile_llds_back_end.m"
                              return;
                            }
#line 770 "mercury_compile_llds_back_end.m"
                          }
#line 770 "mercury_compile_llds_back_end.m"
                      }
#line 770 "mercury_compile_llds_back_end.m"
                  }
#line 770 "mercury_compile_llds_back_end.m"
              }
#line 770 "mercury_compile_llds_back_end.m"
          }
#line 770 "mercury_compile_llds_back_end.m"
      }
#line 770 "mercury_compile_llds_back_end.m"
  }
#line 770 "mercury_compile_llds_back_end.m"
}

#line 770 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end____Unify____foreign_interface_info_0_0(
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 770 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__2_2)
#line 770 "mercury_compile_llds_back_end.m"
{
#line 770 "mercury_compile_llds_back_end.m"
  {
#line 770 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 770 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastX_15 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__1_1;
#line 770 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__CastY_16 = (MR_Integer) top_level__mercury_compile_llds_back_end__HeadVar__2_2;

#line 770 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__CastX_15 == top_level__mercury_compile_llds_back_end__CastY_16);
#line 770 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = MR_TRUE;
#line 770 "mercury_compile_llds_back_end.m"
    else
#line 770 "mercury_compile_llds_back_end.m"
      {
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_18_18;
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_19_19;
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_20_20;
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeInfo_22_22;
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 2)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 3)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 4)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 5)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 0)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 1)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 2)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 3)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 4)));
#line 770 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__HeadVar__2_2, (MR_Integer) 5)));

#line 1474 "top_level.mercury_compile_llds_back_end.c"
        {
#line 1476 "top_level.mercury_compile_llds_back_end.c"
          top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(top_level__mercury_compile_llds_back_end__V_3_3, top_level__mercury_compile_llds_back_end__V_9_9);
        }
#line 770 "mercury_compile_llds_back_end.m"
        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
          {
#line 1483 "top_level.mercury_compile_llds_back_end.c"
            top_level__mercury_compile_llds_back_end__TypeInfo_18_18 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[0];
#line 1485 "top_level.mercury_compile_llds_back_end.c"
            {
#line 1487 "top_level.mercury_compile_llds_back_end.c"
              top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_18_18, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_4_4)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_10_10)));
            }
#line 770 "mercury_compile_llds_back_end.m"
            if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
              {
#line 1494 "top_level.mercury_compile_llds_back_end.c"
                top_level__mercury_compile_llds_back_end__TypeInfo_19_19 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[1];
#line 1496 "top_level.mercury_compile_llds_back_end.c"
                {
#line 1498 "top_level.mercury_compile_llds_back_end.c"
                  top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_19_19, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_5_5)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_11_11)));
                }
#line 770 "mercury_compile_llds_back_end.m"
                if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
                  {
#line 1505 "top_level.mercury_compile_llds_back_end.c"
                    top_level__mercury_compile_llds_back_end__TypeInfo_20_20 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[2];
#line 1507 "top_level.mercury_compile_llds_back_end.c"
                    {
#line 1509 "top_level.mercury_compile_llds_back_end.c"
                      top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_20_20, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_6_6)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_12_12)));
                    }
#line 770 "mercury_compile_llds_back_end.m"
                    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
                      {
#line 1516 "top_level.mercury_compile_llds_back_end.c"
                        {
#line 1518 "top_level.mercury_compile_llds_back_end.c"
                          top_level__mercury_compile_llds_back_end__succeeded = parse_tree__prog_foreign____Unify____foreign_export_decls_0_0(top_level__mercury_compile_llds_back_end__V_7_7, top_level__mercury_compile_llds_back_end__V_13_13);
                        }
#line 770 "mercury_compile_llds_back_end.m"
                        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 770 "mercury_compile_llds_back_end.m"
                          {
#line 1525 "top_level.mercury_compile_llds_back_end.c"
                            top_level__mercury_compile_llds_back_end__TypeInfo_22_22 = (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_1[3];
#line 1527 "top_level.mercury_compile_llds_back_end.c"
                            {
#line 1529 "top_level.mercury_compile_llds_back_end.c"
                              return top_level__mercury_compile_llds_back_end__succeeded = mercury__builtin__unify_2_p_0(top_level__mercury_compile_llds_back_end__TypeInfo_22_22, ((MR_Box) (top_level__mercury_compile_llds_back_end__V_8_8)), ((MR_Box) (top_level__mercury_compile_llds_back_end__V_14_14)));
                            }
#line 770 "mercury_compile_llds_back_end.m"
                          }
#line 770 "mercury_compile_llds_back_end.m"
                      }
#line 770 "mercury_compile_llds_back_end.m"
                  }
#line 770 "mercury_compile_llds_back_end.m"
              }
#line 770 "mercury_compile_llds_back_end.m"
          }
#line 770 "mercury_compile_llds_back_end.m"
      }
#line 770 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 770 "mercury_compile_llds_back_end.m"
  }
#line 770 "mercury_compile_llds_back_end.m"
}

#line 911 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(
#line 911 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_8,
#line 911 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_9,
#line 911 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__BaseName_10,
#line 911 "mercury_compile_llds_back_end.m"
  MR_String * top_level__mercury_compile_llds_back_end__O_File_11,
#line 911 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_12)
#line 911 "mercury_compile_llds_back_end.m"
{
#line 915 "mercury_compile_llds_back_end.m"
  {
#line 915 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 915 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_14;
#line 915 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PIC_15;
#line 915 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Obj_16;
#line 915 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__C_File_17;

#line 916 "mercury_compile_llds_back_end.m"
    {
#line 916 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_8, &top_level__mercury_compile_llds_back_end__LinkedTargetType_14);
    }
#line 917 "mercury_compile_llds_back_end.m"
    {
#line 917 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__LinkedTargetType_14, &top_level__mercury_compile_llds_back_end__PIC_15);
    }
#line 918 "mercury_compile_llds_back_end.m"
    {
#line 918 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__PIC_15, &top_level__mercury_compile_llds_back_end__Obj_16);
    }
#line 919 "mercury_compile_llds_back_end.m"
    {
#line 919 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__C_File_17 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, (MR_String) ".c");
    }
#line 920 "mercury_compile_llds_back_end.m"
    {
#line 920 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__O_File_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__BaseName_10, top_level__mercury_compile_llds_back_end__Obj_16);
    }
#line 921 "mercury_compile_llds_back_end.m"
    {
#line 921 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__Globals_8, top_level__mercury_compile_llds_back_end__ErrorStream_9, top_level__mercury_compile_llds_back_end__PIC_15, top_level__mercury_compile_llds_back_end__C_File_17, *top_level__mercury_compile_llds_back_end__O_File_11, top_level__mercury_compile_llds_back_end__Succeeded_12);
#line 921 "mercury_compile_llds_back_end.m"
      return;
    }
#line 915 "mercury_compile_llds_back_end.m"
  }
#line 911 "mercury_compile_llds_back_end.m"
}

#line 897 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_7,
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ErrorStream_8,
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_9,
#line 897 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_10)
#line 897 "mercury_compile_llds_back_end.m"
{
#line 900 "mercury_compile_llds_back_end.m"
  {
#line 900 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 900 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LinkedTargetType_12;
#line 900 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PIC_13;
#line 900 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Obj_14;
#line 900 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__C_File_15;
#line 900 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__O_File_16;

#line 901 "mercury_compile_llds_back_end.m"
    {
#line 901 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_linked_target_type_2_p_0(top_level__mercury_compile_llds_back_end__Globals_7, &top_level__mercury_compile_llds_back_end__LinkedTargetType_12);
    }
#line 902 "mercury_compile_llds_back_end.m"
    {
#line 902 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__get_object_code_type_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__LinkedTargetType_12, &top_level__mercury_compile_llds_back_end__PIC_13);
    }
#line 903 "mercury_compile_llds_back_end.m"
    {
#line 903 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__maybe_pic_object_file_extension_3_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__PIC_13, &top_level__mercury_compile_llds_back_end__Obj_14);
    }
#line 904 "mercury_compile_llds_back_end.m"
    {
#line 904 "mercury_compile_llds_back_end.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, (MR_String) ".c", (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__C_File_15);
    }
#line 906 "mercury_compile_llds_back_end.m"
    {
#line 906 "mercury_compile_llds_back_end.m"
      parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ModuleName_9, top_level__mercury_compile_llds_back_end__Obj_14, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__O_File_16);
    }
#line 908 "mercury_compile_llds_back_end.m"
    {
#line 908 "mercury_compile_llds_back_end.m"
      backend_libs__compile_target_code__do_compile_c_file_8_p_0(top_level__mercury_compile_llds_back_end__Globals_7, top_level__mercury_compile_llds_back_end__ErrorStream_8, top_level__mercury_compile_llds_back_end__PIC_13, top_level__mercury_compile_llds_back_end__C_File_15, top_level__mercury_compile_llds_back_end__O_File_16, top_level__mercury_compile_llds_back_end__Succeeded_10);
#line 908 "mercury_compile_llds_back_end.m"
      return;
    }
#line 900 "mercury_compile_llds_back_end.m"
  }
#line 897 "mercury_compile_llds_back_end.m"
}

#line 890 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(
#line 890 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 890 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS0_7,
#line 890 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Succeeded_8)
#line 890 "mercury_compile_llds_back_end.m"
{
#line 893 "mercury_compile_llds_back_end.m"
  {
#line 893 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 893 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LLDS_10;

#line 894 "mercury_compile_llds_back_end.m"
    {
#line 894 "mercury_compile_llds_back_end.m"
      ll_backend__transform_llds__transform_llds_3_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS0_7, &top_level__mercury_compile_llds_back_end__LLDS_10);
    }
#line 895 "mercury_compile_llds_back_end.m"
    {
#line 895 "mercury_compile_llds_back_end.m"
      ll_backend__llds_out__llds_out_file__output_llds_5_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__Succeeded_8);
#line 895 "mercury_compile_llds_back_end.m"
      return;
    }
#line 893 "mercury_compile_llds_back_end.m"
  }
#line 890 "mercury_compile_llds_back_end.m"
}

#line 879 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__1_1,
#line 879 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__HeadVar__2_2,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__HeadVar__3_3,
#line 879 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__4_4)
#line 879 "mercury_compile_llds_back_end.m"
{
#line 882 "mercury_compile_llds_back_end.m"
  {
#line 882 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 882 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 882 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 882 "mercury_compile_llds_back_end.m"
    else
#line 883 "mercury_compile_llds_back_end.m"
      {
#line 883 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Chunk_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Chunks_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__1_1, (MR_Integer) 1)));
#line 883 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Module_11;
#line 883 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Modules_12;
#line 883 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__NumString_13;
#line 883 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__ThisModuleName_14;
#line 883 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__Num1_15;

#line 884 "mercury_compile_llds_back_end.m"
        {
#line 884 "mercury_compile_llds_back_end.m"
          mercury__string__int_to_string_2_p_0(top_level__mercury_compile_llds_back_end__HeadVar__3_3, &top_level__mercury_compile_llds_back_end__NumString_13);
        }
#line 885 "mercury_compile_llds_back_end.m"
        {
#line 885 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ThisModuleName_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__NumString_13);
        }
#line 886 "mercury_compile_llds_back_end.m"
        {
#line 886 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__Module_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 886 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ThisModuleName_14));
#line 886 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Module_11, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Chunk_7));
#line 886 "mercury_compile_llds_back_end.m"
        }
#line 887 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__Num1_15 = (top_level__mercury_compile_llds_back_end__HeadVar__3_3 + (MR_Integer) 1);
#line 888 "mercury_compile_llds_back_end.m"
        {
#line 888 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__Chunks_8, top_level__mercury_compile_llds_back_end__HeadVar__2_2, top_level__mercury_compile_llds_back_end__Num1_15, &top_level__mercury_compile_llds_back_end__Modules_12);
        }
#line 883 "mercury_compile_llds_back_end.m"
        {
#line 883 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 883 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 883 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__4_4 = base;
#line 883 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Module_11));
#line 883 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Modules_12));
#line 883 "mercury_compile_llds_back_end.m"
        }
#line 883 "mercury_compile_llds_back_end.m"
      }
#line 882 "mercury_compile_llds_back_end.m"
  }
#line 879 "mercury_compile_llds_back_end.m"
}

#line 873 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(
#line 873 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ChunkList_4,
#line 873 "mercury_compile_llds_back_end.m"
  MR_String top_level__mercury_compile_llds_back_end__ModName_5,
#line 873 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Modules_6)
#line 873 "mercury_compile_llds_back_end.m"
{
#line 876 "mercury_compile_llds_back_end.m"
  {
#line 876 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 877 "mercury_compile_llds_back_end.m"
    {
#line 877 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__combine_chunks_2_4_p_0(top_level__mercury_compile_llds_back_end__ChunkList_4, top_level__mercury_compile_llds_back_end__ModName_5, (MR_Integer) 0, top_level__mercury_compile_llds_back_end__Modules_6);
#line 877 "mercury_compile_llds_back_end.m"
      return;
    }
#line 876 "mercury_compile_llds_back_end.m"
  }
#line 873 "mercury_compile_llds_back_end.m"
}

#line 846 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Globals_6,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ForeignImportModule_7,
#line 846 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__Include_8)
#line 846 "mercury_compile_llds_back_end.m"
{
#line 850 "mercury_compile_llds_back_end.m"
  {
#line 850 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 850 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Lang_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 0)));
#line 850 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignImportModule_7, (MR_Integer) 1)));

#line 859 "mercury_compile_llds_back_end.m"
#line 859 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__Lang_10) {
#line 859 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 859 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 853 "mercury_compile_llds_back_end.m"
        {
#line 853 "mercury_compile_llds_back_end.m"
          MR_String top_level__mercury_compile_llds_back_end__HeaderFileName_12;
#line 853 "mercury_compile_llds_back_end.m"
          MR_String top_level__mercury_compile_llds_back_end__IncludeString_13;
#line 853 "mercury_compile_llds_back_end.m"
          MR_String top_level__mercury_compile_llds_back_end__V_34_34;
#line 853 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_38_38;
#line 853 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_39_39;

#line 854 "mercury_compile_llds_back_end.m"
          {
#line 854 "mercury_compile_llds_back_end.m"
            parse_tree__file_names__module_name_to_search_file_name_6_p_0(top_level__mercury_compile_llds_back_end__Globals_6, top_level__mercury_compile_llds_back_end__ModuleName_11, (MR_String) ".mh", &top_level__mercury_compile_llds_back_end__HeaderFileName_12);
          }
#line 856 "mercury_compile_llds_back_end.m"
          {
#line 856 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_34_34 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__HeaderFileName_12, (MR_String) "\"\n");
          }
#line 856 "mercury_compile_llds_back_end.m"
          {
#line 856 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__IncludeString_13 = mercury__string__f_43_43_2_f_0((MR_String) "#include \"", top_level__mercury_compile_llds_back_end__V_34_34);
          }
#line 858 "mercury_compile_llds_back_end.m"
          {
#line 858 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 858 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_38_38, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__IncludeString_13));
#line 858 "mercury_compile_llds_back_end.m"
          }
#line 858 "mercury_compile_llds_back_end.m"
          {
#line 858 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_39_39 = mercury__term__context_init_0_f_0();
          }
#line 857 "mercury_compile_llds_back_end.m"
          {
#line 857 "mercury_compile_llds_back_end.m"
            MR_Word base;
#line 857 "mercury_compile_llds_back_end.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 857 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__Include_8 = base;
#line 857 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 857 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 857 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_38_38));
#line 857 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_39_39));
#line 857 "mercury_compile_llds_back_end.m"
          }
#line 853 "mercury_compile_llds_back_end.m"
        }
#line 859 "mercury_compile_llds_back_end.m"
        break;
#line 859 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 860 "mercury_compile_llds_back_end.m"
        {
#line 861 "mercury_compile_llds_back_end.m"
          {
#line 861 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for C#");
#line 861 "mercury_compile_llds_back_end.m"
            return;
          }
#line 860 "mercury_compile_llds_back_end.m"
        }
#line 859 "mercury_compile_llds_back_end.m"
        break;
#line 859 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 3:
#line 868 "mercury_compile_llds_back_end.m"
        {
#line 869 "mercury_compile_llds_back_end.m"
          {
#line 869 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Erlang");
#line 869 "mercury_compile_llds_back_end.m"
            return;
          }
#line 868 "mercury_compile_llds_back_end.m"
        }
#line 859 "mercury_compile_llds_back_end.m"
        break;
#line 859 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 2:
#line 864 "mercury_compile_llds_back_end.m"
        {
#line 865 "mercury_compile_llds_back_end.m"
          {
#line 865 "mercury_compile_llds_back_end.m"
            mercury__require__sorry_3_p_0((MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.make_foreign_import_header_code\'/5", (MR_String) ":- import_module not yet implemented: \140:- pragma foreign_import_module\' for Java");
#line 865 "mercury_compile_llds_back_end.m"
            return;
          }
#line 864 "mercury_compile_llds_back_end.m"
        }
#line 859 "mercury_compile_llds_back_end.m"
        break;
#line 859 "mercury_compile_llds_back_end.m"
    }
#line 850 "mercury_compile_llds_back_end.m"
  }
#line 846 "mercury_compile_llds_back_end.m"
}

#line 834 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(
#line 834 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ModuleName_4,
#line 834 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__StartGuard_5,
#line 834 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__EndGuard_6)
#line 834 "mercury_compile_llds_back_end.m"
{
#line 837 "mercury_compile_llds_back_end.m"
  {
#line 837 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 837 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Define_7;
#line 837 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__Start_8;
#line 837 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_11_11;
#line 837 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_12_12;
#line 837 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__V_14_14;
#line 837 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_18_18;
#line 837 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_19_19;
#line 837 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_23_23;

#line 838 "mercury_compile_llds_back_end.m"
    {
#line 838 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__Define_7 = backend_libs__foreign__decl_guard_1_f_0(top_level__mercury_compile_llds_back_end__ModuleName_4);
    }
#line 839 "mercury_compile_llds_back_end.m"
    {
#line 839 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_14_14 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, (MR_String) "\n");
    }
#line 839 "mercury_compile_llds_back_end.m"
    {
#line 839 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\n#define ", top_level__mercury_compile_llds_back_end__V_14_14);
    }
#line 839 "mercury_compile_llds_back_end.m"
    {
#line 839 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_11_11 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__Define_7, top_level__mercury_compile_llds_back_end__V_12_12);
    }
#line 839 "mercury_compile_llds_back_end.m"
    {
#line 839 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__Start_8 = mercury__string__f_43_43_2_f_0((MR_String) "#ifndef ", top_level__mercury_compile_llds_back_end__V_11_11);
    }
#line 842 "mercury_compile_llds_back_end.m"
    {
#line 842 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 842 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_18_18, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_8));
#line 842 "mercury_compile_llds_back_end.m"
    }
#line 842 "mercury_compile_llds_back_end.m"
    {
#line 842 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_19_19 = mercury__term__context_init_0_f_0();
    }
#line 841 "mercury_compile_llds_back_end.m"
    {
#line 841 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 841 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 841 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__StartGuard_5 = base;
#line 841 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 841 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 841 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_18_18));
#line 841 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_19_19));
#line 841 "mercury_compile_llds_back_end.m"
    }
#line 844 "mercury_compile_llds_back_end.m"
    {
#line 844 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_23_23 = mercury__term__context_init_0_f_0();
    }
#line 843 "mercury_compile_llds_back_end.m"
    {
#line 843 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 843 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 843 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__EndGuard_6 = base;
#line 843 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 843 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 843 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_8[4]));
#line 843 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_23_23));
#line 843 "mercury_compile_llds_back_end.m"
    }
#line 837 "mercury_compile_llds_back_end.m"
  }
#line 834 "mercury_compile_llds_back_end.m"
}

#line 829 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(
#line 829 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Decl_2)
#line 829 "mercury_compile_llds_back_end.m"
{
#line 831 "mercury_compile_llds_back_end.m"
  {
#line 831 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 831 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 1)));
#line 832 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 0)));
#line 832 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 2)));
#line 832 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__Decl_2, (MR_Integer) 3)));

#line 832 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__V_6_6 == (MR_Integer) 0);
#line 831 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 831 "mercury_compile_llds_back_end.m"
  }
#line 829 "mercury_compile_llds_back_end.m"
}

#line 792 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_4,
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__UseForeignLanguage_5,
#line 792 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__ForeignInterfaceInfo_6)
#line 792 "mercury_compile_llds_back_end.m"
{
#line 795 "mercury_compile_llds_back_end.m"
  {
#line 795 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleName_7;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignSelfImport_8;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImportsModules0_11;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignImportsModules_14;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_15;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_17;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WantedForeignImports_19;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignExportDecls_20;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ForeignExportDefns_21;
#line 795 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_22_22;
#line 815 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherDeclCodes_16;
#line 817 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___OtherBodyCodes_18;

#line 796 "mercury_compile_llds_back_end.m"
    {
#line 796 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ModuleName_7);
    }
#line 797 "mercury_compile_llds_back_end.m"
    {
#line 797 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignSelfImport_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 797 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UseForeignLanguage_5));
#line 797 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
#line 797 "mercury_compile_llds_back_end.m"
    }
#line 799 "mercury_compile_llds_back_end.m"
    {
#line 799 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_decl_codes_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9);
    }
#line 800 "mercury_compile_llds_back_end.m"
    {
#line 800 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_body_codes_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10);
    }
#line 801 "mercury_compile_llds_back_end.m"
    {
#line 801 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_foreign_import_modules_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignImportsModules0_11);
    }
#line 802 "mercury_compile_llds_back_end.m"
    {
#line 802 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0, top_level__mercury_compile_llds_back_end__ForeignDeclCodeCord_9);
    }
#line 803 "mercury_compile_llds_back_end.m"
    {
#line 803 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13 = mercury__cord__list_1_f_0((MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0, top_level__mercury_compile_llds_back_end__ForeignBodyCodeCord_10);
    }
#line 804 "mercury_compile_llds_back_end.m"
    {
#line 804 "mercury_compile_llds_back_end.m"
      parse_tree__prog_data__add_foreign_import_module_info_3_p_0(top_level__mercury_compile_llds_back_end__ForeignSelfImport_8, top_level__mercury_compile_llds_back_end__ForeignImportsModules0_11, &top_level__mercury_compile_llds_back_end__ForeignImportsModules_14);
    }
#line 815 "mercury_compile_llds_back_end.m"
    {
#line 815 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_decls_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignDeclCodes_12, &top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_15, &top_level__mercury_compile_llds_back_end___OtherDeclCodes_16);
    }
#line 817 "mercury_compile_llds_back_end.m"
    {
#line 817 "mercury_compile_llds_back_end.m"
      backend_libs__foreign__filter_bodys_4_p_0(top_level__mercury_compile_llds_back_end__UseForeignLanguage_5, top_level__mercury_compile_llds_back_end__ForeignBodyCodes_13, &top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_17, &top_level__mercury_compile_llds_back_end___OtherBodyCodes_18);
    }
#line 820 "mercury_compile_llds_back_end.m"
    {
#line 820 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_22_22 = parse_tree__prog_data__get_lang_foreign_import_module_infos_2_f_0(top_level__mercury_compile_llds_back_end__ForeignImportsModules_14, top_level__mercury_compile_llds_back_end__UseForeignLanguage_5);
    }
#line 819 "mercury_compile_llds_back_end.m"
    {
#line 819 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__WantedForeignImports_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, top_level__mercury_compile_llds_back_end__V_22_22);
    }
#line 822 "mercury_compile_llds_back_end.m"
    {
#line 822 "mercury_compile_llds_back_end.m"
      backend_libs__export__get_foreign_export_decls_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignExportDecls_20);
    }
#line 823 "mercury_compile_llds_back_end.m"
    {
#line 823 "mercury_compile_llds_back_end.m"
      backend_libs__export__get_foreign_export_defns_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_4, &top_level__mercury_compile_llds_back_end__ForeignExportDefns_21);
    }
#line 825 "mercury_compile_llds_back_end.m"
    {
#line 825 "mercury_compile_llds_back_end.m"
      MR_Word base;
#line 825 "mercury_compile_llds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 825 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__ForeignInterfaceInfo_6 = base;
#line 825 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleName_7));
#line 825 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignDeclCodes_15));
#line 825 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignBodyCodes_17));
#line 825 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__WantedForeignImports_19));
#line 825 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignExportDecls_20));
#line 825 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ForeignExportDefns_21));
#line 825 "mercury_compile_llds_back_end.m"
    }
#line 795 "mercury_compile_llds_back_end.m"
  }
#line 792 "mercury_compile_llds_back_end.m"
}

#line 629 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__LLDS_10,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 629 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16)
#line 629 "mercury_compile_llds_back_end.m"
{
#line 633 "mercury_compile_llds_back_end.m"
  {
#line 633 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 634 "mercury_compile_llds_back_end.m"
    {
#line 634 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Generating call continuation information...");
    }
#line 636 "mercury_compile_llds_back_end.m"
    {
#line 636 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
    }
#line 637 "mercury_compile_llds_back_end.m"
    {
#line 637 "mercury_compile_llds_back_end.m"
      ll_backend__continuation_info__maybe_collect_call_continuations_in_cprocs_4_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__LLDS_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);
    }
#line 638 "mercury_compile_llds_back_end.m"
    {
#line 638 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) " done.\n");
    }
#line 639 "mercury_compile_llds_back_end.m"
    {
#line 639 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
#line 639 "mercury_compile_llds_back_end.m"
      return;
    }
#line 633 "mercury_compile_llds_back_end.m"
  }
#line 629 "mercury_compile_llds_back_end.m"
}

#line 611 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__GlobalData_10,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_11,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_12,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17,
#line 611 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18)
#line 611 "mercury_compile_llds_back_end.m"
{
#line 615 "mercury_compile_llds_back_end.m"
  {
#line 615 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 615 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_15;
#line 615 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_16;

#line 616 "mercury_compile_llds_back_end.m"
    {
#line 616 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 617 "mercury_compile_llds_back_end.m"
    {
#line 617 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 456, &top_level__mercury_compile_llds_back_end__Optimize_16);
    }
#line 625 "mercury_compile_llds_back_end.m"
#line 625 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__Optimize_16) {
#line 625 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 625 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 626 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17;
#line 625 "mercury_compile_llds_back_end.m"
        break;
#line 625 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 619 "mercury_compile_llds_back_end.m"
        {
#line 620 "mercury_compile_llds_back_end.m"
          {
#line 620 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% Doing optimizations...\n");
          }
#line 621 "mercury_compile_llds_back_end.m"
          {
#line 621 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_11);
          }
#line 622 "mercury_compile_llds_back_end.m"
          {
#line 622 "mercury_compile_llds_back_end.m"
            ll_backend__optimize__optimize_procs_4_p_0(top_level__mercury_compile_llds_back_end__Globals_15, top_level__mercury_compile_llds_back_end__GlobalData_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_0_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_18);
          }
#line 623 "mercury_compile_llds_back_end.m"
          {
#line 623 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_11, (MR_String) "% done.\n");
          }
#line 624 "mercury_compile_llds_back_end.m"
          {
#line 624 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_12);
#line 624 "mercury_compile_llds_back_end.m"
            return;
          }
#line 619 "mercury_compile_llds_back_end.m"
        }
#line 625 "mercury_compile_llds_back_end.m"
        break;
#line 625 "mercury_compile_llds_back_end.m"
    }
#line 615 "mercury_compile_llds_back_end.m"
  }
#line 611 "mercury_compile_llds_back_end.m"
}

#line 600 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_9,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_10,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_11,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16,
#line 600 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_13)
#line 600 "mercury_compile_llds_back_end.m"
{
#line 604 "mercury_compile_llds_back_end.m"
  {
#line 604 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 605 "mercury_compile_llds_back_end.m"
    {
#line 605 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% Generating code...\n");
    }
#line 606 "mercury_compile_llds_back_end.m"
    {
#line 606 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_10);
    }
#line 607 "mercury_compile_llds_back_end.m"
    {
#line 607 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__generate_module_code_4_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__LLDS_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_16);
    }
#line 608 "mercury_compile_llds_back_end.m"
    {
#line 608 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_10, (MR_String) "% done.\n");
    }
#line 609 "mercury_compile_llds_back_end.m"
    {
#line 609 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_11);
#line 609 "mercury_compile_llds_back_end.m"
      return;
    }
#line 604 "mercury_compile_llds_back_end.m"
  }
#line 600 "mercury_compile_llds_back_end.m"
}

#line 596 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0_1(
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 596 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 596 "mercury_compile_llds_back_end.m"
{
#line 596 "mercury_compile_llds_back_end.m"
  {
#line 596 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 596 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 596 "mercury_compile_llds_back_end.m"
    {
#line 596 "mercury_compile_llds_back_end.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 596 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 596 "mercury_compile_llds_back_end.m"
  }
#line 596 "mercury_compile_llds_back_end.m"
}

#line 589 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 589 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 589 "mercury_compile_llds_back_end.m"
{
#line 592 "mercury_compile_llds_back_end.m"
  {
#line 592 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 593 "mercury_compile_llds_back_end.m"
    {
#line 593 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Allocating store map...");
    }
#line 594 "mercury_compile_llds_back_end.m"
    {
#line 594 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 595 "mercury_compile_llds_back_end.m"
    {
#line 595 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[3]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 597 "mercury_compile_llds_back_end.m"
    {
#line 597 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 598 "mercury_compile_llds_back_end.m"
    {
#line 598 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 598 "mercury_compile_llds_back_end.m"
      return;
    }
#line 592 "mercury_compile_llds_back_end.m"
  }
#line 589 "mercury_compile_llds_back_end.m"
}

#line 585 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0_1(
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 585 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 585 "mercury_compile_llds_back_end.m"
{
#line 585 "mercury_compile_llds_back_end.m"
  {
#line 585 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 585 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

#line 585 "mercury_compile_llds_back_end.m"
    {
#line 585 "mercury_compile_llds_back_end.m"
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
#line 585 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
#line 585 "mercury_compile_llds_back_end.m"
  }
#line 585 "mercury_compile_llds_back_end.m"
}

#line 578 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11,
#line 578 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12)
#line 578 "mercury_compile_llds_back_end.m"
{
#line 581 "mercury_compile_llds_back_end.m"
  {
#line 581 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 582 "mercury_compile_llds_back_end.m"
    {
#line 582 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing stack vars...");
    }
#line 583 "mercury_compile_llds_back_end.m"
    {
#line 583 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 584 "mercury_compile_llds_back_end.m"
    {
#line 584 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[2]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 586 "mercury_compile_llds_back_end.m"
    {
#line 586 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 587 "mercury_compile_llds_back_end.m"
    {
#line 587 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 587 "mercury_compile_llds_back_end.m"
      return;
    }
#line 581 "mercury_compile_llds_back_end.m"
  }
#line 578 "mercury_compile_llds_back_end.m"
}

#line 559 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_7_p_0(
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_8,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_9,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HLDS_10,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_15,
#line 559 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_16)
#line 559 "mercury_compile_llds_back_end.m"
{
#line 563 "mercury_compile_llds_back_end.m"
  {
#line 563 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 563 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_13;
#line 563 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_14;

#line 564 "mercury_compile_llds_back_end.m"
    {
#line 564 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_10, &top_level__mercury_compile_llds_back_end__Globals_13);
    }
#line 565 "mercury_compile_llds_back_end.m"
    {
#line 565 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_13, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_14);
    }
#line 574 "mercury_compile_llds_back_end.m"
#line 574 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__WarnTailCalls_14) {
#line 574 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 574 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 575 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_16 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_15;
#line 574 "mercury_compile_llds_back_end.m"
        break;
#line 574 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 568 "mercury_compile_llds_back_end.m"
        {
#line 569 "mercury_compile_llds_back_end.m"
          {
#line 569 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_8, (MR_String) "% Warning about non-tail recursive calls...\n");
          }
#line 571 "mercury_compile_llds_back_end.m"
          {
#line 571 "mercury_compile_llds_back_end.m"
            hlds__mark_tail_calls__warn_non_tail_calls_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_10, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_16);
          }
#line 572 "mercury_compile_llds_back_end.m"
          {
#line 572 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_8, (MR_String) "% done.\n");
          }
#line 573 "mercury_compile_llds_back_end.m"
          {
#line 573 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_9);
#line 573 "mercury_compile_llds_back_end.m"
            return;
          }
#line 568 "mercury_compile_llds_back_end.m"
        }
#line 574 "mercury_compile_llds_back_end.m"
        break;
#line 574 "mercury_compile_llds_back_end.m"
    }
#line 563 "mercury_compile_llds_back_end.m"
  }
#line 559 "mercury_compile_llds_back_end.m"
}

#line 551 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0_1(
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 551 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 551 "mercury_compile_llds_back_end.m"
{
#line 551 "mercury_compile_llds_back_end.m"
  {
#line 551 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 551 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6;

#line 551 "mercury_compile_llds_back_end.m"
    {
#line 551 "mercury_compile_llds_back_end.m"
      hlds__mark_tail_calls__mark_tail_calls_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6);
    }
#line 551 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__6_6));
#line 551 "mercury_compile_llds_back_end.m"
  }
#line 551 "mercury_compile_llds_back_end.m"
}

#line 536 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15,
#line 536 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16)
#line 536 "mercury_compile_llds_back_end.m"
{
#line 539 "mercury_compile_llds_back_end.m"
  {
#line 539 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 539 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 539 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12;
#line 539 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_13;
#line 539 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MarkTailCalls_14;

#line 540 "mercury_compile_llds_back_end.m"
    {
#line 540 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 541 "mercury_compile_llds_back_end.m"
    {
#line 541 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 129, &top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12);
    }
#line 542 "mercury_compile_llds_back_end.m"
    {
#line 542 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_13);
    }
#line 544 "mercury_compile_llds_back_end.m"
    {
#line 544 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MarkTailCalls_14 = mercury__bool__or_2_f_0(top_level__mercury_compile_llds_back_end__ExecTraceTailRec_12, top_level__mercury_compile_llds_back_end__WarnTailCalls_13);
    }
#line 555 "mercury_compile_llds_back_end.m"
#line 555 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__MarkTailCalls_14) {
#line 555 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 555 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 556 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15;
#line 555 "mercury_compile_llds_back_end.m"
        break;
#line 555 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 546 "mercury_compile_llds_back_end.m"
        {
#line 547 "mercury_compile_llds_back_end.m"
          {
#line 547 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Marking directly tail recursive calls...");
          }
#line 549 "mercury_compile_llds_back_end.m"
          {
#line 549 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 550 "mercury_compile_llds_back_end.m"
          {
#line 550 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(2), &top_level__mercury_compile_llds_back_end_scalar_common_8[1]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_16);
          }
#line 553 "mercury_compile_llds_back_end.m"
          {
#line 553 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
          }
#line 554 "mercury_compile_llds_back_end.m"
          {
#line 554 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 554 "mercury_compile_llds_back_end.m"
            return;
          }
#line 546 "mercury_compile_llds_back_end.m"
        }
#line 555 "mercury_compile_llds_back_end.m"
        break;
#line 555 "mercury_compile_llds_back_end.m"
    }
#line 539 "mercury_compile_llds_back_end.m"
  }
#line 536 "mercury_compile_llds_back_end.m"
}

#line 530 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0_1(
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 530 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 530 "mercury_compile_llds_back_end.m"
{
#line 530 "mercury_compile_llds_back_end.m"
  {
#line 530 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 530 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4;

#line 530 "mercury_compile_llds_back_end.m"
    {
#line 530 "mercury_compile_llds_back_end.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_3), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4);
    }
#line 530 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__4_4));
#line 530 "mercury_compile_llds_back_end.m"
  }
#line 530 "mercury_compile_llds_back_end.m"
}

#line 515 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14,
#line 515 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15)
#line 515 "mercury_compile_llds_back_end.m"
{
#line 518 "mercury_compile_llds_back_end.m"
  {
#line 518 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 518 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 518 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ParallelLiveness_12;
#line 518 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__DebugLiveness_13;

#line 519 "mercury_compile_llds_back_end.m"
    {
#line 519 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 520 "mercury_compile_llds_back_end.m"
    {
#line 520 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 297, &top_level__mercury_compile_llds_back_end__ParallelLiveness_12);
    }
#line 521 "mercury_compile_llds_back_end.m"
    {
#line 521 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 73, &top_level__mercury_compile_llds_back_end__DebugLiveness_13);
    }
#line 522 "mercury_compile_llds_back_end.m"
    {
#line 522 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Computing liveness...\n");
    }
#line 523 "mercury_compile_llds_back_end.m"
    {
#line 523 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 525 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ParallelLiveness_12 == (MR_Integer) 1);
#line 525 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 526 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__DebugLiveness_13 == (MR_Integer) -1);
#line 529 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 528 "mercury_compile_llds_back_end.m"
      {
#line 528 "mercury_compile_llds_back_end.m"
        ll_backend__liveness__detect_liveness_preds_parallel_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
      }
#line 529 "mercury_compile_llds_back_end.m"
    else
#line 530 "mercury_compile_llds_back_end.m"
      {
#line 530 "mercury_compile_llds_back_end.m"
        {
#line 530 "mercury_compile_llds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_llds_back_end_scalar_common_8[0]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_15);
        }
#line 530 "mercury_compile_llds_back_end.m"
      }
#line 533 "mercury_compile_llds_back_end.m"
    {
#line 533 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
    }
#line 534 "mercury_compile_llds_back_end.m"
    {
#line 534 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 534 "mercury_compile_llds_back_end.m"
      return;
    }
#line 518 "mercury_compile_llds_back_end.m"
  }
#line 515 "mercury_compile_llds_back_end.m"
}

#line 507 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0_1(
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 507 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 507 "mercury_compile_llds_back_end.m"
{
#line 507 "mercury_compile_llds_back_end.m"
  {
#line 507 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 507 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 507 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 507 "mercury_compile_llds_back_end.m"
    {
#line 507 "mercury_compile_llds_back_end.m"
      ll_backend__follow_code__move_follow_code_in_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 507 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 507 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 507 "mercury_compile_llds_back_end.m"
  }
#line 507 "mercury_compile_llds_back_end.m"
}

#line 497 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 497 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 497 "mercury_compile_llds_back_end.m"
{
#line 500 "mercury_compile_llds_back_end.m"
  {
#line 500 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 500 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 500 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_12;

#line 501 "mercury_compile_llds_back_end.m"
    {
#line 501 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 502 "mercury_compile_llds_back_end.m"
    {
#line 502 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 381, &top_level__mercury_compile_llds_back_end__FollowCode_12);
    }
#line 511 "mercury_compile_llds_back_end.m"
#line 511 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__FollowCode_12) {
#line 511 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 511 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 512 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 511 "mercury_compile_llds_back_end.m"
        break;
#line 511 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 504 "mercury_compile_llds_back_end.m"
        {
#line 505 "mercury_compile_llds_back_end.m"
          {
#line 505 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Migrating branch code...");
          }
#line 506 "mercury_compile_llds_back_end.m"
          {
#line 506 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 507 "mercury_compile_llds_back_end.m"
          {
#line 507 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[6]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 509 "mercury_compile_llds_back_end.m"
          {
#line 509 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
          }
#line 510 "mercury_compile_llds_back_end.m"
          {
#line 510 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 510 "mercury_compile_llds_back_end.m"
            return;
          }
#line 504 "mercury_compile_llds_back_end.m"
        }
#line 511 "mercury_compile_llds_back_end.m"
        break;
#line 511 "mercury_compile_llds_back_end.m"
    }
#line 500 "mercury_compile_llds_back_end.m"
  }
#line 497 "mercury_compile_llds_back_end.m"
}

#line 490 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0_1(
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 490 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 490 "mercury_compile_llds_back_end.m"
{
#line 490 "mercury_compile_llds_back_end.m"
  {
#line 490 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 490 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3;
#line 490 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5;

#line 490 "mercury_compile_llds_back_end.m"
    {
#line 490 "mercury_compile_llds_back_end.m"
      ll_backend__stack_opt__stack_opt_cell_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 490 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 490 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 490 "mercury_compile_llds_back_end.m"
  }
#line 490 "mercury_compile_llds_back_end.m"
}

#line 479 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 479 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 479 "mercury_compile_llds_back_end.m"
{
#line 482 "mercury_compile_llds_back_end.m"
  {
#line 482 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 482 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 482 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

#line 483 "mercury_compile_llds_back_end.m"
    {
#line 483 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 484 "mercury_compile_llds_back_end.m"
    {
#line 484 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 365, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
#line 493 "mercury_compile_llds_back_end.m"
#line 493 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVars_12) {
#line 493 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 493 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 494 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 493 "mercury_compile_llds_back_end.m"
        break;
#line 493 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 486 "mercury_compile_llds_back_end.m"
        {
#line 487 "mercury_compile_llds_back_end.m"
          {
#line 487 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using cells...\n");
          }
#line 489 "mercury_compile_llds_back_end.m"
          {
#line 489 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 490 "mercury_compile_llds_back_end.m"
          {
#line 490 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[5]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 491 "mercury_compile_llds_back_end.m"
          {
#line 491 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 492 "mercury_compile_llds_back_end.m"
          {
#line 492 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 492 "mercury_compile_llds_back_end.m"
            return;
          }
#line 486 "mercury_compile_llds_back_end.m"
        }
#line 493 "mercury_compile_llds_back_end.m"
        break;
#line 493 "mercury_compile_llds_back_end.m"
    }
#line 482 "mercury_compile_llds_back_end.m"
  }
#line 479 "mercury_compile_llds_back_end.m"
}

#line 472 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0_1(
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
      ll_backend__saved_vars__saved_vars_proc_5_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_2), &top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_4), &top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5);
    }
#line 472 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv1_HeadVar__3_3));
#line 472 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_HeadVar__5_5));
#line 472 "mercury_compile_llds_back_end.m"
  }
#line 472 "mercury_compile_llds_back_end.m"
}

#line 461 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Verbose_7,
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__Stats_8,
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 461 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14)
#line 461 "mercury_compile_llds_back_end.m"
{
#line 464 "mercury_compile_llds_back_end.m"
  {
#line 464 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 464 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_11;
#line 464 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVars_12;

#line 465 "mercury_compile_llds_back_end.m"
    {
#line 465 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_llds_back_end__Globals_11);
    }
#line 466 "mercury_compile_llds_back_end.m"
    {
#line 466 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_11, (MR_Integer) 364, &top_level__mercury_compile_llds_back_end__SavedVars_12);
    }
#line 475 "mercury_compile_llds_back_end.m"
#line 475 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVars_12) {
#line 475 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 476 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 475 "mercury_compile_llds_back_end.m"
        break;
#line 475 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 468 "mercury_compile_llds_back_end.m"
        {
#line 469 "mercury_compile_llds_back_end.m"
          {
#line 469 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Minimizing variable saves using constants...\n");
          }
#line 471 "mercury_compile_llds_back_end.m"
          {
#line 471 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
          }
#line 472 "mercury_compile_llds_back_end.m"
          {
#line 472 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_llds_back_end_scalar_common_1[4]), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 473 "mercury_compile_llds_back_end.m"
          {
#line 473 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 474 "mercury_compile_llds_back_end.m"
          {
#line 474 "mercury_compile_llds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 474 "mercury_compile_llds_back_end.m"
            return;
          }
#line 468 "mercury_compile_llds_back_end.m"
        }
#line 475 "mercury_compile_llds_back_end.m"
        break;
#line 475 "mercury_compile_llds_back_end.m"
    }
#line 464 "mercury_compile_llds_back_end.m"
  }
#line 461 "mercury_compile_llds_back_end.m"
}

#line 323 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_16,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Integer top_level__mercury_compile_llds_back_end__ProcId_17,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__CProc_19,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48,
#line 323 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49)
#line 323 "mercury_compile_llds_back_end.m"
{
#line 330 "mercury_compile_llds_back_end.m"
  {
#line 330 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredProcId_22;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_23;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsConst_24;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SavedVarsCell_25;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__FollowCode_26;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks0_27;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList0_28;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ConstProp_29;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__DeepProf_30;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSWProf_31;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSCProf_32;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProfTrans_33;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList1_34;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimpList_35;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifyTasks_36;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraceTailRec_38;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__WarnTailCalls_39;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MarkTailCalls_40;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CProc0_41;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Optimize_42;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_65_65;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_66_66;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_67_67;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_72_72;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_78_78;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_82_82;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_99_99;
#line 330 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_103_103;

#line 331 "mercury_compile_llds_back_end.m"
    {
#line 331 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__PredProcId_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 331 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_15));
#line 331 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__PredProcId_22, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcId_17));
#line 331 "mercury_compile_llds_back_end.m"
    }
#line 332 "mercury_compile_llds_back_end.m"
    {
#line 332 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43, &top_level__mercury_compile_llds_back_end__Globals_23);
    }
#line 333 "mercury_compile_llds_back_end.m"
    {
#line 333 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 364, &top_level__mercury_compile_llds_back_end__SavedVarsConst_24);
    }
#line 338 "mercury_compile_llds_back_end.m"
#line 338 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVarsConst_24) {
#line 338 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 338 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 339 "mercury_compile_llds_back_end.m"
        {
#line 339 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43;
#line 339 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45;
#line 339 "mercury_compile_llds_back_end.m"
        }
#line 338 "mercury_compile_llds_back_end.m"
        break;
#line 338 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 337 "mercury_compile_llds_back_end.m"
        {
#line 337 "mercury_compile_llds_back_end.m"
          ll_backend__saved_vars__saved_vars_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_0_45, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_43, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53);
        }
#line 338 "mercury_compile_llds_back_end.m"
        break;
#line 338 "mercury_compile_llds_back_end.m"
    }
#line 341 "mercury_compile_llds_back_end.m"
    {
#line 341 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 365, &top_level__mercury_compile_llds_back_end__SavedVarsCell_25);
    }
#line 346 "mercury_compile_llds_back_end.m"
#line 346 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__SavedVarsCell_25) {
#line 346 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 346 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 347 "mercury_compile_llds_back_end.m"
        {
#line 347 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53;
#line 347 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52;
#line 347 "mercury_compile_llds_back_end.m"
        }
#line 346 "mercury_compile_llds_back_end.m"
        break;
#line 346 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 345 "mercury_compile_llds_back_end.m"
        {
#line 345 "mercury_compile_llds_back_end.m"
          ll_backend__stack_opt__stack_opt_cell_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_52_52, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56);
        }
#line 346 "mercury_compile_llds_back_end.m"
        break;
#line 346 "mercury_compile_llds_back_end.m"
    }
#line 349 "mercury_compile_llds_back_end.m"
    {
#line 349 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 381, &top_level__mercury_compile_llds_back_end__FollowCode_26);
    }
#line 353 "mercury_compile_llds_back_end.m"
#line 353 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__FollowCode_26) {
#line 353 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 353 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 354 "mercury_compile_llds_back_end.m"
        {
#line 354 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56;
#line 354 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55;
#line 354 "mercury_compile_llds_back_end.m"
        }
#line 353 "mercury_compile_llds_back_end.m"
        break;
#line 353 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 352 "mercury_compile_llds_back_end.m"
        {
#line 352 "mercury_compile_llds_back_end.m"
          ll_backend__follow_code__move_follow_code_in_proc_5_p_0(top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_55_55, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59);
        }
#line 353 "mercury_compile_llds_back_end.m"
        break;
#line 353 "mercury_compile_llds_back_end.m"
    }
#line 356 "mercury_compile_llds_back_end.m"
    {
#line 356 "mercury_compile_llds_back_end.m"
      check_hlds__simplify__simplify_tasks__find_simplify_tasks_3_p_0((MR_Integer) 0, top_level__mercury_compile_llds_back_end__Globals_23, &top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
#line 357 "mercury_compile_llds_back_end.m"
    {
#line 357 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimpList0_28 = check_hlds__simplify__simplify_tasks__simplify_tasks_to_list_1_f_0(top_level__mercury_compile_llds_back_end__SimplifyTasks0_27);
    }
#line 359 "mercury_compile_llds_back_end.m"
    {
#line 359 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 361, &top_level__mercury_compile_llds_back_end__ConstProp_29);
    }
#line 360 "mercury_compile_llds_back_end.m"
    {
#line 360 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 192, &top_level__mercury_compile_llds_back_end__DeepProf_30);
    }
#line 361 "mercury_compile_llds_back_end.m"
    {
#line 361 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 209, &top_level__mercury_compile_llds_back_end__TSWProf_31);
    }
#line 362 "mercury_compile_llds_back_end.m"
    {
#line 362 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 210, &top_level__mercury_compile_llds_back_end__TSCProf_32);
    }
#line 363 "mercury_compile_llds_back_end.m"
    {
#line 363 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_67_67, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSCProf_32));
#line 363 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 363 "mercury_compile_llds_back_end.m"
    }
#line 363 "mercury_compile_llds_back_end.m"
    {
#line 363 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_66_66, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSWProf_31));
#line 363 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_66_66, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_67_67));
#line 363 "mercury_compile_llds_back_end.m"
    }
#line 363 "mercury_compile_llds_back_end.m"
    {
#line 363 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DeepProf_30));
#line 363 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_65_65, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_66_66));
#line 363 "mercury_compile_llds_back_end.m"
    }
#line 363 "mercury_compile_llds_back_end.m"
    {
#line 363 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ProfTrans_33 = mercury__bool__or_list_1_f_0(top_level__mercury_compile_llds_back_end__V_65_65);
    }
#line 372 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ConstProp_29 == (MR_Integer) 1);
#line 372 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 373 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProfTrans_33 == (MR_Integer) 0);
#line 376 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 375 "mercury_compile_llds_back_end.m"
      {
#line 375 "mercury_compile_llds_back_end.m"
        {
#line 375 "mercury_compile_llds_back_end.m"
          mercury__list__cons_3_p_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, ((MR_Box) ((MR_Integer) 9)), top_level__mercury_compile_llds_back_end__SimpList0_28, &top_level__mercury_compile_llds_back_end__SimpList1_34);
        }
#line 375 "mercury_compile_llds_back_end.m"
      }
#line 376 "mercury_compile_llds_back_end.m"
    else
#line 377 "mercury_compile_llds_back_end.m"
      {
#line 377 "mercury_compile_llds_back_end.m"
        {
#line 377 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__SimpList1_34 = mercury__list__delete_all_2_f_0((MR_Word) &check_hlds__simplify__simplify_tasks__check_hlds__simplify__simplify_tasks__type_ctor_info_simplify_task_0, top_level__mercury_compile_llds_back_end__SimpList0_28, ((MR_Box) ((MR_Integer) 9)));
        }
#line 377 "mercury_compile_llds_back_end.m"
      }
#line 381 "mercury_compile_llds_back_end.m"
    {
#line 381 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 381 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_72_72, 0) = ((MR_Box) ((MR_Integer) 7));
#line 381 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_72_72, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SimpList1_34));
#line 381 "mercury_compile_llds_back_end.m"
    }
#line 380 "mercury_compile_llds_back_end.m"
    {
#line 380 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimpList_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 380 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 0) = ((MR_Box) ((MR_Integer) 4));
#line 380 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__SimpList_35, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_72_72));
#line 380 "mercury_compile_llds_back_end.m"
    }
#line 382 "mercury_compile_llds_back_end.m"
    {
#line 382 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__SimplifyTasks_36 = check_hlds__simplify__simplify_tasks__list_to_simplify_tasks_1_f_0(top_level__mercury_compile_llds_back_end__SimpList_35);
    }
#line 384 "mercury_compile_llds_back_end.m"
    {
#line 384 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Simplifying ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59);
    }
#line 387 "mercury_compile_llds_back_end.m"
    {
#line 387 "mercury_compile_llds_back_end.m"
      check_hlds__simplify__simplify_proc__simplify_proc_7_p_0(top_level__mercury_compile_llds_back_end__SimplifyTasks_36, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_58_58, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_78_78);
    }
#line 389 "mercury_compile_llds_back_end.m"
    {
#line 389 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Computing liveness in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 392 "mercury_compile_llds_back_end.m"
    {
#line 392 "mercury_compile_llds_back_end.m"
      ll_backend__liveness__detect_liveness_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_78_78, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_82_82);
    }
#line 393 "mercury_compile_llds_back_end.m"
    {
#line 393 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 129, &top_level__mercury_compile_llds_back_end__ExecTraceTailRec_38);
    }
#line 394 "mercury_compile_llds_back_end.m"
    {
#line 394 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 25, &top_level__mercury_compile_llds_back_end__WarnTailCalls_39);
    }
#line 396 "mercury_compile_llds_back_end.m"
    {
#line 396 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MarkTailCalls_40 = mercury__bool__or_2_f_0(top_level__mercury_compile_llds_back_end__ExecTraceTailRec_38, top_level__mercury_compile_llds_back_end__WarnTailCalls_39);
    }
#line 406 "mercury_compile_llds_back_end.m"
#line 406 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__MarkTailCalls_40) {
#line 406 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 406 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 407 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_82_82;
#line 406 "mercury_compile_llds_back_end.m"
        break;
#line 406 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 398 "mercury_compile_llds_back_end.m"
        {
#line 400 "mercury_compile_llds_back_end.m"
          {
#line 400 "mercury_compile_llds_back_end.m"
            hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Marking directly tail recursive calls in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
          }
#line 404 "mercury_compile_llds_back_end.m"
          {
#line 404 "mercury_compile_llds_back_end.m"
            hlds__mark_tail_calls__mark_tail_calls_6_p_0((MR_Integer) 10, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_82_82, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89);
          }
#line 398 "mercury_compile_llds_back_end.m"
        }
#line 406 "mercury_compile_llds_back_end.m"
        break;
#line 406 "mercury_compile_llds_back_end.m"
    }
#line 413 "mercury_compile_llds_back_end.m"
#line 413 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__WarnTailCalls_39) {
#line 413 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 413 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 414 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48;
#line 413 "mercury_compile_llds_back_end.m"
        break;
#line 413 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 411 "mercury_compile_llds_back_end.m"
        {
#line 411 "mercury_compile_llds_back_end.m"
          hlds__mark_tail_calls__warn_non_tail_calls_in_proc_6_p_0(top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);
        }
#line 413 "mercury_compile_llds_back_end.m"
        break;
#line 413 "mercury_compile_llds_back_end.m"
    }
#line 417 "mercury_compile_llds_back_end.m"
    {
#line 417 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating stack slots in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 420 "mercury_compile_llds_back_end.m"
    {
#line 420 "mercury_compile_llds_back_end.m"
      ll_backend__stack_alloc__allocate_stack_slots_in_proc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_89_89, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94);
    }
#line 422 "mercury_compile_llds_back_end.m"
    {
#line 422 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Allocating storage locations for live vars in ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 426 "mercury_compile_llds_back_end.m"
    {
#line 426 "mercury_compile_llds_back_end.m"
      ll_backend__store_alloc__allocate_store_maps_5_p_0((MR_Integer) 0, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__PredProcId_22, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_94_94, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_99_99);
    }
#line 428 "mercury_compile_llds_back_end.m"
    {
#line 428 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating low-level (LLDS) code for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 431 "mercury_compile_llds_back_end.m"
    {
#line 431 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__generate_proc_code_9_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_16, top_level__mercury_compile_llds_back_end__ProcId_17, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_ProcInfo_99_99, &top_level__mercury_compile_llds_back_end__CProc0_41, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_103_103);
    }
#line 433 "mercury_compile_llds_back_end.m"
    {
#line 433 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_23, (MR_Integer) 456, &top_level__mercury_compile_llds_back_end__Optimize_42);
    }
#line 437 "mercury_compile_llds_back_end.m"
#line 437 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__Optimize_42) {
#line 437 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 437 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 439 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__CProc_19 = top_level__mercury_compile_llds_back_end__CProc0_41;
#line 437 "mercury_compile_llds_back_end.m"
        break;
#line 437 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 436 "mercury_compile_llds_back_end.m"
        {
#line 436 "mercury_compile_llds_back_end.m"
          ll_backend__optimize__optimize_proc_4_p_0(top_level__mercury_compile_llds_back_end__Globals_23, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_103_103, top_level__mercury_compile_llds_back_end__CProc0_41, top_level__mercury_compile_llds_back_end__CProc_19);
        }
#line 437 "mercury_compile_llds_back_end.m"
        break;
#line 437 "mercury_compile_llds_back_end.m"
    }
#line 442 "mercury_compile_llds_back_end.m"
    {
#line 442 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__write_proc_progress_message_6_p_0((MR_String) "% Generating call continuation information for ", top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_17, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44);
    }
#line 446 "mercury_compile_llds_back_end.m"
    {
#line 446 "mercury_compile_llds_back_end.m"
      ll_backend__continuation_info__maybe_collect_call_continuations_in_cproc_4_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44, *top_level__mercury_compile_llds_back_end__CProc_19, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_103_103, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47);
#line 446 "mercury_compile_llds_back_end.m"
      return;
    }
#line 330 "mercury_compile_llds_back_end.m"
  }
#line 323 "mercury_compile_llds_back_end.m"
}

#line 305 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_4,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredInfo_5,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__6_6,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__HeadVar__7_7,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
#line 305 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11)
#line 305 "mercury_compile_llds_back_end.m"
{
#line 311 "mercury_compile_llds_back_end.m"
  {
#line 311 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 311 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__HeadVar__6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 311 "mercury_compile_llds_back_end.m"
      {
#line 311 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 311 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10;
#line 311 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 311 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 311 "mercury_compile_llds_back_end.m"
      }
#line 311 "mercury_compile_llds_back_end.m"
    else
#line 314 "mercury_compile_llds_back_end.m"
      {
#line 314 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__ProcId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 0)));
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__6_6, (MR_Integer) 1)));
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_30;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__CProc_31;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_32;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcTable_35;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_36;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_43_43;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45;
#line 314 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_46;
#line 317 "mercury_compile_llds_back_end.m"
        MR_Box top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36;

#line 315 "mercury_compile_llds_back_end.m"
        {
#line 315 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ProcLabel_30 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__ProcId_28);
        }
#line 316 "mercury_compile_llds_back_end.m"
        {
#line 316 "mercury_compile_llds_back_end.m"
          hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_5, &top_level__mercury_compile_llds_back_end__ProcTable_35);
        }
#line 317 "mercury_compile_llds_back_end.m"
        {
#line 317 "mercury_compile_llds_back_end.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_35, top_level__mercury_compile_llds_back_end__ProcId_28, &top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
        }
#line 317 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__ProcInfo_36 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_ProcInfo_36);
#line 318 "mercury_compile_llds_back_end.m"
        {
#line 318 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcId_28, top_level__mercury_compile_llds_back_end__ProcInfo_36, &top_level__mercury_compile_llds_back_end__CProc_31, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_46);
        }
#line 313 "mercury_compile_llds_back_end.m"
        {
#line 313 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_30));
#line 313 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_43_43, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CProc_31));
#line 313 "mercury_compile_llds_back_end.m"
        }
#line 320 "mercury_compile_llds_back_end.m"
        {
#line 320 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_4, top_level__mercury_compile_llds_back_end__PredInfo_5, top_level__mercury_compile_llds_back_end__ProcIds_29, &top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11);
        }
#line 313 "mercury_compile_llds_back_end.m"
        {
#line 313 "mercury_compile_llds_back_end.m"
          MR_Word base;
#line 313 "mercury_compile_llds_back_end.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__HeadVar__7_7 = base;
#line 313 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_43_43));
#line 313 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_32));
#line 313 "mercury_compile_llds_back_end.m"
        }
#line 314 "mercury_compile_llds_back_end.m"
      }
#line 311 "mercury_compile_llds_back_end.m"
  }
#line 305 "mercury_compile_llds_back_end.m"
}

#line 236 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_12_p_0(
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_14,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__PredId_15,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48,
#line 236 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49)
#line 236 "mercury_compile_llds_back_end.m"
{
#line 245 "mercury_compile_llds_back_end.m"
  {
#line 245 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 245 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredTable_20;
#line 245 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredInfo_21;
#line 245 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcIds_22;
#line 247 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__conv0_PredInfo_21;

#line 246 "mercury_compile_llds_back_end.m"
    {
#line 246 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_preds_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__PredTable_20);
    }
#line 247 "mercury_compile_llds_back_end.m"
    {
#line 247 "mercury_compile_llds_back_end.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0, top_level__mercury_compile_llds_back_end__PredTable_20, ((MR_Box) (top_level__mercury_compile_llds_back_end__PredId_15)), &top_level__mercury_compile_llds_back_end__conv0_PredInfo_21);
    }
#line 247 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__PredInfo_21 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv0_PredInfo_21);
#line 248 "mercury_compile_llds_back_end.m"
    {
#line 248 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__ProcIds_22 = hlds__hlds_pred__pred_info_non_imported_procids_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
    }
#line 251 "mercury_compile_llds_back_end.m"
    if ((top_level__mercury_compile_llds_back_end__ProcIds_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "mercury_compile_llds_back_end.m"
      {
#line 250 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40;
#line 250 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42;
#line 250 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44;
#line 250 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46;
#line 250 "mercury_compile_llds_back_end.m"
        *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48;
#line 250 "mercury_compile_llds_back_end.m"
      }
#line 251 "mercury_compile_llds_back_end.m"
    else
#line 252 "mercury_compile_llds_back_end.m"
      {
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78;
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Globals0_25;
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Verbose_26;
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__IdCProcs_33;
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__CProcs_36;
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__Stats_39;
#line 252 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_68_68;
#line 267 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__PredModule_28;
#line 267 "mercury_compile_llds_back_end.m"
        MR_String top_level__mercury_compile_llds_back_end__PredName_29;
#line 267 "mercury_compile_llds_back_end.m"
        MR_Integer top_level__mercury_compile_llds_back_end__PredArity_30;

#line 253 "mercury_compile_llds_back_end.m"
        {
#line 253 "mercury_compile_llds_back_end.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__Globals0_25);
        }
#line 254 "mercury_compile_llds_back_end.m"
        {
#line 254 "mercury_compile_llds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_26);
        }
#line 263 "mercury_compile_llds_back_end.m"
#line 263 "mercury_compile_llds_back_end.m"
        switch (top_level__mercury_compile_llds_back_end__Verbose_26) {
#line 263 "mercury_compile_llds_back_end.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 263 "mercury_compile_llds_back_end.m"
          case (MR_Integer) 0:
#line 264 "mercury_compile_llds_back_end.m"
            {
#line 264 "mercury_compile_llds_back_end.m"
            }
#line 263 "mercury_compile_llds_back_end.m"
            break;
#line 263 "mercury_compile_llds_back_end.m"
          case (MR_Integer) 1:
#line 257 "mercury_compile_llds_back_end.m"
            {
#line 258 "mercury_compile_llds_back_end.m"
              {
#line 258 "mercury_compile_llds_back_end.m"
                mercury__io__write_string_3_p_0((MR_String) "% Generating code for ");
              }
#line 259 "mercury_compile_llds_back_end.m"
              {
#line 259 "mercury_compile_llds_back_end.m"
                hlds__hlds_out__hlds_out_util__write_pred_id_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, top_level__mercury_compile_llds_back_end__PredId_15);
              }
#line 260 "mercury_compile_llds_back_end.m"
              {
#line 260 "mercury_compile_llds_back_end.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 261 "mercury_compile_llds_back_end.m"
              {
#line 261 "mercury_compile_llds_back_end.m"
                libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_26);
              }
#line 257 "mercury_compile_llds_back_end.m"
            }
#line 263 "mercury_compile_llds_back_end.m"
            break;
#line 263 "mercury_compile_llds_back_end.m"
        }
#line 267 "mercury_compile_llds_back_end.m"
        {
#line 267 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__PredModule_28 = hlds__hlds_pred__pred_info_module_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
        }
#line 268 "mercury_compile_llds_back_end.m"
        {
#line 268 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__PredName_29 = hlds__hlds_pred__pred_info_name_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
        }
#line 269 "mercury_compile_llds_back_end.m"
        {
#line 269 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__PredArity_30 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(top_level__mercury_compile_llds_back_end__PredInfo_21);
        }
#line 270 "mercury_compile_llds_back_end.m"
        {
#line 270 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(top_level__mercury_compile_llds_back_end__PredModule_28, top_level__mercury_compile_llds_back_end__PredName_29, top_level__mercury_compile_llds_back_end__PredArity_30);
        }
#line 284 "mercury_compile_llds_back_end.m"
        if (top_level__mercury_compile_llds_back_end__succeeded)
#line 276 "mercury_compile_llds_back_end.m"
          {
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__TraceLevel_31;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__Globals1_32;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__Globals2_34;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__Globals_35;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Integer top_level__mercury_compile_llds_back_end__ProcId_95;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcIds_96;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_97;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__CProc_98;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_99;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcTable_102;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_103;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__V_110_110;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_111;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_112;
#line 276 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_113;
#line 317 "mercury_compile_llds_back_end.m"
            MR_Box top_level__mercury_compile_llds_back_end__conv1_ProcInfo_103;

#line 276 "mercury_compile_llds_back_end.m"
            {
#line 276 "mercury_compile_llds_back_end.m"
              libs__globals__get_trace_level_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, &top_level__mercury_compile_llds_back_end__TraceLevel_31);
            }
#line 277 "mercury_compile_llds_back_end.m"
            {
#line 277 "mercury_compile_llds_back_end.m"
              libs__globals__set_trace_level_none_2_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, &top_level__mercury_compile_llds_back_end__Globals1_32);
            }
#line 278 "mercury_compile_llds_back_end.m"
            {
#line 278 "mercury_compile_llds_back_end.m"
              hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals1_32, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58);
            }
#line 313 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__ProcId_95 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 0)));
#line 313 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__ProcIds_96 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 1)));
#line 315 "mercury_compile_llds_back_end.m"
            {
#line 315 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__ProcLabel_97 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_95);
            }
#line 316 "mercury_compile_llds_back_end.m"
            {
#line 316 "mercury_compile_llds_back_end.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_21, &top_level__mercury_compile_llds_back_end__ProcTable_102);
            }
#line 317 "mercury_compile_llds_back_end.m"
            {
#line 317 "mercury_compile_llds_back_end.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_102, top_level__mercury_compile_llds_back_end__ProcId_95, &top_level__mercury_compile_llds_back_end__conv1_ProcInfo_103);
            }
#line 317 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__ProcInfo_103 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv1_ProcInfo_103);
#line 318 "mercury_compile_llds_back_end.m"
            {
#line 318 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_58_58, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_111, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcId_95, top_level__mercury_compile_llds_back_end__ProcInfo_103, &top_level__mercury_compile_llds_back_end__CProc_98, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_112, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_113);
            }
#line 313 "mercury_compile_llds_back_end.m"
            {
#line 313 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_110_110, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_97));
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_110_110, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CProc_98));
#line 313 "mercury_compile_llds_back_end.m"
            }
#line 320 "mercury_compile_llds_back_end.m"
            {
#line 320 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_111, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcIds_96, &top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_99, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_112, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_113, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);
            }
#line 313 "mercury_compile_llds_back_end.m"
            {
#line 313 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__IdCProcs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_110_110));
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_99));
#line 313 "mercury_compile_llds_back_end.m"
            }
#line 281 "mercury_compile_llds_back_end.m"
            {
#line 281 "mercury_compile_llds_back_end.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile_llds_back_end__Globals2_34);
            }
#line 282 "mercury_compile_llds_back_end.m"
            {
#line 282 "mercury_compile_llds_back_end.m"
              libs__globals__set_trace_level_3_p_0(top_level__mercury_compile_llds_back_end__TraceLevel_31, top_level__mercury_compile_llds_back_end__Globals2_34, &top_level__mercury_compile_llds_back_end__Globals_35);
            }
#line 283 "mercury_compile_llds_back_end.m"
            {
#line 283 "mercury_compile_llds_back_end.m"
              hlds__hlds_module__module_info_set_globals_3_p_0(top_level__mercury_compile_llds_back_end__Globals_35, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_59_59, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41);
            }
#line 276 "mercury_compile_llds_back_end.m"
          }
#line 284 "mercury_compile_llds_back_end.m"
        else
#line 314 "mercury_compile_llds_back_end.m"
          {
#line 314 "mercury_compile_llds_back_end.m"
            MR_Integer top_level__mercury_compile_llds_back_end__ProcId_135 = ((MR_Integer) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 0)));
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcIds_136 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ProcIds_22, (MR_Integer) 1)));
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabel_137;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__CProc_138;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_139;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcTable_142;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__ProcInfo_143;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__V_150_150;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_151;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_152;
#line 314 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_153;
#line 317 "mercury_compile_llds_back_end.m"
            MR_Box top_level__mercury_compile_llds_back_end__conv2_ProcInfo_143;

#line 315 "mercury_compile_llds_back_end.m"
            {
#line 315 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__ProcLabel_137 = backend_libs__proc_label__make_proc_label_3_f_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__ProcId_135);
            }
#line 316 "mercury_compile_llds_back_end.m"
            {
#line 316 "mercury_compile_llds_back_end.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(top_level__mercury_compile_llds_back_end__PredInfo_21, &top_level__mercury_compile_llds_back_end__ProcTable_142);
            }
#line 317 "mercury_compile_llds_back_end.m"
            {
#line 317 "mercury_compile_llds_back_end.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, top_level__mercury_compile_llds_back_end__ProcTable_142, top_level__mercury_compile_llds_back_end__ProcId_135, &top_level__mercury_compile_llds_back_end__conv2_ProcInfo_143);
            }
#line 317 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__ProcInfo_143 = ((MR_Word) top_level__mercury_compile_llds_back_end__conv2_ProcInfo_143);
#line 318 "mercury_compile_llds_back_end.m"
            {
#line 318 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_proc_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_40, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_151, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcId_135, top_level__mercury_compile_llds_back_end__ProcInfo_143, &top_level__mercury_compile_llds_back_end__CProc_138, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_46, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_152, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_48, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_153);
            }
#line 313 "mercury_compile_llds_back_end.m"
            {
#line 313 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__V_150_150 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_150_150, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabel_137));
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_150_150, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CProc_138));
#line 313 "mercury_compile_llds_back_end.m"
            }
#line 320 "mercury_compile_llds_back_end.m"
            {
#line 320 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__llds_backend_pass_for_pred_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_44_151, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41, top_level__mercury_compile_llds_back_end__ConstStructMap_14, top_level__mercury_compile_llds_back_end__PredId_15, top_level__mercury_compile_llds_back_end__PredInfo_21, top_level__mercury_compile_llds_back_end__ProcIds_136, &top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_139, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_45_152, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_46_153, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_49);
            }
#line 313 "mercury_compile_llds_back_end.m"
            {
#line 313 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__IdCProcs_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_150_150));
#line 313 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__IdCProcs_33, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelsCProcs_139));
#line 313 "mercury_compile_llds_back_end.m"
            }
#line 314 "mercury_compile_llds_back_end.m"
          }
#line 291 "mercury_compile_llds_back_end.m"
        if ((top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "mercury_compile_llds_back_end.m"
          {
#line 290 "mercury_compile_llds_back_end.m"
            {
#line 290 "mercury_compile_llds_back_end.m"
              mercury__assoc_list__values_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__IdCProcs_33, &top_level__mercury_compile_llds_back_end__CProcs_36);
            }
#line 289 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42;
#line 289 "mercury_compile_llds_back_end.m"
          }
#line 291 "mercury_compile_llds_back_end.m"
        else
#line 292 "mercury_compile_llds_back_end.m"
          {
#line 292 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__DupProcMap0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_42, (MR_Integer) 0)));
#line 292 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__DupProcMap_38;

#line 293 "mercury_compile_llds_back_end.m"
            {
#line 293 "mercury_compile_llds_back_end.m"
              ll_backend__dupproc__eliminate_duplicate_procs_4_p_0(top_level__mercury_compile_llds_back_end__IdCProcs_33, &top_level__mercury_compile_llds_back_end__CProcs_36, top_level__mercury_compile_llds_back_end__DupProcMap0_37, &top_level__mercury_compile_llds_back_end__DupProcMap_38);
            }
#line 295 "mercury_compile_llds_back_end.m"
            {
#line 295 "mercury_compile_llds_back_end.m"
              MR_Word base;
#line 295 "mercury_compile_llds_back_end.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 295 "mercury_compile_llds_back_end.m"
              *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_43 = base;
#line 295 "mercury_compile_llds_back_end.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__DupProcMap_38));
#line 295 "mercury_compile_llds_back_end.m"
            }
#line 292 "mercury_compile_llds_back_end.m"
          }
#line 4400 "top_level.mercury_compile_llds_back_end.c"
        top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
#line 297 "mercury_compile_llds_back_end.m"
        {
#line 297 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_68_68 = mercury__cord__from_list_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78, top_level__mercury_compile_llds_back_end__CProcs_36);
        }
#line 297 "mercury_compile_llds_back_end.m"
        {
#line 297 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45 = mercury__cord__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_78_78, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_44, top_level__mercury_compile_llds_back_end__V_68_68);
        }
#line 298 "mercury_compile_llds_back_end.m"
        {
#line 298 "mercury_compile_llds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals0_25, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_39);
        }
#line 300 "mercury_compile_llds_back_end.m"
        {
#line 300 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_26, (MR_String) "% done.\n");
        }
#line 301 "mercury_compile_llds_back_end.m"
        {
#line 301 "mercury_compile_llds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_39);
#line 301 "mercury_compile_llds_back_end.m"
          return;
        }
#line 252 "mercury_compile_llds_back_end.m"
      }
#line 245 "mercury_compile_llds_back_end.m"
  }
#line 236 "mercury_compile_llds_back_end.m"
}

#line 219 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_3,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4_4,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_7,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10,
#line 219 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11)
#line 219 "mercury_compile_llds_back_end.m"
{
#line 226 "mercury_compile_llds_back_end.m"
  while (MR_TRUE)
#line 226 "mercury_compile_llds_back_end.m"
    {
#line 226 "mercury_compile_llds_back_end.m"
      /* tailcall optimized into a loop */
#line 226 "mercury_compile_llds_back_end.m"
      {
#line 226 "mercury_compile_llds_back_end.m"
        MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 226 "mercury_compile_llds_back_end.m"
        if ((top_level__mercury_compile_llds_back_end__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "mercury_compile_llds_back_end.m"
          {
#line 227 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_11 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10;
#line 227 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_9 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8;
#line 227 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_7 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6;
#line 226 "mercury_compile_llds_back_end.m"
            *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_2 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1;
#line 226 "mercury_compile_llds_back_end.m"
          }
#line 226 "mercury_compile_llds_back_end.m"
        else
#line 230 "mercury_compile_llds_back_end.m"
          {
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredId_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 0)));
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__PredIds_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__HeadVar__4_4, (MR_Integer) 1)));
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_43_43;
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_44_44;
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45_45;
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_46_46;
#line 230 "mercury_compile_llds_back_end.m"
            MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47_47;

#line 231 "mercury_compile_llds_back_end.m"
            {
#line 231 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_do_one_pred_12_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_43_43, top_level__mercury_compile_llds_back_end__ConstStructMap_3, top_level__mercury_compile_llds_back_end__PredId_28, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45_45, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_46_46, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47_47);
            }
#line 233 "mercury_compile_llds_back_end.m"
            /* direct tailcall eliminated */
#line 233 "mercury_compile_llds_back_end.m"
            {
#line 233 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_43_43;
#line 233 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4 = top_level__mercury_compile_llds_back_end__PredIds_29;
#line 233 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_44_44;
#line 233 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0__tmp_copy_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_45_45;
#line 233 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_46_46;
#line 233 "mercury_compile_llds_back_end.m"
              MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0__tmp_copy_10 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_47_47;

#line 233 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_10 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 233 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_8 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0__tmp_copy_8;
#line 233 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0_6 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_CProcsCord_0__tmp_copy_6;
#line 233 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0_5 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_MaybeDupProcMap_0__tmp_copy_5;
#line 233 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__HeadVar__4_4 = top_level__mercury_compile_llds_back_end__HeadVar__4__tmp_copy_4;
#line 233 "mercury_compile_llds_back_end.m"
              top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_1 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0__tmp_copy_1;
#line 233 "mercury_compile_llds_back_end.m"
            }
#line 233 "mercury_compile_llds_back_end.m"
            continue;
#line 230 "mercury_compile_llds_back_end.m"
          }
#line 226 "mercury_compile_llds_back_end.m"
      }
#line 226 "mercury_compile_llds_back_end.m"
      break;
#line 226 "mercury_compile_llds_back_end.m"
    }
#line 219 "mercury_compile_llds_back_end.m"
}

#line 193 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_22,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_9,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_23,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_24,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_25,
#line 193 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_26)
#line 193 "mercury_compile_llds_back_end.m"
{
#line 197 "mercury_compile_llds_back_end.m"
  {
#line 197 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PredIds_12;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_13;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcDups_14;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OrderedPredIds_15;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ConstStructMap_19;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CProcsCord_20;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30_30;
#line 197 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_32_32;

#line 198 "mercury_compile_llds_back_end.m"
    {
#line 198 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_valid_pred_ids_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_llds_back_end__PredIds_12);
    }
#line 199 "mercury_compile_llds_back_end.m"
    {
#line 199 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_llds_back_end__Globals_13);
    }
#line 200 "mercury_compile_llds_back_end.m"
    {
#line 200 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_13, (MR_Integer) 468, &top_level__mercury_compile_llds_back_end__ProcDups_14);
    }
#line 205 "mercury_compile_llds_back_end.m"
#line 205 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__ProcDups_14) {
#line 205 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 205 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 202 "mercury_compile_llds_back_end.m"
        {
#line 203 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__OrderedPredIds_15 = top_level__mercury_compile_llds_back_end__PredIds_12;
#line 204 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "mercury_compile_llds_back_end.m"
        }
#line 205 "mercury_compile_llds_back_end.m"
        break;
#line 205 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 206 "mercury_compile_llds_back_end.m"
        {
#line 206 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35;
#line 206 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36;
#line 206 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__DepInfo_17;
#line 206 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__PredSCCs_18;
#line 206 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_29_29;

#line 207 "mercury_compile_llds_back_end.m"
          {
#line 207 "mercury_compile_llds_back_end.m"
            transform_hlds__dependency_graph__build_pred_dependency_graph_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile_llds_back_end__PredIds_12, (MR_Integer) 1, &top_level__mercury_compile_llds_back_end__DepInfo_17);
          }
#line 4652 "top_level.mercury_compile_llds_back_end.c"
          top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 209 "mercury_compile_llds_back_end.m"
          {
#line 209 "mercury_compile_llds_back_end.m"
            hlds__hlds_module__hlds_dependency_info_get_dependency_ordering_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35, top_level__mercury_compile_llds_back_end__DepInfo_17, &top_level__mercury_compile_llds_back_end__PredSCCs_18);
          }
#line 210 "mercury_compile_llds_back_end.m"
          {
#line 210 "mercury_compile_llds_back_end.m"
            mercury__list__condense_2_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_35_35, top_level__mercury_compile_llds_back_end__PredSCCs_18, &top_level__mercury_compile_llds_back_end__OrderedPredIds_15);
          }
#line 4664 "top_level.mercury_compile_llds_back_end.c"
          top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0;
#line 211 "mercury_compile_llds_back_end.m"
          {
#line 211 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__V_29_29 = mercury__map__init_0_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36, top_level__mercury_compile_llds_back_end__TypeCtorInfo_36_36);
          }
#line 211 "mercury_compile_llds_back_end.m"
          {
#line 211 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 211 "mercury_compile_llds_back_end.m"
            MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_29_29));
#line 211 "mercury_compile_llds_back_end.m"
          }
#line 206 "mercury_compile_llds_back_end.m"
        }
#line 205 "mercury_compile_llds_back_end.m"
        break;
#line 205 "mercury_compile_llds_back_end.m"
    }
#line 213 "mercury_compile_llds_back_end.m"
    {
#line 213 "mercury_compile_llds_back_end.m"
      ll_backend__unify_gen__generate_const_structs_4_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_23, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30_30);
    }
#line 4690 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0;
#line 215 "mercury_compile_llds_back_end.m"
    {
#line 215 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_32_32 = mercury__cord__init_0_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37);
    }
#line 214 "mercury_compile_llds_back_end.m"
    {
#line 214 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_loop_over_preds_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_21, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_22, top_level__mercury_compile_llds_back_end__ConstStructMap_19, top_level__mercury_compile_llds_back_end__OrderedPredIds_15, top_level__mercury_compile_llds_back_end__MaybeDupProcMap_16, top_level__mercury_compile_llds_back_end__V_32_32, &top_level__mercury_compile_llds_back_end__CProcsCord_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30_30, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_24, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_25, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_26);
    }
#line 217 "mercury_compile_llds_back_end.m"
    {
#line 217 "mercury_compile_llds_back_end.m"
      *top_level__mercury_compile_llds_back_end__LLDS_9 = mercury__cord__list_1_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_37_37, top_level__mercury_compile_llds_back_end__CProcsCord_20);
    }
#line 197 "mercury_compile_llds_back_end.m"
  }
#line 193 "mercury_compile_llds_back_end.m"
}

#line 166 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1(
#line 166 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg)
#line 166 "mercury_compile_llds_back_end.m"
{
#line 166 "mercury_compile_llds_back_end.m"
  {
#line 166 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 166 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

#line 166 "mercury_compile_llds_back_end.m"
    {
#line 166 "mercury_compile_llds_back_end.m"
      return top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__IntroducedFrom__pred__llds_backend_pass_by_phases__166__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))));
    }
#line 166 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 166 "mercury_compile_llds_back_end.m"
  }
#line 166 "mercury_compile_llds_back_end.m"
}

#line 144 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_25,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_26,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_27,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_28,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_29,
#line 144 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_30)
#line 144 "mercury_compile_llds_back_end.m"
{
#line 150 "mercury_compile_llds_back_end.m"
  {
#line 150 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_18;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_19;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_20;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SimplifySpecs_21;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_39_39;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_45_45;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_51_51;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_58_58;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_62_62;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_66_66;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_72_72;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_78_78;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_82_82;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_86_86;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_94_94;
#line 150 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_95_95;

#line 151 "mercury_compile_llds_back_end.m"
    {
#line 151 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__Globals_18);
    }
#line 152 "mercury_compile_llds_back_end.m"
    {
#line 152 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_19);
    }
#line 153 "mercury_compile_llds_back_end.m"
    {
#line 153 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_18, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_20);
    }
#line 155 "mercury_compile_llds_back_end.m"
    {
#line 155 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_saved_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35);
    }
#line 156 "mercury_compile_llds_back_end.m"
    {
#line 156 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35, (MR_Integer) 310, (MR_String) "saved_vars_const", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_29, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_39_39);
    }
#line 158 "mercury_compile_llds_back_end.m"
    {
#line 158 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_stack_opt_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41);
    }
#line 159 "mercury_compile_llds_back_end.m"
    {
#line 159 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41, (MR_Integer) 315, (MR_String) "saved_vars_cell", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_39_39, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_45_45);
    }
#line 161 "mercury_compile_llds_back_end.m"
    {
#line 161 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_followcode_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47);
    }
#line 162 "mercury_compile_llds_back_end.m"
    {
#line 162 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 320, (MR_String) "followcode", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_45_45, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_51_51);
    }
#line 164 "mercury_compile_llds_back_end.m"
    {
#line 164 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 5, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__SimplifySpecs_21);
    }
#line 166 "mercury_compile_llds_back_end.m"
    {
#line 166 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_62_62 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_llds_back_end__Globals_18, top_level__mercury_compile_llds_back_end__SimplifySpecs_21);
    }
#line 166 "mercury_compile_llds_back_end.m"
    {
#line 166 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 166 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_6[0]));
#line 166 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0_1));
#line 166 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 166 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_62_62));
#line 166 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_58_58, 4) = ((MR_Box) ((MR_Integer) 0));
#line 166 "mercury_compile_llds_back_end.m"
    }
#line 166 "mercury_compile_llds_back_end.m"
    {
#line 166 "mercury_compile_llds_back_end.m"
      mercury__require__expect_4_p_0(top_level__mercury_compile_llds_back_end__V_58_58, (MR_String) "top_level.mercury_compile_llds_back_end", (MR_String) "predicate \140top_level.mercury_compile_llds_back_end.llds_backend_pass_by_phases\'/11", (MR_String) "simplify has errors");
    }
#line 168 "mercury_compile_llds_back_end.m"
    {
#line 168 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55, (MR_Integer) 325, (MR_String) "ll_backend_simplify", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_66_66);
    }
#line 170 "mercury_compile_llds_back_end.m"
    {
#line 170 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compute_liveness_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_55_55, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68);
    }
#line 171 "mercury_compile_llds_back_end.m"
    {
#line 171 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68, (MR_Integer) 330, (MR_String) "liveness", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_72_72);
    }
#line 173 "mercury_compile_llds_back_end.m"
    {
#line 173 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_mark_tail_rec_calls_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_68_68, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74);
    }
#line 174 "mercury_compile_llds_back_end.m"
    {
#line 174 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74, (MR_Integer) 332, (MR_String) "mark_debug_tailrec_calls", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_72_72, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_78_78);
    }
#line 176 "mercury_compile_llds_back_end.m"
    {
#line 176 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_warn_non_tail_recursion_7_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_0_27, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_Specs_28);
    }
#line 178 "mercury_compile_llds_back_end.m"
    {
#line 178 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compute_stack_vars_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_74_74, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_82_82);
    }
#line 179 "mercury_compile_llds_back_end.m"
    {
#line 179 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_82_82, (MR_Integer) 335, (MR_String) "stackvars", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_78_78, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_86_86);
    }
#line 181 "mercury_compile_llds_back_end.m"
    {
#line 181 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__allocate_store_map_6_p_0(top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_82_82, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23);
    }
#line 182 "mercury_compile_llds_back_end.m"
    {
#line 182 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, (MR_Integer) 340, (MR_String) "store_map", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_86_86, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_30);
    }
#line 184 "mercury_compile_llds_back_end.m"
    {
#line 184 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__generate_llds_code_for_module_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_0_25, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_94_94, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_95_95);
    }
#line 187 "mercury_compile_llds_back_end.m"
    {
#line 187 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_optimize_llds_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_94_94, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_95_95, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24);
    }
#line 189 "mercury_compile_llds_back_end.m"
    {
#line 189 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__maybe_generate_stack_layouts_8_p_0(*top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_23, *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_LLDS_24, top_level__mercury_compile_llds_back_end__Verbose_19, top_level__mercury_compile_llds_back_end__Stats_20, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_94_94, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_26);
#line 189 "mercury_compile_llds_back_end.m"
      return;
    }
#line 150 "mercury_compile_llds_back_end.m"
  }
#line 144 "mercury_compile_llds_back_end.m"
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
#line 454 "mercury_compile_llds_back_end.m"
  {
#line 454 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;

#line 455 "mercury_compile_llds_back_end.m"
    {
#line 455 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) "% Mapping args to regs...");
    }
#line 456 "mercury_compile_llds_back_end.m"
    {
#line 456 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_7);
    }
#line 457 "mercury_compile_llds_back_end.m"
    {
#line 457 "mercury_compile_llds_back_end.m"
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_12);
    }
#line 458 "mercury_compile_llds_back_end.m"
    {
#line 458 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_7, (MR_String) " done.\n");
    }
#line 459 "mercury_compile_llds_back_end.m"
    {
#line 459 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_8);
#line 459 "mercury_compile_llds_back_end.m"
      return;
    }
#line 454 "mercury_compile_llds_back_end.m"
  }
#line 37 "mercury_compile_llds_back_end.m"
}

#line 751 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3(
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_4,
#line 751 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_5)
#line 751 "mercury_compile_llds_back_end.m"
{
#line 751 "mercury_compile_llds_back_end.m"
  {
#line 751 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 751 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__conv3_O_File_11;
#line 751 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv2_Succeeded_12;

#line 751 "mercury_compile_llds_back_end.m"
    {
#line 751 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__compile_fact_table_file_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 4))), ((MR_String) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv3_O_File_11, &top_level__mercury_compile_llds_back_end__conv2_Succeeded_12);
    }
#line 751 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv3_O_File_11));
#line 751 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv2_Succeeded_12));
#line 751 "mercury_compile_llds_back_end.m"
  }
#line 751 "mercury_compile_llds_back_end.m"
}

#line 715 "mercury_compile_llds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_2(
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 715 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1)
#line 715 "mercury_compile_llds_back_end.m"
{
#line 715 "mercury_compile_llds_back_end.m"
  {
#line 715 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 715 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;

#line 715 "mercury_compile_llds_back_end.m"
    {
#line 715 "mercury_compile_llds_back_end.m"
      return top_level__mercury_compile_llds_back_end__succeeded = top_level__mercury_compile_llds_back_end__foreign_decl_code_is_local_1_p_0(((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1));
    }
#line 715 "mercury_compile_llds_back_end.m"
    return top_level__mercury_compile_llds_back_end__succeeded;
#line 715 "mercury_compile_llds_back_end.m"
  }
#line 715 "mercury_compile_llds_back_end.m"
}

#line 708 "mercury_compile_llds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1(
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__closure_arg,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_1,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_2,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box top_level__mercury_compile_llds_back_end__wrapper_arg_3,
#line 708 "mercury_compile_llds_back_end.m"
  MR_Box * top_level__mercury_compile_llds_back_end__wrapper_arg_4)
#line 708 "mercury_compile_llds_back_end.m"
{
#line 708 "mercury_compile_llds_back_end.m"
  {
#line 708 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__closure = top_level__mercury_compile_llds_back_end__closure_arg;
#line 708 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__conv0_Include_8;

#line 708 "mercury_compile_llds_back_end.m"
    {
#line 708 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__make_foreign_import_header_code_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_llds_back_end__wrapper_arg_1), &top_level__mercury_compile_llds_back_end__conv0_Include_8);
    }
#line 708 "mercury_compile_llds_back_end.m"
    *top_level__mercury_compile_llds_back_end__wrapper_arg_2 = ((MR_Box) (top_level__mercury_compile_llds_back_end__conv0_Include_8));
#line 708 "mercury_compile_llds_back_end.m"
  }
#line 708 "mercury_compile_llds_back_end.m"
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
#line 645 "mercury_compile_llds_back_end.m"
  {
#line 645 "mercury_compile_llds_back_end.m"
    MR_bool top_level__mercury_compile_llds_back_end__succeeded;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Globals_16;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Verbose_17;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Stats_18;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__GlobalData_24;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__HLDSVarNums_26;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ShortLocns_27;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LongLocns_28;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserEventVarNums_29;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserEvents_30;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CallSites_36;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CoveragePoints_37;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcStatics_38;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcVarNames_40;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntries_42;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TableIoEntryMap_43;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcEventLayouts_44;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ExecTraces_45;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TablingInfoStructs_49;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__StaticCellInfo_51;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__AllocSites_54;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__AllocIdMap_55;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TSStringTable_56;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__RttiDatas_57;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ComplexityProcs_58;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ModuleSymName_59;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCodes0_60;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_BodyCodes_61;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_Includes_62;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportDefns_64;
#line 645 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__MangledModuleName_65;
#line 645 "mercury_compile_llds_back_end.m"
    MR_String top_level__mercury_compile_llds_back_end__CModuleName_66;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end__ProcsPerFunc_67;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__ChunkedModules_68;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_70;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_71;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_72;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__Start_73;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__End_74;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__C_HeaderCodes_75;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserInitPredCNames_76;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__UserFinalPredCNames_77;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__CFile_78;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_79;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_107_107;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_110_110;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_111_111;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_112_112;
#line 645 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__V_113_113;
#line 691 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end___C_ExportDecls_63;
#line 708 "mercury_compile_llds_back_end.m"
    MR_Box top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_108_108;

#line 646 "mercury_compile_llds_back_end.m"
    {
#line 646 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__Globals_16);
    }
#line 647 "mercury_compile_llds_back_end.m"
    {
#line 647 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_17);
    }
#line 648 "mercury_compile_llds_back_end.m"
    {
#line 648 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_18);
    }
#line 650 "mercury_compile_llds_back_end.m"
    {
#line 650 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_17, (MR_String) "% Generating layout data...");
    }
#line 652 "mercury_compile_llds_back_end.m"
    {
#line 652 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_17);
    }
#line 656 "mercury_compile_llds_back_end.m"
    {
#line 656 "mercury_compile_llds_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19);
    }
#line 657 "mercury_compile_llds_back_end.m"
    {
#line 657 "mercury_compile_llds_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20);
    }
#line 658 "mercury_compile_llds_back_end.m"
    {
#line 658 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 275, &top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21);
    }
#line 659 "mercury_compile_llds_back_end.m"
    {
#line 659 "mercury_compile_llds_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__NewTypeClassRtti_21, &top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22);
    }
#line 5321 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 661 "mercury_compile_llds_back_end.m"
    {
#line 661 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124, top_level__mercury_compile_llds_back_end__OldTypeClassInfoRttiData_20, top_level__mercury_compile_llds_back_end__NewTypeClassInfoRttiData_22);
    }
#line 663 "mercury_compile_llds_back_end.m"
    {
#line 663 "mercury_compile_llds_back_end.m"
      ll_backend__stack_layout__generate_llds_layout_data_26_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__GlobalData0_10, &top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25, &top_level__mercury_compile_llds_back_end__HLDSVarNums_26, &top_level__mercury_compile_llds_back_end__ShortLocns_27, &top_level__mercury_compile_llds_back_end__LongLocns_28, &top_level__mercury_compile_llds_back_end__UserEventVarNums_29, &top_level__mercury_compile_llds_back_end__UserEvents_30, &top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31, &top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32, &top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33, &top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34, &top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35, &top_level__mercury_compile_llds_back_end__CallSites_36, &top_level__mercury_compile_llds_back_end__CoveragePoints_37, &top_level__mercury_compile_llds_back_end__ProcStatics_38, &top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39, &top_level__mercury_compile_llds_back_end__ProcVarNames_40, &top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41, &top_level__mercury_compile_llds_back_end__TableIoEntries_42, &top_level__mercury_compile_llds_back_end__TableIoEntryMap_43, &top_level__mercury_compile_llds_back_end__ProcEventLayouts_44, &top_level__mercury_compile_llds_back_end__ExecTraces_45, &top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46, &top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47);
    }
#line 672 "mercury_compile_llds_back_end.m"
    {
#line 672 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_17, (MR_String) " done.\n");
    }
#line 673 "mercury_compile_llds_back_end.m"
    {
#line 673 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_18);
    }
#line 678 "mercury_compile_llds_back_end.m"
    {
#line 678 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__llds_get_c_interface_info_3_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48);
    }
#line 679 "mercury_compile_llds_back_end.m"
    {
#line 679 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__TablingInfoStructs_49);
    }
#line 680 "mercury_compile_llds_back_end.m"
    {
#line 680 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50);
    }
#line 681 "mercury_compile_llds_back_end.m"
    {
#line 681 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_static_cell_info_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__StaticCellInfo_51);
    }
#line 682 "mercury_compile_llds_back_end.m"
    {
#line 682 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__get_static_cells_3_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo_51, &top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52, &top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53);
    }
#line 684 "mercury_compile_llds_back_end.m"
    {
#line 684 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__AllocSites_54, &top_level__mercury_compile_llds_back_end__AllocIdMap_55);
    }
#line 685 "mercury_compile_llds_back_end.m"
    {
#line 685 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(top_level__mercury_compile_llds_back_end__GlobalData_24, &top_level__mercury_compile_llds_back_end__TSStringTable_56);
    }
#line 688 "mercury_compile_llds_back_end.m"
    {
#line 688 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__RttiDatas_57 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_124_124, top_level__mercury_compile_llds_back_end__TypeCtorRttiData_19, top_level__mercury_compile_llds_back_end__TypeClassInfoRttiData_23);
    }
#line 689 "mercury_compile_llds_back_end.m"
    {
#line 689 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_complexity_proc_infos_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__ComplexityProcs_58);
    }
#line 691 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__ModuleSymName_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 0)));
#line 691 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_HeaderCodes0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 1)));
#line 691 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_BodyCodes_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 2)));
#line 691 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_Includes_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 3)));
#line 691 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end___C_ExportDecls_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 4)));
#line 691 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__C_ExportDefns_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 5)));
#line 694 "mercury_compile_llds_back_end.m"
    {
#line 694 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__MangledModuleName_65 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(top_level__mercury_compile_llds_back_end__ModuleSymName_59);
    }
#line 695 "mercury_compile_llds_back_end.m"
    {
#line 695 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__CModuleName_66 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__MangledModuleName_65, (MR_String) "_module");
    }
#line 699 "mercury_compile_llds_back_end.m"
    {
#line 699 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 476, &top_level__mercury_compile_llds_back_end__ProcsPerFunc_67);
    }
#line 700 "mercury_compile_llds_back_end.m"
    top_level__mercury_compile_llds_back_end__succeeded = (top_level__mercury_compile_llds_back_end__ProcsPerFunc_67 == (MR_Integer) 0);
#line 704 "mercury_compile_llds_back_end.m"
    if (top_level__mercury_compile_llds_back_end__succeeded)
#line 703 "mercury_compile_llds_back_end.m"
      {
#line 703 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__V_105_105;

#line 703 "mercury_compile_llds_back_end.m"
        {
#line 703 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__V_105_105 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 703 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_105_105, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CModuleName_66));
#line 703 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_105_105, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Procs_11));
#line 703 "mercury_compile_llds_back_end.m"
        }
#line 703 "mercury_compile_llds_back_end.m"
        {
#line 703 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__ChunkedModules_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_68, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__V_105_105));
#line 703 "mercury_compile_llds_back_end.m"
          MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__ChunkedModules_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "mercury_compile_llds_back_end.m"
        }
#line 703 "mercury_compile_llds_back_end.m"
      }
#line 704 "mercury_compile_llds_back_end.m"
    else
#line 705 "mercury_compile_llds_back_end.m"
      {
#line 705 "mercury_compile_llds_back_end.m"
        MR_Word top_level__mercury_compile_llds_back_end__ChunkedProcs_69;

#line 705 "mercury_compile_llds_back_end.m"
        {
#line 705 "mercury_compile_llds_back_end.m"
          mercury__list__chunk_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_c_procedure_0, top_level__mercury_compile_llds_back_end__Procs_11, top_level__mercury_compile_llds_back_end__ProcsPerFunc_67, &top_level__mercury_compile_llds_back_end__ChunkedProcs_69);
        }
#line 706 "mercury_compile_llds_back_end.m"
        {
#line 706 "mercury_compile_llds_back_end.m"
          top_level__mercury_compile_llds_back_end__combine_chunks_3_p_0(top_level__mercury_compile_llds_back_end__ChunkedProcs_69, top_level__mercury_compile_llds_back_end__CModuleName_66, &top_level__mercury_compile_llds_back_end__ChunkedModules_68);
        }
#line 705 "mercury_compile_llds_back_end.m"
      }
#line 708 "mercury_compile_llds_back_end.m"
    {
#line 708 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_107_107 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 708 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_2[0]));
#line 708 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_1));
#line 708 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 708 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_107_107, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_16));
#line 708 "mercury_compile_llds_back_end.m"
    }
#line 5479 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131 = (MR_Word) &parse_tree__prog_foreign__parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
#line 5481 "top_level.mercury_compile_llds_back_end.c"
    top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
#line 708 "mercury_compile_llds_back_end.m"
    {
#line 708 "mercury_compile_llds_back_end.m"
      mercury__list__map_foldl_5_p_2((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132, top_level__mercury_compile_llds_back_end__V_107_107, top_level__mercury_compile_llds_back_end__C_Includes_62, &top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_70, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv1_STATE_VARIABLE_IO_108_108);
    }
#line 715 "mercury_compile_llds_back_end.m"
    {
#line 715 "mercury_compile_llds_back_end.m"
      mercury__list__filter_4_p_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, (MR_Word) &top_level__mercury_compile_llds_back_end_scalar_common_4[0], top_level__mercury_compile_llds_back_end__C_HeaderCodes0_60, &top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_71, &top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_72);
    }
#line 717 "mercury_compile_llds_back_end.m"
    {
#line 717 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__make_decl_guards_3_p_0(top_level__mercury_compile_llds_back_end__ModuleSymName_59, &top_level__mercury_compile_llds_back_end__Start_73, &top_level__mercury_compile_llds_back_end__End_74);
    }
#line 719 "mercury_compile_llds_back_end.m"
    {
#line 719 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_112_112, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Start_73));
#line 719 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_112_112, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportedHeaderCodes_72));
#line 719 "mercury_compile_llds_back_end.m"
    }
#line 719 "mercury_compile_llds_back_end.m"
    {
#line 719 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 719 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_113_113, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__End_74));
#line 719 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_113_113, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 719 "mercury_compile_llds_back_end.m"
    }
#line 719 "mercury_compile_llds_back_end.m"
    {
#line 719 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_111_111 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__V_112_112, top_level__mercury_compile_llds_back_end__V_113_113);
    }
#line 718 "mercury_compile_llds_back_end.m"
    {
#line 718 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__V_110_110 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__C_LocalHeaderCodes_71, top_level__mercury_compile_llds_back_end__V_111_111);
    }
#line 718 "mercury_compile_llds_back_end.m"
    {
#line 718 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__C_HeaderCodes_75 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_llds_back_end__TypeCtorInfo_131_131, top_level__mercury_compile_llds_back_end__C_IncludeHeaderCodes_70, top_level__mercury_compile_llds_back_end__V_110_110);
    }
#line 721 "mercury_compile_llds_back_end.m"
    {
#line 721 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_user_init_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__UserInitPredCNames_76);
    }
#line 722 "mercury_compile_llds_back_end.m"
    {
#line 722 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_user_final_pred_c_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__UserFinalPredCNames_77);
    }
#line 724 "mercury_compile_llds_back_end.m"
    {
#line 724 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__CFile_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 39 * sizeof(MR_Word)), NULL, NULL);
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleSymName_59));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_HeaderCodes_75));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 2) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_BodyCodes_61));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__C_ExportDefns_64));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TablingInfoStructs_49));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 5) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ScalarCommonCellDatas_52));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 6) = ((MR_Box) (top_level__mercury_compile_llds_back_end__VectorCommonCellDatas_53));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 7) = ((MR_Box) (top_level__mercury_compile_llds_back_end__RttiDatas_57));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 8) = ((MR_Box) (top_level__mercury_compile_llds_back_end__PseudoTypeInfos_25));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 9) = ((MR_Box) (top_level__mercury_compile_llds_back_end__HLDSVarNums_26));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 10) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ShortLocns_27));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 11) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LongLocns_28));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 12) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEventVarNums_29));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 13) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserEvents_30));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 14) = ((MR_Box) (top_level__mercury_compile_llds_back_end__NoVarLabelLayouts_31));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 15) = ((MR_Box) (top_level__mercury_compile_llds_back_end__SVarLabelLayouts_32));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 16) = ((MR_Box) (top_level__mercury_compile_llds_back_end__LVarLabelLayouts_33));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 17) = ((MR_Box) (top_level__mercury_compile_llds_back_end__InternalLabelToLayoutMap_34));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 18) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLabelToLayoutMap_35));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 19) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CallSites_36));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 20) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CoveragePoints_37));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 21) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcStatics_38));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 22) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcHeadVarNums_39));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 23) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcVarNames_40));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 24) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcBodyBytecodes_41));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 25) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TSStringTable_56));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 26) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntries_42));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 27) = ((MR_Box) (top_level__mercury_compile_llds_back_end__TableIoEntryMap_43));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 28) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcEventLayouts_44));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 29) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ExecTraces_45));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 30) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ProcLayoutDatas_46));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 31) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ModuleLayoutDatas_47));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 32) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ClosureLayoutDatas_50));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 33) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocSites_54));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 34) = ((MR_Box) (top_level__mercury_compile_llds_back_end__AllocIdMap_55));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 35) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ChunkedModules_68));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 36) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserInitPredCNames_76));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 37) = ((MR_Box) (top_level__mercury_compile_llds_back_end__UserFinalPredCNames_77));
#line 724 "mercury_compile_llds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__CFile_78, 38) = ((MR_Box) (top_level__mercury_compile_llds_back_end__ComplexityProcs_58));
#line 724 "mercury_compile_llds_back_end.m"
    }
#line 737 "mercury_compile_llds_back_end.m"
    {
#line 737 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__output_llds_file_5_p_0(top_level__mercury_compile_llds_back_end__Globals_16, top_level__mercury_compile_llds_back_end__CFile_78, &top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_79);
    }
#line 761 "mercury_compile_llds_back_end.m"
#line 761 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__TargetCodeSucceeded_79) {
#line 761 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 761 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 762 "mercury_compile_llds_back_end.m"
        {
#line 763 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__Succeeded_13 = (MR_Integer) 0;
#line 764 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__FactTableObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 762 "mercury_compile_llds_back_end.m"
        }
#line 761 "mercury_compile_llds_back_end.m"
        break;
#line 761 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 739 "mercury_compile_llds_back_end.m"
        {
#line 739 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__C_ExportDecls_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 4)));
#line 739 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__TargetCodeOnly_86;
#line 741 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 0)));
#line 741 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 1)));
#line 741 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 2)));
#line 741 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 3)));
#line 741 "mercury_compile_llds_back_end.m"
          MR_Word top_level__mercury_compile_llds_back_end__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__C_InterfaceInfo_48, (MR_Integer) 5)));

#line 742 "mercury_compile_llds_back_end.m"
          {
#line 742 "mercury_compile_llds_back_end.m"
            backend_libs__export__produce_header_file_5_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, top_level__mercury_compile_llds_back_end__C_ExportDecls_84, top_level__mercury_compile_llds_back_end__ModuleName_12);
          }
#line 745 "mercury_compile_llds_back_end.m"
          {
#line 745 "mercury_compile_llds_back_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_16, (MR_Integer) 98, &top_level__mercury_compile_llds_back_end__TargetCodeOnly_86);
          }
#line 756 "mercury_compile_llds_back_end.m"
#line 756 "mercury_compile_llds_back_end.m"
          switch (top_level__mercury_compile_llds_back_end__TargetCodeOnly_86) {
#line 756 "mercury_compile_llds_back_end.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 756 "mercury_compile_llds_back_end.m"
            case (MR_Integer) 0:
#line 747 "mercury_compile_llds_back_end.m"
              {
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139;
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__OutputStream_87;
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__CompileOK_88;
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__FactTableBaseFiles_89;
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__FactTableCompileOKs_90;
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__V_120_120;
#line 747 "mercury_compile_llds_back_end.m"
                MR_Word top_level__mercury_compile_llds_back_end__V_122_122;
#line 751 "mercury_compile_llds_back_end.m"
                MR_Box top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_121_121;

#line 748 "mercury_compile_llds_back_end.m"
                {
#line 748 "mercury_compile_llds_back_end.m"
                  mercury__io__output_stream_3_p_0(&top_level__mercury_compile_llds_back_end__OutputStream_87);
                }
#line 749 "mercury_compile_llds_back_end.m"
                {
#line 749 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__llds_c_to_obj_6_p_0(top_level__mercury_compile_llds_back_end__Globals_16, top_level__mercury_compile_llds_back_end__OutputStream_87, top_level__mercury_compile_llds_back_end__ModuleName_12, &top_level__mercury_compile_llds_back_end__CompileOK_88);
                }
#line 750 "mercury_compile_llds_back_end.m"
                {
#line 750 "mercury_compile_llds_back_end.m"
                  hlds__hlds_module__module_get_fact_table_file_names_2_p_0(top_level__mercury_compile_llds_back_end__HLDS_9, &top_level__mercury_compile_llds_back_end__FactTableBaseFiles_89);
                }
#line 751 "mercury_compile_llds_back_end.m"
                {
#line 751 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__V_120_120 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 751 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 0) = ((MR_Box) (&top_level__mercury_compile_llds_back_end_scalar_common_5[0]));
#line 751 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__llds_output_pass_8_p_0_3));
#line 751 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 751 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 3) = ((MR_Box) (top_level__mercury_compile_llds_back_end__Globals_16));
#line 751 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_llds_back_end__V_120_120, 4) = ((MR_Box) (top_level__mercury_compile_llds_back_end__OutputStream_87));
#line 751 "mercury_compile_llds_back_end.m"
                }
#line 5735 "top_level.mercury_compile_llds_back_end.c"
                top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 751 "mercury_compile_llds_back_end.m"
                {
#line 751 "mercury_compile_llds_back_end.m"
                  mercury__list__map2_foldl_6_p_2(top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139, top_level__mercury_compile_llds_back_end__TypeCtorInfo_139_139, (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, top_level__mercury_compile_llds_back_end__TypeCtorInfo_132_132, top_level__mercury_compile_llds_back_end__V_120_120, top_level__mercury_compile_llds_back_end__FactTableBaseFiles_89, top_level__mercury_compile_llds_back_end__FactTableObjFiles_14, &top_level__mercury_compile_llds_back_end__FactTableCompileOKs_90, ((MR_Box) ((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__conv4_STATE_VARIABLE_IO_121_121);
                }
#line 754 "mercury_compile_llds_back_end.m"
                {
#line 754 "mercury_compile_llds_back_end.m"
                  top_level__mercury_compile_llds_back_end__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_122_122, 0) = ((MR_Box) (top_level__mercury_compile_llds_back_end__CompileOK_88));
#line 754 "mercury_compile_llds_back_end.m"
                  MR_hl_field(MR_mktag(1), top_level__mercury_compile_llds_back_end__V_122_122, 1) = ((MR_Box) (top_level__mercury_compile_llds_back_end__FactTableCompileOKs_90));
#line 754 "mercury_compile_llds_back_end.m"
                }
#line 754 "mercury_compile_llds_back_end.m"
                {
#line 754 "mercury_compile_llds_back_end.m"
                  mercury__bool__and_list_2_p_0(top_level__mercury_compile_llds_back_end__V_122_122, top_level__mercury_compile_llds_back_end__Succeeded_13);
                }
#line 755 "mercury_compile_llds_back_end.m"
                {
#line 755 "mercury_compile_llds_back_end.m"
                  parse_tree__module_cmds__maybe_set_exit_status_3_p_0(*top_level__mercury_compile_llds_back_end__Succeeded_13);
#line 755 "mercury_compile_llds_back_end.m"
                  return;
                }
#line 747 "mercury_compile_llds_back_end.m"
              }
#line 756 "mercury_compile_llds_back_end.m"
              break;
#line 756 "mercury_compile_llds_back_end.m"
            case (MR_Integer) 1:
#line 757 "mercury_compile_llds_back_end.m"
              {
#line 758 "mercury_compile_llds_back_end.m"
                *top_level__mercury_compile_llds_back_end__Succeeded_13 = (MR_Integer) 1;
#line 759 "mercury_compile_llds_back_end.m"
                *top_level__mercury_compile_llds_back_end__FactTableObjFiles_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "mercury_compile_llds_back_end.m"
              }
#line 756 "mercury_compile_llds_back_end.m"
              break;
#line 756 "mercury_compile_llds_back_end.m"
          }
#line 739 "mercury_compile_llds_back_end.m"
        }
#line 761 "mercury_compile_llds_back_end.m"
        break;
#line 761 "mercury_compile_llds_back_end.m"
    }
#line 645 "mercury_compile_llds_back_end.m"
  }
#line 33 "mercury_compile_llds_back_end.m"
}

#line 29 "mercury_compile_llds_back_end.m"
void MR_CALL 
top_level__mercury_compile_llds_back_end__llds_backend_pass_8_p_0(
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_29,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__LLDS_11,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_31,
#line 29 "mercury_compile_llds_back_end.m"
  MR_Word * top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_32)
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
    MR_Word top_level__mercury_compile_llds_back_end__Specs_25;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_37_37;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44;
#line 102 "mercury_compile_llds_back_end.m"
    MR_Word top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47;
#line 140 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end___NumWarnings_26;
#line 140 "mercury_compile_llds_back_end.m"
    MR_Integer top_level__mercury_compile_llds_back_end___NumErrors_27;

#line 103 "mercury_compile_llds_back_end.m"
    {
#line 103 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_name_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__ModuleName_14);
    }
#line 104 "mercury_compile_llds_back_end.m"
    {
#line 104 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__Globals_15);
    }
#line 105 "mercury_compile_llds_back_end.m"
    {
#line 105 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 240, &top_level__mercury_compile_llds_back_end__OptUnboxFloat_16);
    }
#line 106 "mercury_compile_llds_back_end.m"
    {
#line 106 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 454, &top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
#line 110 "mercury_compile_llds_back_end.m"
#line 110 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__OptUnboxFloat_16) {
#line 110 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 110 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 112 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 1;
#line 110 "mercury_compile_llds_back_end.m"
        break;
#line 110 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 109 "mercury_compile_llds_back_end.m"
        top_level__mercury_compile_llds_back_end__UnboxFloats_18 = (MR_Integer) 0;
#line 110 "mercury_compile_llds_back_end.m"
        break;
#line 110 "mercury_compile_llds_back_end.m"
    }
#line 114 "mercury_compile_llds_back_end.m"
    {
#line 114 "mercury_compile_llds_back_end.m"
      top_level__mercury_compile_llds_back_end__StaticCellInfo0_19 = ll_backend__global_data__init_static_cell_info_3_f_0(top_level__mercury_compile_llds_back_end__ModuleName_14, top_level__mercury_compile_llds_back_end__UnboxFloats_18, top_level__mercury_compile_llds_back_end__DoCommonData_17);
    }
#line 116 "mercury_compile_llds_back_end.m"
    {
#line 116 "mercury_compile_llds_back_end.m"
      hlds__hlds_module__module_info_get_ts_rev_string_table_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__TSStringTableSize_20, &top_level__mercury_compile_llds_back_end__TSRevStringTable_21);
    }
#line 118 "mercury_compile_llds_back_end.m"
    {
#line 118 "mercury_compile_llds_back_end.m"
      ll_backend__global_data__global_data_init_4_p_0(top_level__mercury_compile_llds_back_end__StaticCellInfo0_19, top_level__mercury_compile_llds_back_end__TSStringTableSize_20, top_level__mercury_compile_llds_back_end__TSRevStringTable_21, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_37_37);
    }
#line 121 "mercury_compile_llds_back_end.m"
    {
#line 121 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 45, &top_level__mercury_compile_llds_back_end__Verbose_22);
    }
#line 122 "mercury_compile_llds_back_end.m"
    {
#line 122 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 55, &top_level__mercury_compile_llds_back_end__Stats_23);
    }
#line 455 "mercury_compile_llds_back_end.m"
    {
#line 455 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) "% Mapping args to regs...");
    }
#line 456 "mercury_compile_llds_back_end.m"
    {
#line 456 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_llds_back_end__Verbose_22);
    }
#line 457 "mercury_compile_llds_back_end.m"
    {
#line 457 "mercury_compile_llds_back_end.m"
      hlds__arg_info__generate_arg_info_2_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_0_28, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40);
    }
#line 458 "mercury_compile_llds_back_end.m"
    {
#line 458 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_llds_back_end__Verbose_22, (MR_String) " done.\n");
    }
#line 459 "mercury_compile_llds_back_end.m"
    {
#line 459 "mercury_compile_llds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_llds_back_end__Stats_23);
    }
#line 127 "mercury_compile_llds_back_end.m"
    {
#line 127 "mercury_compile_llds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, (MR_Integer) 305, (MR_String) "args_to_regs", top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_0_31, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44);
    }
#line 129 "mercury_compile_llds_back_end.m"
    {
#line 129 "mercury_compile_llds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 296, &top_level__mercury_compile_llds_back_end__TradPasses_24);
    }
#line 130 "mercury_compile_llds_back_end.m"
    {
#line 130 "mercury_compile_llds_back_end.m"
      ll_backend__proc_gen__add_all_tabling_info_structs_3_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_37_37, &top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47);
    }
#line 135 "mercury_compile_llds_back_end.m"
#line 135 "mercury_compile_llds_back_end.m"
    switch (top_level__mercury_compile_llds_back_end__TradPasses_24) {
#line 135 "mercury_compile_llds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 135 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 0:
#line 132 "mercury_compile_llds_back_end.m"
        {
#line 133 "mercury_compile_llds_back_end.m"
          {
#line 133 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__llds_backend_pass_by_phases_11_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_29, top_level__mercury_compile_llds_back_end__LLDS_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__Specs_25, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_32);
          }
#line 132 "mercury_compile_llds_back_end.m"
        }
#line 135 "mercury_compile_llds_back_end.m"
        break;
#line 135 "mercury_compile_llds_back_end.m"
      case (MR_Integer) 1:
#line 136 "mercury_compile_llds_back_end.m"
        {
#line 137 "mercury_compile_llds_back_end.m"
          {
#line 137 "mercury_compile_llds_back_end.m"
            top_level__mercury_compile_llds_back_end__llds_backend_pass_by_preds_7_p_0(top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_40_40, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_HLDS_29, top_level__mercury_compile_llds_back_end__LLDS_11, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_47_47, top_level__mercury_compile_llds_back_end__STATE_VARIABLE_GlobalData_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_llds_back_end__Specs_25);
          }
#line 136 "mercury_compile_llds_back_end.m"
          *top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_32 = top_level__mercury_compile_llds_back_end__STATE_VARIABLE_DumpInfo_44_44;
#line 136 "mercury_compile_llds_back_end.m"
        }
#line 135 "mercury_compile_llds_back_end.m"
        break;
#line 135 "mercury_compile_llds_back_end.m"
    }
#line 140 "mercury_compile_llds_back_end.m"
    {
#line 140 "mercury_compile_llds_back_end.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_llds_back_end__Specs_25, top_level__mercury_compile_llds_back_end__Globals_15, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end___NumWarnings_26, (MR_Integer) 0, &top_level__mercury_compile_llds_back_end___NumErrors_27);
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
