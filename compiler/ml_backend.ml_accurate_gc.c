/*
** Automatically generated from `ml_accurate_gc.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module ml_backend.ml_accurate_gc. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_accurate_gc__init
ENDINIT
*/

#include "ml_backend.ml_accurate_gc.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_data_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[4];

static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1];

static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1];

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0;

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1];

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1;

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1];

static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[2];

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[2];

static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[2];

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__pred__ml_gen_make_type_info_var__425__1_2_p_0(
  MR_Word ml_backend__ml_accurate_gc__PolySpecs_19,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_32);

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__351__1_5_f_0(
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
  MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32,
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_52);

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__313__1_1_f_0(
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_44);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2);

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__Rval_3);

static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
  MR_Word ml_backend__ml_accurate_gc__Context_10,
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
  MR_Word * ml_backend__ml_accurate_gc__Statement_12,
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__AtomicStatement0_5,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
  MR_Word * ml_backend__ml_accurate_gc__Statement_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0(
  MR_Word ml_backend__ml_accurate_gc__Type_7,
  MR_Word ml_backend__ml_accurate_gc__Context_8,
  MR_Word * ml_backend__ml_accurate_gc__TypeInfoVar_9,
  MR_Word * ml_backend__ml_accurate_gc__TypeInfoGoals_10,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
  MR_Word ml_backend__ml_accurate_gc__Info_7,
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__Type_9,
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__TraceStatement_12);

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_3(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GC_TraceCode_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);


static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[3][5];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[12][3];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][9];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[1][6];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[2][7];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[2][1];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_9[1][10];


/* sealed */ struct ml_backend__ml_accurate_gc__vector_common_type_2_0_s {
  const MR_String ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_0;
  const MR_Integer ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_2_0_s ml_backend__ml_accurate_gc_vector_common_2[16];



static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[6])))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[12][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[1][6] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) ((MR_String) "gc_trace")),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[7])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};


static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_2_0_s ml_backend__ml_accurate_gc_vector_common_2[16] = {
  /* row 0 */
  {
    (MR_String) "zero_base_typeclass_info",
    (MR_Integer) -1
  },
  /* row 1 */
  {
    (MR_String) "zero_type_ctor_info",
    (MR_Integer) -1
  },
  /* row 2 */
  {
    (MR_String) "type_ctor_info",
    (MR_Integer) -1
  },
  /* row 3 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 4 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 5 */
  {
    (MR_String) "typeclass_info",
    (MR_Integer) -1
  },
  /* row 6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 8 */
  {
    (MR_String) "type_info",
    (MR_Integer) 1
  },
  /* row 9 */
  {
    (MR_String) "zero_typeclass_info",
    (MR_Integer) -1
  },
  /* row 10 */
  {
    (MR_String) "zero_type_info",
    (MR_Integer) -1
  },
  /* row 11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row 14 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Integer) -1
  },
  /* row 15 */
  {
    NULL,
    (MR_Integer) -2
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_data_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_data_defn_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[4] = {
  (MR_String) "fnoi_module_name",
  (MR_String) "fnoi_context",
  (MR_String) "fnoi_locals",
  (MR_String) "fnoi_next_id"
};

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 = {
  (MR_String) "fixup_newobj_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0
};

static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "fixup_newobj_info",
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0 },
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0 = {
  (MR_String) "construct_from_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0
};

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1 = {
  (MR_String) "already_provided",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1
};

static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0[2] = {
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1,
  &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0
};

static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "how_to_get_type_info",
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0 },
  {     ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0
};

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    {
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2));
    }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__1_1;

    {
      ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(&ml_backend__ml_accurate_gc__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3));
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    {
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2));
    }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_accurate_gc__conv0_HeadVar__1_1;

    {
      ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(&ml_backend__ml_accurate_gc__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_2), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3));
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__pred__ml_gen_make_type_info_var__425__1_2_p_0(
  MR_Word ml_backend__ml_accurate_gc__PolySpecs_19,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_32)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    {
      ml_backend__ml_accurate_gc__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[2], ((MR_Box) (ml_backend__ml_accurate_gc__PolySpecs_19)), ((MR_Box) (ml_backend__ml_accurate_gc__HeadVar__2_32)));
    }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__351__1_5_f_0(
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
  MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32,
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_52)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__2_53;
    MR_Word ml_backend__ml_accurate_gc__LocalVarName_36;
    MR_Word ml_backend__ml_accurate_gc__LocalVarType_37;
    MR_Word ml_backend__ml_accurate_gc__Var_54;
    MR_Word ml_backend__ml_accurate_gc__Var_55;

    {
      ml_backend__ml_accurate_gc__LocalVarName_36 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_accurate_gc__VarSet_30, ml_backend__ml_accurate_gc__LambdaHeadVar__1_52);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_accurate_gc__VarTypes_31, ml_backend__ml_accurate_gc__LambdaHeadVar__1_52, &ml_backend__ml_accurate_gc__LocalVarType_37);
    }
    {
      ml_backend__ml_accurate_gc__Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_54, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__LocalVarName_36));
    }
    {
      ml_backend__ml_accurate_gc__Var_55 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_24, ml_backend__ml_accurate_gc__LocalVarType_37);
    }
    {
      ml_backend__ml_accurate_gc__LambdaHeadVar__2_53 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_accurate_gc__Var_54, ml_backend__ml_accurate_gc__Var_55, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__MLDS_Context_32);
    }
    return ml_backend__ml_accurate_gc__LambdaHeadVar__2_53;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__313__1_1_f_0(
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_44)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__2_45;
    MR_Word ml_backend__ml_accurate_gc__GI_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__LambdaHeadVar__1_44, (MR_Integer) 1)));
    MR_Word ml_backend__ml_accurate_gc___GX_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__LambdaHeadVar__1_44, (MR_Integer) 0)));

    {
      ml_backend__ml_accurate_gc__LambdaHeadVar__2_45 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_accurate_gc__GI_65);
    }
    return ml_backend__ml_accurate_gc__LambdaHeadVar__2_45;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Integer ml_backend__ml_accurate_gc__CastX_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
    MR_Integer ml_backend__ml_accurate_gc__CastY_13 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_12 == ml_backend__ml_accurate_gc__CastY_13);
    if (ml_backend__ml_accurate_gc__succeeded)
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_accurate_gc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ml_backend__ml_accurate_gc__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

            {
              ml_backend__mlds____Compare____mlds_rval_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__Var_16, ml_backend__ml_accurate_gc__Var_11);
            }
          }
        else
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 2;
      }
    else
      {
        MR_Word ml_backend__ml_accurate_gc__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));

        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word ml_backend__ml_accurate_gc__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

            {
              parse_tree__prog_data____Compare____mer_type_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__Var_17, ml_backend__ml_accurate_gc__Var_5);
            }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Integer ml_backend__ml_accurate_gc__CastX_7 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
    MR_Integer ml_backend__ml_accurate_gc__CastY_8 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_7 == ml_backend__ml_accurate_gc__CastY_8);
    if (ml_backend__ml_accurate_gc__succeeded)
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ml_backend__ml_accurate_gc__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_6;

        ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_accurate_gc__succeeded)
          {
            ml_backend__ml_accurate_gc__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
            {
              ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_accurate_gc__Var_5, ml_backend__ml_accurate_gc__Var_6);
            }
          }
      }
    else
      {
        MR_Word ml_backend__ml_accurate_gc__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_4;

        ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_accurate_gc__succeeded)
          {
            ml_backend__ml_accurate_gc__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
            {
              ml_backend__ml_accurate_gc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_accurate_gc__Var_3, ml_backend__ml_accurate_gc__Var_4);
            }
          }
      }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Integer ml_backend__ml_accurate_gc__CastX_15 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
    MR_Integer ml_backend__ml_accurate_gc__CastY_16 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_15 == ml_backend__ml_accurate_gc__CastY_16);
    if (ml_backend__ml_accurate_gc__succeeded)
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_accurate_gc__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_accurate_gc__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_accurate_gc__Var_12;

        {
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_accurate_gc__Var_12, ml_backend__ml_accurate_gc__Var_4, ml_backend__ml_accurate_gc__Var_8);
        }
        ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Var_12 == (MR_Integer) 0);
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
        if (ml_backend__ml_accurate_gc__succeeded)
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__Var_12;
        else
          {
            MR_Word ml_backend__ml_accurate_gc__Var_13;

            {
              ml_backend__mlds____Compare____mlds_context_0_0(&ml_backend__ml_accurate_gc__Var_13, ml_backend__ml_accurate_gc__Var_5, ml_backend__ml_accurate_gc__Var_9);
            }
            ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Var_13 == (MR_Integer) 0);
            ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
            if (ml_backend__ml_accurate_gc__succeeded)
              *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__Var_13;
            else
              {
                MR_Word ml_backend__ml_accurate_gc__Var_14;

                {
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[3], &ml_backend__ml_accurate_gc__Var_14, ((MR_Box) (ml_backend__ml_accurate_gc__Var_6)), ((MR_Box) (ml_backend__ml_accurate_gc__Var_10)));
                }
                ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Var_14 == (MR_Integer) 0);
                ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
                if (ml_backend__ml_accurate_gc__succeeded)
                  *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__Var_14;
                else
                  {
                    mercury__counter____Compare____counter_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__Var_7, ml_backend__ml_accurate_gc__Var_11);
                  }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Integer ml_backend__ml_accurate_gc__CastX_11 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
    MR_Integer ml_backend__ml_accurate_gc__CastY_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_11 == ml_backend__ml_accurate_gc__CastY_12);
    if (ml_backend__ml_accurate_gc__succeeded)
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_accurate_gc__TypeInfo_15_15;
        MR_Word ml_backend__ml_accurate_gc__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_accurate_gc__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_accurate_gc__Var_3, ml_backend__ml_accurate_gc__Var_7);
        }
        if (ml_backend__ml_accurate_gc__succeeded)
          {
            {
              ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_accurate_gc__Var_4, ml_backend__ml_accurate_gc__Var_8);
            }
            if (ml_backend__ml_accurate_gc__succeeded)
              {
                ml_backend__ml_accurate_gc__TypeInfo_15_15 = (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[3];
                {
                  ml_backend__ml_accurate_gc__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_accurate_gc__TypeInfo_15_15, ((MR_Box) (ml_backend__ml_accurate_gc__Var_5)), ((MR_Box) (ml_backend__ml_accurate_gc__Var_9)));
                }
                if (ml_backend__ml_accurate_gc__succeeded)
                  {
                    ml_backend__ml_accurate_gc__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_accurate_gc__Var_6, ml_backend__ml_accurate_gc__Var_10);
                  }
              }
          }
      }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__Rval_3)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__HeadVar__4_4;

    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_accurate_gc__HeadVar__4_4 = ml_backend__ml_accurate_gc__Rval_3;
    else
      {
        MR_Integer ml_backend__ml_accurate_gc__Tag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_11;
        MR_Word ml_backend__ml_accurate_gc__Var_12;

        {
          ml_backend__ml_accurate_gc__Var_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__HeadVar__2_2));
        }
        {
          ml_backend__ml_accurate_gc__Var_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_12, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Tag_7));
          MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_12, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_3));
        }
        {
          ml_backend__ml_accurate_gc__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_11));
          MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__HeadVar__4_4, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_12));
        }
      }
    return ml_backend__ml_accurate_gc__HeadVar__4_4;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
  MR_Word ml_backend__ml_accurate_gc__Context_10,
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
  MR_Word * ml_backend__ml_accurate_gc__Statement_12,
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__FieldId_14;
    MR_Word ml_backend__ml_accurate_gc__Field_17;
    MR_Word ml_backend__ml_accurate_gc__AssignStmt_18;
    MR_Word ml_backend__ml_accurate_gc__Var_20;
    MR_Word ml_backend__ml_accurate_gc__Var_21;
    MR_Word ml_backend__ml_accurate_gc__Var_23;

    *ml_backend__ml_accurate_gc__HeadVar__7_7 = (ml_backend__ml_accurate_gc__FieldNum_13 + (MR_Integer) 1);
    {
      ml_backend__ml_accurate_gc__Var_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_21, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldNum_13));
    }
    {
      ml_backend__ml_accurate_gc__Var_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_20, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_21));
    }
    {
      ml_backend__ml_accurate_gc__FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_20));
    }
    {
      ml_backend__ml_accurate_gc__Field_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_8[1])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerRval_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldId_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_8));
    }
    {
      ml_backend__ml_accurate_gc__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Field_17));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_23, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgRval_11));
    }
    {
      ml_backend__ml_accurate_gc__AssignStmt_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_18, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_23));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_accurate_gc__Statement_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_18));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_12;
    MR_Integer ml_backend__ml_accurate_gc__conv0_HeadVar__7_7;

    {
      ml_backend__ml_accurate_gc__init_field_n_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_12, ((MR_Integer) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_HeadVar__7_7);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_12));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__AtomicStatement0_5,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__AtomicStatement0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ml_backend__ml_accurate_gc__Lval_8;
    MR_Word ml_backend__ml_accurate_gc__MaybeTag_9;
    MR_Word ml_backend__ml_accurate_gc__PointerType_11;
    MR_Word ml_backend__ml_accurate_gc__ArgRvals_14;
    MR_Word ml_backend__ml_accurate_gc___ExplicitSecTag_10;
    MR_Word ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_12;
    MR_Word ml_backend__ml_accurate_gc___MaybeCtorName_13;
    MR_Word ml_backend__ml_accurate_gc___ArgTypes_15;
    MR_Word ml_backend__ml_accurate_gc___MayUseAtomic_16;
    MR_Word ml_backend__ml_accurate_gc___AllocId_17;

    if (ml_backend__ml_accurate_gc__succeeded)
      {
        ml_backend__ml_accurate_gc__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 1)));
        ml_backend__ml_accurate_gc__MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 2)));
        ml_backend__ml_accurate_gc___ExplicitSecTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 3)));
        ml_backend__ml_accurate_gc__PointerType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 4)));
        ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 5)));
        ml_backend__ml_accurate_gc___MaybeCtorName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 6)));
        ml_backend__ml_accurate_gc__ArgRvals_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 7)));
        ml_backend__ml_accurate_gc___ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 8)));
        ml_backend__ml_accurate_gc___MayUseAtomic_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 9)));
        ml_backend__ml_accurate_gc___AllocId_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStatement0_5, (MR_Integer) 10)));
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_82_82;
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_88_88;
          MR_Integer ml_backend__ml_accurate_gc__Id_18;
          MR_Word ml_backend__ml_accurate_gc__NextId_19;
          MR_Word ml_backend__ml_accurate_gc__VarName_20;
          MR_Word ml_backend__ml_accurate_gc__VarType_21;
          MR_Word ml_backend__ml_accurate_gc__NullPointers_22;
          MR_Word ml_backend__ml_accurate_gc__Initializer_23;
          MR_Word ml_backend__ml_accurate_gc__Context_25;
          MR_Word ml_backend__ml_accurate_gc__VarDecl_26;
          MR_Word ml_backend__ml_accurate_gc__Locals0_27;
          MR_Word ml_backend__ml_accurate_gc__Locals_28;
          MR_Word ml_backend__ml_accurate_gc__VarLval_29;
          MR_Word ml_backend__ml_accurate_gc__PtrRval_30;
          MR_Word ml_backend__ml_accurate_gc__ArgInitStatements_31;
          MR_Word ml_backend__ml_accurate_gc__TaggedPtrRval_33;
          MR_Word ml_backend__ml_accurate_gc__AssignStmt_34;
          MR_Word ml_backend__ml_accurate_gc__AssignStatement_35;
          MR_Word ml_backend__ml_accurate_gc__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 3)));
          MR_Word ml_backend__ml_accurate_gc__Var_39;
          MR_Integer ml_backend__ml_accurate_gc__Var_41;
          MR_Word ml_backend__ml_accurate_gc__Var_46;
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47;
          MR_Word ml_backend__ml_accurate_gc__Var_49;
          MR_Word ml_backend__ml_accurate_gc__Var_52;
          MR_Word ml_backend__ml_accurate_gc__Var_53;
          MR_Word ml_backend__ml_accurate_gc__Var_54;
          MR_Word ml_backend__ml_accurate_gc__Var_56;
          MR_Word ml_backend__ml_accurate_gc__Var_58;
          MR_Word ml_backend__ml_accurate_gc__Var_59;
          MR_Word ml_backend__ml_accurate_gc__Var_74;
          MR_Word ml_backend__ml_accurate_gc__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Var_64;
          MR_Word ml_backend__ml_accurate_gc__Var_65;
          MR_Word ml_backend__ml_accurate_gc__Var_66;
          MR_Word ml_backend__ml_accurate_gc__Var_67;
          MR_Word ml_backend__ml_accurate_gc__Var_68;
          MR_Word ml_backend__ml_accurate_gc__Var_70;
          MR_Word ml_backend__ml_accurate_gc__Var_75;
          MR_Word ml_backend__ml_accurate_gc__Var_77;
          MR_Word ml_backend__ml_accurate_gc__Var_76;
          MR_Integer ml_backend__ml_accurate_gc___NumFields_32;
          MR_Box ml_backend__ml_accurate_gc__conv2__NumFields_32;

          {
            mercury__counter__allocate_3_p_0(&ml_backend__ml_accurate_gc__Id_18, ml_backend__ml_accurate_gc__Var_38, &ml_backend__ml_accurate_gc__NextId_19);
          }
          {
            ml_backend__ml_accurate_gc__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_39, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Id_18));
          }
          {
            ml_backend__ml_accurate_gc__VarName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarName_20, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_39));
          }
          ml_backend__ml_accurate_gc__VarType_21 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[5]);
          ml_backend__ml_accurate_gc__TypeCtorInfo_82_82 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
          {
            ml_backend__ml_accurate_gc__Var_41 = mercury__list__length_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_82_82, ml_backend__ml_accurate_gc__ArgRvals_14);
          }
          {
            ml_backend__ml_accurate_gc__NullPointers_22 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_accurate_gc__Var_41, ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_8[0]))));
          }
          {
            ml_backend__ml_accurate_gc__Initializer_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Initializer_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__NullPointers_22));
          }
          ml_backend__ml_accurate_gc__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 0)));
          ml_backend__ml_accurate_gc__Context_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 1)));
          ml_backend__ml_accurate_gc__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 2)));
          ml_backend__ml_accurate_gc__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 3)));
          {
            ml_backend__ml_accurate_gc__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_46, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarName_20));
          }
          {
            ml_backend__ml_accurate_gc__VarDecl_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_accurate_gc__Var_46, ml_backend__ml_accurate_gc__VarType_21, ml_backend__ml_accurate_gc__Initializer_23, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__Context_25);
          }
          ml_backend__ml_accurate_gc__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 0)));
          ml_backend__ml_accurate_gc__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 1)));
          ml_backend__ml_accurate_gc__Locals0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 2)));
          ml_backend__ml_accurate_gc__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 3)));
          {
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_67));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_68));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Locals0_27));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__NextId_19));
          }
          {
            ml_backend__ml_accurate_gc__Locals_28 = mercury__cord__snoc_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_accurate_gc__Locals0_27, ((MR_Box) (ml_backend__ml_accurate_gc__VarDecl_26)));
          }
          ml_backend__ml_accurate_gc__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 0)));
          ml_backend__ml_accurate_gc__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 1)));
          ml_backend__ml_accurate_gc__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 2)));
          ml_backend__ml_accurate_gc__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 3)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_74));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_75));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Locals_28));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_77));
          }
          {
            ml_backend__ml_accurate_gc__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_49, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_74));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_49, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_49, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__VarName_20));
          }
          {
            ml_backend__ml_accurate_gc__VarLval_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_29, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_49));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_29, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarType_21));
          }
          {
            ml_backend__ml_accurate_gc__Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_52, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_11));
          }
          {
            ml_backend__ml_accurate_gc__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_53, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_29));
          }
          {
            ml_backend__ml_accurate_gc__PtrRval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_30, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_52));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_30, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_53));
          }
          {
            ml_backend__ml_accurate_gc__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_9[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PtrRval_30));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_25));
          }
          ml_backend__ml_accurate_gc__TypeCtorInfo_88_88 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_82_82, ml_backend__ml_accurate_gc__TypeCtorInfo_88_88, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_accurate_gc__Var_54, ml_backend__ml_accurate_gc__ArgRvals_14, &ml_backend__ml_accurate_gc__ArgInitStatements_31, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_accurate_gc__conv2__NumFields_32);
          }
          ml_backend__ml_accurate_gc___NumFields_32 = ((MR_Integer) ml_backend__ml_accurate_gc__conv2__NumFields_32);
          {
            ml_backend__ml_accurate_gc__TaggedPtrRval_33 = ml_backend__ml_accurate_gc__maybe_tag_rval_3_f_0(ml_backend__ml_accurate_gc__MaybeTag_9, ml_backend__ml_accurate_gc__PointerType_11, ml_backend__ml_accurate_gc__PtrRval_30);
          }
          {
            ml_backend__ml_accurate_gc__Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_56, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Lval_8));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_56, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__TaggedPtrRval_33));
          }
          {
            ml_backend__ml_accurate_gc__AssignStmt_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_34, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_56));
          }
          {
            ml_backend__ml_accurate_gc__AssignStatement_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__AssignStatement_35, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_34));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__AssignStatement_35, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_25));
          }
          {
            ml_backend__ml_accurate_gc__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStatement_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_accurate_gc__Var_58 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_88_88, ml_backend__ml_accurate_gc__ArgInitStatements_31, ml_backend__ml_accurate_gc__Var_59);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_58));
          }
        }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_accurate_gc__Stmt_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__AtomicStatement0_5));
        }
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36;
      }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_accurate_gc__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_accurate_gc__Statement0_11 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_accurate_gc__HeadVar__1_1), (MR_Integer) 1);
          MR_Word ml_backend__ml_accurate_gc__Statement_12;
          MR_Word ml_backend__ml_accurate_gc__Stmt0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_11, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Context_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_11, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Stmt_24;
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
          MR_Word ml_backend__ml_accurate_gc__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 3)));
          MR_Word ml_backend__ml_accurate_gc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 1)));

          {
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_27));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_23));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_29));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_30));
          }
          switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_22)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_63_89 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
                MR_Word ml_backend__ml_accurate_gc__Defns_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 0)));
                MR_Word ml_backend__ml_accurate_gc__Statements0_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 1)));
                MR_Word ml_backend__ml_accurate_gc__Statements_38;
                MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_4;

                {
                  mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_63_89, ml_backend__ml_accurate_gc__TypeCtorInfo_63_89, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[10], ml_backend__ml_accurate_gc__Statements0_37, &ml_backend__ml_accurate_gc__Statements_38, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_4);
                }
                *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_4);
                {
                  ml_backend__ml_accurate_gc__Stmt_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_36));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_38));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_accurate_gc__Kind_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 0)));
                MR_Word ml_backend__ml_accurate_gc__Rval_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 1)));
                MR_Word ml_backend__ml_accurate_gc__Statement0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 2)));
                MR_Word ml_backend__ml_accurate_gc__Statement_42;

                {
                  ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_41, &ml_backend__ml_accurate_gc__Statement_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                }
                {
                  ml_backend__ml_accurate_gc__Stmt_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_39));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_40));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_42));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_accurate_gc__Cond_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 0)));
                MR_Word ml_backend__ml_accurate_gc__Then0_44 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 1)));
                MR_Word ml_backend__ml_accurate_gc__MaybeElse0_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 2)));
                MR_Word ml_backend__ml_accurate_gc__Then_46;
                MR_Word ml_backend__ml_accurate_gc__MaybeElse_47;
                MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_77;

                {
                  ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Then0_44, &ml_backend__ml_accurate_gc__Then_46, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_77);
                }
                {
                  ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(ml_backend__ml_accurate_gc__MaybeElse0_45, &ml_backend__ml_accurate_gc__MaybeElse_47, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_77, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                }
                {
                  ml_backend__ml_accurate_gc__Stmt_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_43));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_46));
                  MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_47));
                }
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_95 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
                    MR_Word ml_backend__ml_accurate_gc__Type_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_accurate_gc__Val_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_accurate_gc__Range_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_accurate_gc__Cases0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 4)));
                    MR_Word ml_backend__ml_accurate_gc__Default0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 5)));
                    MR_Word ml_backend__ml_accurate_gc__Cases_53;
                    MR_Word ml_backend__ml_accurate_gc__Default_54;
                    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_75;
                    MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_75;

                    {
                      mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_95, ml_backend__ml_accurate_gc__TypeCtorInfo_69_95, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[11], ml_backend__ml_accurate_gc__Cases0_51, &ml_backend__ml_accurate_gc__Cases_53, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_75);
                    }
                    ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_75 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_75);
                    {
                      ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_52, &ml_backend__ml_accurate_gc__Default_54, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_75, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                    }
                    {
                      ml_backend__ml_accurate_gc__Stmt_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_48));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_49));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_50));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_53));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_54));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    ml_backend__ml_accurate_gc__Stmt_24 = ml_backend__ml_accurate_gc__Stmt0_22;
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    ml_backend__ml_accurate_gc__Stmt_24 = ml_backend__ml_accurate_gc__Stmt0_22;
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    ml_backend__ml_accurate_gc__Stmt_24 = ml_backend__ml_accurate_gc__Stmt0_22;
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
                  }
                  break;
                case (MR_Integer) 4:
                  {
                    ml_backend__ml_accurate_gc__Stmt_24 = ml_backend__ml_accurate_gc__Stmt0_22;
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
                  }
                  break;
                case (MR_Integer) 5:
                  {
                    ml_backend__ml_accurate_gc__Stmt_24 = ml_backend__ml_accurate_gc__Stmt0_22;
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
                  }
                  break;
                case (MR_Integer) 6:
                  {
                    MR_Word ml_backend__ml_accurate_gc__Ref_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 1)));
                    MR_Word ml_backend__ml_accurate_gc__Handler0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 3)));
                    MR_Word ml_backend__ml_accurate_gc__Handler_69;
                    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_72;
                    MR_Word ml_backend__ml_accurate_gc__Statement0_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 2)));
                    MR_Word ml_backend__ml_accurate_gc__Statement_84;

                    {
                      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_83, &ml_backend__ml_accurate_gc__Statement_84, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_72);
                    }
                    {
                      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_68, &ml_backend__ml_accurate_gc__Handler_69, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_72, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                    }
                    {
                      ml_backend__ml_accurate_gc__Stmt_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_67));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_84));
                      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_24, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_69));
                    }
                  }
                  break;
                case (MR_Integer) 7:
                  {
                    ml_backend__ml_accurate_gc__Stmt_24 = ml_backend__ml_accurate_gc__Stmt0_22;
                    *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25;
                  }
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_22, (MR_Integer) 1)));

                    {
                      ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_70, &ml_backend__ml_accurate_gc__Stmt_24, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                    }
                  }
                  break;
              }
              break;
          }
          {
            ml_backend__ml_accurate_gc__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_12, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_24));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_12, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_23));
          }
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__Statement_12);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__HeadVar__1_1,
  MR_Word * ml_backend__ml_accurate_gc__HeadVar__2_2,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    if ((ml_backend__ml_accurate_gc__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ml_backend__ml_accurate_gc__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3;
      }
    else
      {
        MR_Word ml_backend__ml_accurate_gc__Statement0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Statement_9;
        MR_Word ml_backend__ml_accurate_gc__Stmt0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_8, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Context_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_8, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__Stmt_21;
        MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
        MR_Word ml_backend__ml_accurate_gc__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_accurate_gc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_3, (MR_Integer) 1)));

        {
          ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_24));
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_20));
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_26));
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_27));
        }
        switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_19)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_63_86 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
              MR_Word ml_backend__ml_accurate_gc__Defns_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 0)));
              MR_Word ml_backend__ml_accurate_gc__Statements0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Statements_35;
              MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_4;

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_63_86, ml_backend__ml_accurate_gc__TypeCtorInfo_63_86, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[8], ml_backend__ml_accurate_gc__Statements0_34, &ml_backend__ml_accurate_gc__Statements_35, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_4);
              }
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_4);
              {
                ml_backend__ml_accurate_gc__Stmt_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_21, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_33));
                MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_21, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_35));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ml_backend__ml_accurate_gc__Kind_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 0)));
              MR_Word ml_backend__ml_accurate_gc__Rval_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Statement0_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Statement_39;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_38, &ml_backend__ml_accurate_gc__Statement_39, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
              }
              {
                ml_backend__ml_accurate_gc__Stmt_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_21, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_36));
                MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_21, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_37));
                MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_21, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_39));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_accurate_gc__Cond_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 0)));
              MR_Word ml_backend__ml_accurate_gc__Then0_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__MaybeElse0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Then_43;
              MR_Word ml_backend__ml_accurate_gc__MaybeElse_44;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_74;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Then0_41, &ml_backend__ml_accurate_gc__Then_43, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_74);
              }
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(ml_backend__ml_accurate_gc__MaybeElse0_42, &ml_backend__ml_accurate_gc__MaybeElse_44, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_74, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
              }
              {
                ml_backend__ml_accurate_gc__Stmt_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_21, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_40));
                MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_21, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_43));
                MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_21, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_44));
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_92 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
                  MR_Word ml_backend__ml_accurate_gc__Type_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_accurate_gc__Val_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_accurate_gc__Range_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_accurate_gc__Cases0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 4)));
                  MR_Word ml_backend__ml_accurate_gc__Default0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 5)));
                  MR_Word ml_backend__ml_accurate_gc__Cases_50;
                  MR_Word ml_backend__ml_accurate_gc__Default_51;
                  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_72;
                  MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_72;

                  {
                    mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_92, ml_backend__ml_accurate_gc__TypeCtorInfo_69_92, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[9], ml_backend__ml_accurate_gc__Cases0_48, &ml_backend__ml_accurate_gc__Cases_50, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_72);
                  }
                  ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_72 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_72);
                  {
                    ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_49, &ml_backend__ml_accurate_gc__Default_51, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_72, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                  }
                  {
                    ml_backend__ml_accurate_gc__Stmt_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_45));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_46));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_47));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_50));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_51));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  ml_backend__ml_accurate_gc__Stmt_21 = ml_backend__ml_accurate_gc__Stmt0_19;
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
                }
                break;
              case (MR_Integer) 2:
                {
                  ml_backend__ml_accurate_gc__Stmt_21 = ml_backend__ml_accurate_gc__Stmt0_19;
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
                }
                break;
              case (MR_Integer) 3:
                {
                  ml_backend__ml_accurate_gc__Stmt_21 = ml_backend__ml_accurate_gc__Stmt0_19;
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
                }
                break;
              case (MR_Integer) 4:
                {
                  ml_backend__ml_accurate_gc__Stmt_21 = ml_backend__ml_accurate_gc__Stmt0_19;
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
                }
                break;
              case (MR_Integer) 5:
                {
                  ml_backend__ml_accurate_gc__Stmt_21 = ml_backend__ml_accurate_gc__Stmt0_19;
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ml_backend__ml_accurate_gc__Ref_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 1)));
                  MR_Word ml_backend__ml_accurate_gc__Handler0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 3)));
                  MR_Word ml_backend__ml_accurate_gc__Handler_66;
                  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_69;
                  MR_Word ml_backend__ml_accurate_gc__Statement0_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_accurate_gc__Statement_81;

                  {
                    ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_80, &ml_backend__ml_accurate_gc__Statement_81, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_69);
                  }
                  {
                    ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_65, &ml_backend__ml_accurate_gc__Handler_66, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_69, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                  }
                  {
                    ml_backend__ml_accurate_gc__Stmt_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_64));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_81));
                    MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_21, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_66));
                  }
                }
                break;
              case (MR_Integer) 7:
                {
                  ml_backend__ml_accurate_gc__Stmt_21 = ml_backend__ml_accurate_gc__Stmt0_19;
                  *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22;
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_19, (MR_Integer) 1)));

                  {
                    ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_67, &ml_backend__ml_accurate_gc__Stmt_21, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_4);
                  }
                }
                break;
            }
            break;
        }
        {
          ml_backend__ml_accurate_gc__Statement_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_9, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_21));
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_9, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_20));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_accurate_gc__HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_9));
        }
      }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__FirstCond_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_accurate_gc__LaterConds_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_accurate_gc__Statement0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_accurate_gc__Statement_11;
    MR_Word ml_backend__ml_accurate_gc__Stmt0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_accurate_gc__Context_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_accurate_gc__Stmt_22;
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
    MR_Word ml_backend__ml_accurate_gc__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 0)));
    MR_Word ml_backend__ml_accurate_gc__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 2)));
    MR_Word ml_backend__ml_accurate_gc__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_accurate_gc__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, (MR_Integer) 1)));

    {
      ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_28));
    }
    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_63_87 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          MR_Word ml_backend__ml_accurate_gc__Defns_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Statements0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Statements_36;
          MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_13;

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_63_87, ml_backend__ml_accurate_gc__TypeCtorInfo_63_87, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[6], ml_backend__ml_accurate_gc__Statements0_35, &ml_backend__ml_accurate_gc__Statements_36, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_13);
          }
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_13);
          {
            ml_backend__ml_accurate_gc__Stmt_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_34));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_36));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_accurate_gc__Kind_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Rval_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Statement0_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Statement_40;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_39, &ml_backend__ml_accurate_gc__Statement_40, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
          }
          {
            ml_backend__ml_accurate_gc__Stmt_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_37));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_38));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_40));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_accurate_gc__Cond_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Then0_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__MaybeElse0_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Then_44;
          MR_Word ml_backend__ml_accurate_gc__MaybeElse_45;
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_75;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Then0_42, &ml_backend__ml_accurate_gc__Then_44, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_75);
          }
          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(ml_backend__ml_accurate_gc__MaybeElse0_43, &ml_backend__ml_accurate_gc__MaybeElse_45, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_75, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
          }
          {
            ml_backend__ml_accurate_gc__Stmt_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_41));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_44));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_45));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_93 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              MR_Word ml_backend__ml_accurate_gc__Type_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Val_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Range_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Cases0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 4)));
              MR_Word ml_backend__ml_accurate_gc__Default0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 5)));
              MR_Word ml_backend__ml_accurate_gc__Cases_51;
              MR_Word ml_backend__ml_accurate_gc__Default_52;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_73;
              MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_73;

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_93, ml_backend__ml_accurate_gc__TypeCtorInfo_69_93, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[7], ml_backend__ml_accurate_gc__Cases0_49, &ml_backend__ml_accurate_gc__Cases_51, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_73);
              }
              ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_73 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_73);
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_50, &ml_backend__ml_accurate_gc__Default_52, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_73, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
              }
              {
                ml_backend__ml_accurate_gc__Stmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_46));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_47));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_48));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_51));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_52));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_accurate_gc__Stmt_22 = ml_backend__ml_accurate_gc__Stmt0_20;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
            }
            break;
          case (MR_Integer) 2:
            {
              ml_backend__ml_accurate_gc__Stmt_22 = ml_backend__ml_accurate_gc__Stmt0_20;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_accurate_gc__Stmt_22 = ml_backend__ml_accurate_gc__Stmt0_20;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_accurate_gc__Stmt_22 = ml_backend__ml_accurate_gc__Stmt0_20;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
            }
            break;
          case (MR_Integer) 5:
            {
              ml_backend__ml_accurate_gc__Stmt_22 = ml_backend__ml_accurate_gc__Stmt0_20;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_accurate_gc__Ref_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Handler0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Handler_67;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_70;
              MR_Word ml_backend__ml_accurate_gc__Statement0_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Statement_82;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_81, &ml_backend__ml_accurate_gc__Statement_82, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_70);
              }
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_66, &ml_backend__ml_accurate_gc__Handler_67, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_70, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
              }
              {
                ml_backend__ml_accurate_gc__Stmt_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_65));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_82));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_22, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_67));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              ml_backend__ml_accurate_gc__Stmt_22 = ml_backend__ml_accurate_gc__Stmt0_20;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_20, (MR_Integer) 1)));

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_68, &ml_backend__ml_accurate_gc__Stmt_22, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
              }
            }
            break;
        }
        break;
    }
    {
      ml_backend__ml_accurate_gc__Statement_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_11, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement_11, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_21));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_accurate_gc__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FirstCond_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__LaterConds_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_63_63 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          MR_Word ml_backend__ml_accurate_gc__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Statements0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Statements_10;
          MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_44;

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_63_63, ml_backend__ml_accurate_gc__TypeCtorInfo_63_63, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[4], ml_backend__ml_accurate_gc__Statements0_9, &ml_backend__ml_accurate_gc__Statements_10, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_44);
          }
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_44);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_8));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_accurate_gc__Kind_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Statement0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Statement_14;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_13, &ml_backend__ml_accurate_gc__Statement_14, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_accurate_gc__Cond_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Then0_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__MaybeElse0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Then_18;
          MR_Word ml_backend__ml_accurate_gc__MaybeElse_19;
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_51;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Then0_16, &ml_backend__ml_accurate_gc__Then_18, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_51);
          }
          if ((ml_backend__ml_accurate_gc__MaybeElse0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ml_backend__ml_accurate_gc__MaybeElse_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_51;
            }
          else
            {
              MR_Word ml_backend__ml_accurate_gc__Statement0_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__MaybeElse0_17, (MR_Integer) 0)));
              MR_Word ml_backend__ml_accurate_gc__Statement_75;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_74, &ml_backend__ml_accurate_gc__Statement_75, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_51, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44);
              }
              {
                ml_backend__ml_accurate_gc__MaybeElse_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__MaybeElse_19, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_75));
              }
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_18));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_19));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              MR_Word ml_backend__ml_accurate_gc__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Val_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Range_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Cases0_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_accurate_gc__Default0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_accurate_gc__Cases_25;
              MR_Word ml_backend__ml_accurate_gc__Default_26;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49;
              MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_49;

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[5], ml_backend__ml_accurate_gc__Cases0_23, &ml_backend__ml_accurate_gc__Cases_25, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_49);
              }
              ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_49);
              switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Default0_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ml_backend__ml_accurate_gc__Default0_24)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        ml_backend__ml_accurate_gc__Default_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        ml_backend__ml_accurate_gc__Default_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_accurate_gc__Statement0_86 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_accurate_gc__Default0_24), (MR_Integer) 1);
                    MR_Word ml_backend__ml_accurate_gc__Statement_87;

                    {
                      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_86, &ml_backend__ml_accurate_gc__Statement_87, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44);
                    }
                    ml_backend__ml_accurate_gc__Default_26 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__Statement_87);
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_accurate_gc__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_21));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_22));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_25));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_26));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43;
            }
            break;
          case (MR_Integer) 2:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43;
            }
            break;
          case (MR_Integer) 3:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43;
            }
            break;
          case (MR_Integer) 4:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43;
            }
            break;
          case (MR_Integer) 5:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_accurate_gc__Ref_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Handler0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Handler_41;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46;
              MR_Word ml_backend__ml_accurate_gc__Statement0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Statement_58;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_57, &ml_backend__ml_accurate_gc__Statement_58, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46);
              }
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_40, &ml_backend__ml_accurate_gc__Handler_41, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_46, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_accurate_gc__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_39));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_58));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_41));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_42, ml_backend__ml_accurate_gc__Stmt_6, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_43, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_44);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv4_Case_6;
    MR_Word ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv4_Case_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv4_Case_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv3_STATE_VARIABLE_Fixup_13));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Statement_6;
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Statement_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Statement_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Info_12));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Statement0_5,
  MR_Word * ml_backend__ml_accurate_gc__Statement_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 0)));
    MR_Word ml_backend__ml_accurate_gc__Context_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Statement0_5, (MR_Integer) 1)));
    MR_Word ml_backend__ml_accurate_gc__Stmt_10;
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
    MR_Word ml_backend__ml_accurate_gc__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_accurate_gc__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
    MR_Word ml_backend__ml_accurate_gc__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_accurate_gc__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));

    {
      ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_15));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_18));
    }
    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_63_77 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
          MR_Word ml_backend__ml_accurate_gc__Defns_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Statements0_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Statements_26;
          MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Info_12;

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_63_77, ml_backend__ml_accurate_gc__TypeCtorInfo_63_77, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[2], ml_backend__ml_accurate_gc__Statements0_25, &ml_backend__ml_accurate_gc__Statements_26, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Info_12);
          }
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Info_12);
          {
            ml_backend__ml_accurate_gc__Stmt_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_10, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_24));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Statements_26));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_accurate_gc__Kind_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Rval_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Statement0_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Statement_30;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_29, &ml_backend__ml_accurate_gc__Statement_30, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
          }
          {
            ml_backend__ml_accurate_gc__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_10, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_27));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_28));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_30));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_accurate_gc__Cond_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Then0_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__MaybeElse0_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Then_34;
          MR_Word ml_backend__ml_accurate_gc__MaybeElse_35;
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_65;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Then0_32, &ml_backend__ml_accurate_gc__Then_34, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_65);
          }
          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_maybe_statement_4_p_0(ml_backend__ml_accurate_gc__MaybeElse0_33, &ml_backend__ml_accurate_gc__MaybeElse_35, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_51_65, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
          }
          {
            ml_backend__ml_accurate_gc__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_10, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_31));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_34));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_35));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_83 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              MR_Word ml_backend__ml_accurate_gc__Type_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Val_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Range_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Cases0_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 4)));
              MR_Word ml_backend__ml_accurate_gc__Default0_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 5)));
              MR_Word ml_backend__ml_accurate_gc__Cases_41;
              MR_Word ml_backend__ml_accurate_gc__Default_42;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_63;
              MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_63;

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_83, ml_backend__ml_accurate_gc__TypeCtorInfo_69_83, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[3], ml_backend__ml_accurate_gc__Cases0_39, &ml_backend__ml_accurate_gc__Cases_41, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_63);
              }
              ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_63 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_49_63);
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_40, &ml_backend__ml_accurate_gc__Default_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_63, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
              }
              {
                ml_backend__ml_accurate_gc__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_36));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_37));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_38));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_41));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_42));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              ml_backend__ml_accurate_gc__Stmt_10 = ml_backend__ml_accurate_gc__Stmt0_8;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
            }
            break;
          case (MR_Integer) 2:
            {
              ml_backend__ml_accurate_gc__Stmt_10 = ml_backend__ml_accurate_gc__Stmt0_8;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
            }
            break;
          case (MR_Integer) 3:
            {
              ml_backend__ml_accurate_gc__Stmt_10 = ml_backend__ml_accurate_gc__Stmt0_8;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
            }
            break;
          case (MR_Integer) 4:
            {
              ml_backend__ml_accurate_gc__Stmt_10 = ml_backend__ml_accurate_gc__Stmt0_8;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
            }
            break;
          case (MR_Integer) 5:
            {
              ml_backend__ml_accurate_gc__Stmt_10 = ml_backend__ml_accurate_gc__Stmt0_8;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_accurate_gc__Ref_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Handler0_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Handler_57;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_60;
              MR_Word ml_backend__ml_accurate_gc__Statement0_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Statement_72;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Statement0_71, &ml_backend__ml_accurate_gc__Statement_72, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_60);
              }
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_statement_4_p_0(ml_backend__ml_accurate_gc__Handler0_56, &ml_backend__ml_accurate_gc__Handler_57, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_46_60, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
              }
              {
                ml_backend__ml_accurate_gc__Stmt_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_55));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Statement_72));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt_10, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Handler_57));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              ml_backend__ml_accurate_gc__Stmt_10 = ml_backend__ml_accurate_gc__Stmt0_8;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_8, (MR_Integer) 1)));

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_58, &ml_backend__ml_accurate_gc__Stmt_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13_13, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_12);
              }
            }
            break;
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_accurate_gc__Statement_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_9));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;

    {
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc__IntroducedFrom__pred__ml_gen_make_type_info_var__425__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0(
  MR_Word ml_backend__ml_accurate_gc__Type_7,
  MR_Word ml_backend__ml_accurate_gc__Context_8,
  MR_Word * ml_backend__ml_accurate_gc__TypeInfoVar_9,
  MR_Word * ml_backend__ml_accurate_gc__TypeInfoGoals_10,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_26,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo0_12;
    MR_Word ml_backend__ml_accurate_gc__PredId_13;
    MR_Integer ml_backend__ml_accurate_gc__ProcId_14;
    MR_Word ml_backend__ml_accurate_gc__PredInfo0_15;
    MR_Word ml_backend__ml_accurate_gc__ProcInfo0_16;
    MR_Word ml_backend__ml_accurate_gc__PolyInfo0_17;
    MR_Word ml_backend__ml_accurate_gc__PolyInfo_18;
    MR_Word ml_backend__ml_accurate_gc__PolySpecs_19;
    MR_Word ml_backend__ml_accurate_gc__PredInfo_20;
    MR_Word ml_backend__ml_accurate_gc__ProcInfo_21;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo1_22;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_23;
    MR_Word ml_backend__ml_accurate_gc__VarSet_24;
    MR_Word ml_backend__ml_accurate_gc__VarTypes_25;
    MR_Word ml_backend__ml_accurate_gc__Var_28;
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_33_33;
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_34_34;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_26, &ml_backend__ml_accurate_gc__ModuleInfo0_12);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_26, &ml_backend__ml_accurate_gc__PredId_13);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_26, &ml_backend__ml_accurate_gc__ProcId_14);
    }
    {
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_accurate_gc__ModuleInfo0_12, ml_backend__ml_accurate_gc__PredId_13, ml_backend__ml_accurate_gc__ProcId_14, &ml_backend__ml_accurate_gc__PredInfo0_15, &ml_backend__ml_accurate_gc__ProcInfo0_16);
    }
    {
      check_hlds__polymorphism__create_poly_info_4_p_0(ml_backend__ml_accurate_gc__ModuleInfo0_12, ml_backend__ml_accurate_gc__PredInfo0_15, ml_backend__ml_accurate_gc__ProcInfo0_16, &ml_backend__ml_accurate_gc__PolyInfo0_17);
    }
    {
      check_hlds__polymorphism__polymorphism_make_type_info_var_6_p_0(ml_backend__ml_accurate_gc__Type_7, ml_backend__ml_accurate_gc__Context_8, ml_backend__ml_accurate_gc__TypeInfoVar_9, ml_backend__ml_accurate_gc__TypeInfoGoals_10, ml_backend__ml_accurate_gc__PolyInfo0_17, &ml_backend__ml_accurate_gc__PolyInfo_18);
    }
    {
      check_hlds__polymorphism__poly_info_extract_7_p_0(ml_backend__ml_accurate_gc__PolyInfo_18, &ml_backend__ml_accurate_gc__PolySpecs_19, ml_backend__ml_accurate_gc__PredInfo0_15, &ml_backend__ml_accurate_gc__PredInfo_20, ml_backend__ml_accurate_gc__ProcInfo0_16, &ml_backend__ml_accurate_gc__ProcInfo_21, &ml_backend__ml_accurate_gc__ModuleInfo1_22);
    }
    {
      ml_backend__ml_accurate_gc__Var_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_28, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_28, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__PolySpecs_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_accurate_gc__Var_28, (MR_String) "ml_backend.ml_accurate_gc", (MR_String) "predicate \140ml_backend.ml_accurate_gc.ml_gen_make_type_info_var\'/6", (MR_String) "got errors while making type_info_var");
    }
    {
      hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(ml_backend__ml_accurate_gc__PredId_13, ml_backend__ml_accurate_gc__ProcId_14, ml_backend__ml_accurate_gc__PredInfo_20, ml_backend__ml_accurate_gc__ProcInfo_21, ml_backend__ml_accurate_gc__ModuleInfo1_22, &ml_backend__ml_accurate_gc__ModuleInfo_23);
    }
    {
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_accurate_gc__ProcInfo_21, &ml_backend__ml_accurate_gc__VarSet_24);
    }
    {
      hlds__hlds_pred__proc_info_get_vartypes_2_p_0(ml_backend__ml_accurate_gc__ProcInfo_21, &ml_backend__ml_accurate_gc__VarTypes_25);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(ml_backend__ml_accurate_gc__ModuleInfo_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_26, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_33_33);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_varset_3_p_0(ml_backend__ml_accurate_gc__VarSet_24, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_33_33, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_34_34);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_set_var_types_3_p_0(ml_backend__ml_accurate_gc__VarTypes_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_34_34, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_27);
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
  MR_Word ml_backend__ml_accurate_gc__Info_7,
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__Type_9,
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__TraceStatement_12)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_13;
    MR_Word ml_backend__ml_accurate_gc__MLDS_Type_14;
    MR_Word ml_backend__ml_accurate_gc__VarLval_15;
    MR_Integer ml_backend__ml_accurate_gc__ProcId_19;
    MR_Word ml_backend__ml_accurate_gc__PredModule_20;
    MR_Word ml_backend__ml_accurate_gc__MLDS_Module_21;
    MR_Word ml_backend__ml_accurate_gc__ProcLabel_22;
    MR_Word ml_backend__ml_accurate_gc__QualProcLabel_23;
    MR_Word ml_backend__ml_accurate_gc__CPointerType_24;
    MR_Word ml_backend__ml_accurate_gc__ArgTypes_25;
    MR_Word ml_backend__ml_accurate_gc__Signature_26;
    MR_Word ml_backend__ml_accurate_gc__FuncAddr_27;
    MR_Word ml_backend__ml_accurate_gc__CastVarAddr_28;
    MR_Word ml_backend__ml_accurate_gc__TraceStmt_29;
    MR_Word ml_backend__ml_accurate_gc__Var_35;
    MR_Word ml_backend__ml_accurate_gc__Var_38;
    MR_Word ml_backend__ml_accurate_gc__Var_39;
    MR_Word ml_backend__ml_accurate_gc__Var_41;
    MR_Word ml_backend__ml_accurate_gc__Var_44;
    MR_Word ml_backend__ml_accurate_gc__Var_45;
    MR_Word ml_backend__ml_accurate_gc__Var_46;
    MR_Word ml_backend__ml_accurate_gc__Var_47;
    MR_Word ml_backend__ml_accurate_gc__Var_49;
    MR_Word ml_backend__ml_accurate_gc__Var_50;
    MR_Word ml_backend__ml_accurate_gc__Var_54;
    MR_Word ml_backend__ml_accurate_gc__Var_55;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__Info_7, &ml_backend__ml_accurate_gc__ModuleInfo_13);
    }
    {
      ml_backend__ml_accurate_gc__MLDS_Type_14 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_13, ml_backend__ml_accurate_gc__Type_9);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_lval_4_p_0(ml_backend__ml_accurate_gc__Info_7, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__MLDS_Type_14, &ml_backend__ml_accurate_gc__VarLval_15);
    }
    {
      ml_backend__ml_accurate_gc__ProcId_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
    }
    {
      ml_backend__ml_accurate_gc__PredModule_20 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
    }
    {
      ml_backend__ml_accurate_gc__MLDS_Module_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__PredModule_20);
    }
    {
      ml_backend__ml_accurate_gc__ProcLabel_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcId_19));
    }
    {
      ml_backend__ml_accurate_gc__QualProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Module_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcLabel_22));
    }
    {
      ml_backend__ml_accurate_gc__Var_35 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ml_backend__ml_accurate_gc__Var_39 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ml_backend__ml_accurate_gc__Var_38 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_accurate_gc__Var_39);
    }
    {
      ml_backend__ml_accurate_gc__CPointerType_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_35));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[4])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_38));
    }
    {
      ml_backend__ml_accurate_gc__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_41, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__ArgTypes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_41));
    }
    {
      ml_backend__ml_accurate_gc__Signature_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgTypes_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__Var_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_45, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__QualProcLabel_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_45, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
    }
    {
      ml_backend__ml_accurate_gc__Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_44, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_45));
    }
    {
      ml_backend__ml_accurate_gc__FuncAddr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_44));
    }
    {
      ml_backend__ml_accurate_gc__Var_46 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_46, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
    }
    {
      ml_backend__ml_accurate_gc__Var_47 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_47, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_47, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_15));
    }
    {
      ml_backend__ml_accurate_gc__CastVarAddr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_46));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_47));
    }
    {
      ml_backend__ml_accurate_gc__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_50, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CastVarAddr_28));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_49, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_49, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_50));
    }
    {
      ml_backend__ml_accurate_gc__Var_54 = mercury__set__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0);
    }
    {
      ml_backend__ml_accurate_gc__TraceStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FuncAddr_27));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_49));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 6) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TraceStmt_29, 7) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_54));
    }
    {
      ml_backend__ml_accurate_gc__Var_55 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_accurate_gc__Context_11);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_accurate_gc__TraceStatement_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TraceStmt_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_55));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_3(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv2_HeadVar__2_2;

    {
      ml_backend__ml_accurate_gc__conv2_HeadVar__2_2 = ml_backend__mlds__wrap_data_defn_1_f_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv2_HeadVar__2_2));
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_LambdaHeadVar__2_53;

    {
      ml_backend__ml_accurate_gc__conv1_LambdaHeadVar__2_53 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__351__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_LambdaHeadVar__2_53));
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_accurate_gc__wrapper_arg_2;
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv0_LambdaHeadVar__2_45;

    {
      ml_backend__ml_accurate_gc__conv0_LambdaHeadVar__2_45 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__313__1_1_f_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_LambdaHeadVar__2_45));
    return ml_backend__ml_accurate_gc__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GC_TraceCode_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_69_69;
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_71_71;
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_21_91;
    MR_Word ml_backend__ml_accurate_gc__TypeInfoVar_14;
    MR_Word ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15;
    MR_Word ml_backend__ml_accurate_gc__NonLocalsList_16;
    MR_Word ml_backend__ml_accurate_gc__NonLocals_19;
    MR_Word ml_backend__ml_accurate_gc__InstMapDelta_20;
    MR_Word ml_backend__ml_accurate_gc__GoalInfo_21;
    MR_Word ml_backend__ml_accurate_gc__Conj_22;
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24;
    MR_Word ml_backend__ml_accurate_gc__ModuleName_25;
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26;
    MR_Word ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27;
    MR_Word ml_backend__ml_accurate_gc__TypeInfoLval_28;
    MR_Word ml_backend__ml_accurate_gc__MLDS_TraceStatement_29;
    MR_Word ml_backend__ml_accurate_gc__VarSet_30;
    MR_Word ml_backend__ml_accurate_gc__VarTypes_31;
    MR_Word ml_backend__ml_accurate_gc__MLDS_Context_32;
    MR_Word ml_backend__ml_accurate_gc__GenLocalVarDecl_33;
    MR_Word ml_backend__ml_accurate_gc__NonLocalVarList_38;
    MR_Word ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39;
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42;
    MR_Word ml_backend__ml_accurate_gc__Var_50;
    MR_Word ml_backend__ml_accurate_gc__Var_51;
    MR_Word ml_backend__ml_accurate_gc__Var_57;
    MR_Word ml_backend__ml_accurate_gc__Var_59;
    MR_Word ml_backend__ml_accurate_gc__Var_60;
    MR_Word ml_backend__ml_accurate_gc__Var_61;
    MR_Word ml_backend__ml_accurate_gc__Stmt0_79;
    MR_Word ml_backend__ml_accurate_gc__Context_80;
    MR_Word ml_backend__ml_accurate_gc__Info0_81;
    MR_Word ml_backend__ml_accurate_gc__Stmt_82;
    MR_Word ml_backend__ml_accurate_gc__Info_83;
    MR_Word ml_backend__ml_accurate_gc__Var_84;
    MR_Word ml_backend__ml_accurate_gc__Var_85;
    MR_Word ml_backend__ml_accurate_gc__Var_87;
    MR_Word ml_backend__ml_accurate_gc__Var_88;
    MR_Word ml_backend__ml_accurate_gc__Var_89;
    MR_Word ml_backend__ml_accurate_gc__Var_90;

    {
      ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0(ml_backend__ml_accurate_gc__ActualType_10, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_40, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42);
    }
    {
      ml_backend__ml_accurate_gc__NonLocalsList_16 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[1], (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[0], ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15);
    }
    ml_backend__ml_accurate_gc__TypeCtorInfo_69_69 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ml_backend__ml_accurate_gc__NonLocals_19 = parse_tree__set_of_var__union_list_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__NonLocalsList_16);
    }
    {
      ml_backend__ml_accurate_gc__InstMapDelta_20 = hlds__instmap__instmap_delta_bind_var_1_f_0(ml_backend__ml_accurate_gc__TypeInfoVar_14);
    }
    {
      hlds__hlds_goal__goal_info_init_5_p_0(ml_backend__ml_accurate_gc__NonLocals_19, ml_backend__ml_accurate_gc__InstMapDelta_20, (MR_Integer) 0, (MR_Integer) 2, &ml_backend__ml_accurate_gc__GoalInfo_21);
    }
    {
      hlds__hlds_goal__conj_list_to_goal_3_p_0(ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__GoalInfo_21, &ml_backend__ml_accurate_gc__Conj_22);
    }
    {
      ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_accurate_gc__Conj_22, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_42_42, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__ModuleInfo_24);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_accurate_gc__ModuleInfo_24, &ml_backend__ml_accurate_gc__ModuleName_25);
    }
    {
      ml_backend__ml_accurate_gc__Var_50 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__ModuleName_25);
    }
    ml_backend__ml_accurate_gc__Stmt0_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, (MR_Integer) 0)));
    ml_backend__ml_accurate_gc__Context_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement0_23, (MR_Integer) 1)));
    ml_backend__ml_accurate_gc__TypeCtorInfo_21_91 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0;
    {
      ml_backend__ml_accurate_gc__Var_84 = mercury__cord__init_0_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_21_91);
    }
    {
      ml_backend__ml_accurate_gc__Var_85 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_accurate_gc__Info0_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_81, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_50));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_81, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_80));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_81, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_84));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_81, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_85));
    }
    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_79, &ml_backend__ml_accurate_gc__Stmt_82, ml_backend__ml_accurate_gc__Info0_81, &ml_backend__ml_accurate_gc__Info_83);
    }
    {
      ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_82));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_80));
    }
    ml_backend__ml_accurate_gc__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_83, (MR_Integer) 0)));
    ml_backend__ml_accurate_gc__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_83, (MR_Integer) 1)));
    ml_backend__ml_accurate_gc__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_83, (MR_Integer) 2)));
    ml_backend__ml_accurate_gc__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_83, (MR_Integer) 3)));
    {
      ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27 = mercury__cord__to_list_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_21_91, ml_backend__ml_accurate_gc__Var_87);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__TypeInfoLval_28);
    }
    {
      ml_backend__ml_accurate_gc__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_51, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoLval_28));
    }
    {
      ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__Var_51, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__MLDS_TraceStatement_29);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__VarSet_30);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41, &ml_backend__ml_accurate_gc__VarTypes_31);
    }
    {
      ml_backend__ml_accurate_gc__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_accurate_gc__Context_11);
    }
    {
      ml_backend__ml_accurate_gc__GenLocalVarDecl_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__ModuleInfo_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__VarSet_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__VarTypes_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_33, 6) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Context_32));
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_69_69, ml_backend__ml_accurate_gc__NonLocals_19, &ml_backend__ml_accurate_gc__NonLocalVarList_38);
    }
    ml_backend__ml_accurate_gc__TypeCtorInfo_71_71 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0;
    {
      ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[0], ml_backend__ml_accurate_gc__TypeCtorInfo_71_71, ml_backend__ml_accurate_gc__GenLocalVarDecl_33, ml_backend__ml_accurate_gc__NonLocalVarList_38);
    }
    {
      ml_backend__ml_accurate_gc__Var_59 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_71_71, ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27, ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_39);
    }
    {
      ml_backend__ml_accurate_gc__Var_57 = mercury__list__map_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_71_71, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_4[1], ml_backend__ml_accurate_gc__Var_59);
    }
    {
      ml_backend__ml_accurate_gc__Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_61, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TraceStatement_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_60, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TypeInfoStatement_26));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_60, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_61));
    }
    {
      *ml_backend__ml_accurate_gc__GC_TraceCode_12 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_accurate_gc__Var_57, ml_backend__ml_accurate_gc__Var_60, ml_backend__ml_accurate_gc__Context_11);
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_14;
    MR_Word ml_backend__ml_accurate_gc__MLDS_DeclType_15;
    MR_Word ml_backend__ml_accurate_gc__PredId_16;
    MR_Word ml_backend__ml_accurate_gc__PredModule_17;
    MR_String ml_backend__ml_accurate_gc__PredName_18;
    MR_Integer ml_backend__ml_accurate_gc__PredArity_19;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, &ml_backend__ml_accurate_gc__ModuleInfo_14);
    }
    {
      ml_backend__ml_accurate_gc__MLDS_DeclType_15 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_14, ml_backend__ml_accurate_gc__DeclType_9);
    }
    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__MLDS_DeclType_15)) {
      default:
        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ml_backend__ml_accurate_gc__MLDS_DeclType_15)) {
          default:
            ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCategory_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc___Type_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 2)));

          switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeCategory_32)) {
            default:
              ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
              break;
            case (MR_Integer) 0:
              switch (MR_unmkbody(ml_backend__ml_accurate_gc__TypeCategory_32)) {
                default:
                  ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 3:
                  ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_accurate_gc__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)));

                ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Var_61 == (MR_Integer) 4);
              }
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ml_backend__ml_accurate_gc__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 1)));

                    switch (ml_backend__ml_accurate_gc__Var_62) {
                      default:
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 0:
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 2:
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ml_backend__ml_accurate_gc__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TypeCategory_32, (MR_Integer) 1)));

                    switch (ml_backend__ml_accurate_gc__Var_63) {
                      default:
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 2:
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                        break;
                      case (MR_Integer) 1:
                        ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                        break;
                    }
                  }
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 0)))) {
          default:
            ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ml_backend__ml_accurate_gc__Category_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 1)));
              MR_Integer ml_backend__ml_accurate_gc__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__MLDS_DeclType_15, (MR_Integer) 2)));

              ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Category_36 == (MR_Integer) 4);
              if (ml_backend__ml_accurate_gc__succeeded)
                ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
              else
                ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (ml_backend__ml_accurate_gc__succeeded)
      {
        {
          ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, &ml_backend__ml_accurate_gc__PredId_16);
        }
        {
          hlds__hlds_module__predicate_id_5_p_0(ml_backend__ml_accurate_gc__ModuleInfo_14, ml_backend__ml_accurate_gc__PredId_16, &ml_backend__ml_accurate_gc__PredModule_17, &ml_backend__ml_accurate_gc__PredName_18, &ml_backend__ml_accurate_gc__PredArity_19);
        }
        {
          ml_backend__ml_accurate_gc__succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(ml_backend__ml_accurate_gc__PredModule_17, ml_backend__ml_accurate_gc__PredName_18, ml_backend__ml_accurate_gc__PredArity_19);
        }
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
      }
    if (ml_backend__ml_accurate_gc__succeeded)
      {
        MR_Word ml_backend__ml_accurate_gc__GC_TraceCode_23;

        if (((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HowToGetTypeInfo_10)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HowToGetTypeInfo_10, (MR_Integer) 0)));

            {
              ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__TypeInfoRval_24, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__GC_TraceCode_23);
            }
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
          }
        else
          {
            MR_Word ml_backend__ml_accurate_gc__ActualType0_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_10, (MR_Integer) 0)));
            MR_Word ml_backend__ml_accurate_gc__ActualType_22;
            MR_Word ml_backend__ml_accurate_gc__ActualType1_21;
            MR_Word ml_backend__ml_accurate_gc__TypeName_66;
            MR_Word ml_backend__ml_accurate_gc__PrivateBuiltin_69;
            MR_String ml_backend__ml_accurate_gc__Name_70;
            MR_Word ml_backend__ml_accurate_gc__Var_71;
            MR_Word ml_backend__ml_accurate_gc__Var_67;
            MR_Word ml_backend__ml_accurate_gc__Var_68;
            MR_Integer ml_backend__ml_accurate_gc__slot_0;
            MR_String ml_backend__ml_accurate_gc__str_1;

            ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__ActualType0_20)) == (MR_mktag((MR_Integer) 1)));
            if (ml_backend__ml_accurate_gc__succeeded)
              {
                ml_backend__ml_accurate_gc__TypeName_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 0)));
                ml_backend__ml_accurate_gc__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 1)));
                ml_backend__ml_accurate_gc__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ActualType0_20, (MR_Integer) 2)));
                ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__TypeName_66)) == (MR_mktag((MR_Integer) 1)));
                if (ml_backend__ml_accurate_gc__succeeded)
                  {
                    ml_backend__ml_accurate_gc__PrivateBuiltin_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeName_66, (MR_Integer) 0)));
                    ml_backend__ml_accurate_gc__Name_70 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__TypeName_66, (MR_Integer) 1)));
                    {
                      ml_backend__ml_accurate_gc__Var_71 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    }
                    {
                      ml_backend__ml_accurate_gc__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ml_backend__ml_accurate_gc__PrivateBuiltin_69, ml_backend__ml_accurate_gc__Var_71);
                    }
                    if (ml_backend__ml_accurate_gc__succeeded)
                      {
                        /* hashed string jump switch */
                        /* compute the hash value of the input string */
                        ml_backend__ml_accurate_gc__slot_0 = ((MR_hash_string5(ml_backend__ml_accurate_gc__Name_70)) & (MR_Integer) 15);
                        /* hash chain loop */
                        do
                          {
                            /* lookup the string for this hash slot */
                            ml_backend__ml_accurate_gc__str_1 = ((&ml_backend__ml_accurate_gc_vector_common_2[0 + ml_backend__ml_accurate_gc__slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_0;
                            /* did we find a match? */
                            if ((((ml_backend__ml_accurate_gc__str_1 != NULL)) && ((strcmp(ml_backend__ml_accurate_gc__str_1, ml_backend__ml_accurate_gc__Name_70) == 0))))
                              {
                                /* we found a match; dispatch to the corresponding code */
                                switch (ml_backend__ml_accurate_gc__slot_0) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      /* case "zero_base_typeclass_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      /* case "zero_type_ctor_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 2:
                                    {
                                      /* case "type_ctor_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 5:
                                    {
                                      /* case "typeclass_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 8:
                                    {
                                      /* case "type_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 9:
                                    {
                                      /* case "zero_typeclass_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 10:
                                    {
                                      /* case "zero_type_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                  case (MR_Integer) 14:
                                    {
                                      /* case "base_typeclass_info" */
                                      {
                                        ml_backend__ml_accurate_gc__ActualType1_21 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                                      }
                                      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
                                    }
                                    break;
                                }
                                /* jump out of search loop */
                                goto label_0;
                              }
                            else
                              {
                                /* no match yet, so get next slot in hash chain */
                                ml_backend__ml_accurate_gc__slot_0 = ((&ml_backend__ml_accurate_gc_vector_common_2[0 + ml_backend__ml_accurate_gc__slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_2_0__vct_2_f_1;
                              }
                          }
                        while ((ml_backend__ml_accurate_gc__slot_0 >= (MR_Integer) 0));
                        ml_backend__ml_accurate_gc__succeeded = MR_FALSE;
                      label_0:;
                      }
                  }
              }
            if (ml_backend__ml_accurate_gc__succeeded)
              ml_backend__ml_accurate_gc__ActualType_22 = ml_backend__ml_accurate_gc__ActualType1_21;
            else
              ml_backend__ml_accurate_gc__ActualType_22 = ml_backend__ml_accurate_gc__ActualType0_20;
            {
              ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__ActualType_22, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__GC_TraceCode_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);
            }
          }
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_accurate_gc__GC_TraceCode_23);
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
      }
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__GC_14;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, &ml_backend__ml_accurate_gc__GC_14);
    }
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_14 == (MR_Integer) 5);
    if (ml_backend__ml_accurate_gc__succeeded)
      {
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_15;

        {
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
        }
        {
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStatement_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
      }
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__ActualType_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__GC_14;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, &ml_backend__ml_accurate_gc__GC_14);
    }
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_14 == (MR_Integer) 5);
    if (ml_backend__ml_accurate_gc__succeeded)
      {
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_15;

        {
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ActualType_10));
        }
        {
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStatement_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStatement_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
      }
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_7,
  MR_Word ml_backend__ml_accurate_gc__Type_8,
  MR_Word ml_backend__ml_accurate_gc__Context_9,
  MR_Word * ml_backend__ml_accurate_gc__GCStatement_10,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__GC_24;

    {
      ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, &ml_backend__ml_accurate_gc__GC_24);
    }
    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__GC_24 == (MR_Integer) 5);
    if (ml_backend__ml_accurate_gc__succeeded)
      {
        MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_25;

        {
          ml_backend__ml_accurate_gc__HowToGetTypeInfo_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_8));
        }
        {
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_7, ml_backend__ml_accurate_gc__Type_8, ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, ml_backend__ml_accurate_gc__Context_9, ml_backend__ml_accurate_gc__GCStatement_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13);
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStatement_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12;
      }
  }
}

void mercury__ml_backend__ml_accurate_gc__init(void)
{
}

void mercury__ml_backend__ml_accurate_gc__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_how_to_get_type_info_0);
}

void mercury__ml_backend__ml_accurate_gc__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_accurate_gc__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_accurate_gc. */
