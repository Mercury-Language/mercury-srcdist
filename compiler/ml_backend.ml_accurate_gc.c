/*
** Automatically generated from `ml_accurate_gc.m'
** by the Mercury compiler,
** version rotd-2017-07-15
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
#include "check_hlds.proc_requests.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_data_defn_0;

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[3];

static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[3];

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
ml_backend__ml_accurate_gc__IntroducedFrom__pred__ml_gen_make_type_info_var__422__1_2_p_0(
  MR_Word ml_backend__ml_accurate_gc__PolySpecs_19,
  MR_Word ml_backend__ml_accurate_gc__HeadVar__2_32);

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__349__1_5_f_0(
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_51);

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__313__1_1_f_0(
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_43);

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

static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
  MR_Word ml_backend__ml_accurate_gc__Context_10,
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_12,
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Case0_5,
  MR_Word * ml_backend__ml_accurate_gc__Case_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStmt_12,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26);

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
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_39,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Default0_5,
  MR_Word * ml_backend__ml_accurate_gc__Default_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_10,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_11);

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
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_5_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_5_p_0(
  MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_6,
  MR_Word ml_backend__ml_accurate_gc__Context_7,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_8,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37);

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
  MR_Word * ml_backend__ml_accurate_gc__TraceStmt_12);


static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[8][2];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_2[1][6];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[3][5];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[2][1];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][10];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[2][7];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[4][3];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[1][9];


/* sealed */ struct ml_backend__ml_accurate_gc__vector_common_type_9_0_s {
  const MR_String ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_0;
  const MR_Integer ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_9_0_s ml_backend__ml_accurate_gc_vector_common_9[16];



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
    ((MR_Box) (MR_Word) ((MR_Integer) 11)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[6])))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_2[1][6] = {
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

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[2][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[7])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
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

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_6[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_6[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[2])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0))
  },
};


static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_9_0_s ml_backend__ml_accurate_gc_vector_common_9[16] = {
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



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

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

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_data_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[3] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_data_defn_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[3] = {
  (MR_String) "fnoi_module_name",
  (MR_String) "fnoi_locals",
  (MR_String) "fnoi_next_id"
};

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 = {
  (MR_String) "fixup_newobj_info",
  (MR_Integer) 3,
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
ml_backend__ml_accurate_gc__IntroducedFrom__pred__ml_gen_make_type_info_var__422__1_2_p_0(
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
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__349__1_5_f_0(
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24,
  MR_Word ml_backend__ml_accurate_gc__VarSet_30,
  MR_Word ml_backend__ml_accurate_gc__VarTypes_31,
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_51)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__2_52;
    MR_Word ml_backend__ml_accurate_gc__LocalVarName_35;
    MR_Word ml_backend__ml_accurate_gc__LocalVarType_36;
    MR_Word ml_backend__ml_accurate_gc__Var_53;
    MR_Word ml_backend__ml_accurate_gc__Var_54;

    {
      ml_backend__ml_accurate_gc__LocalVarName_35 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_accurate_gc__VarSet_30, ml_backend__ml_accurate_gc__LambdaHeadVar__1_51);
    }
    {
      hlds__vartypes__lookup_var_type_3_p_0(ml_backend__ml_accurate_gc__VarTypes_31, ml_backend__ml_accurate_gc__LambdaHeadVar__1_51, &ml_backend__ml_accurate_gc__LocalVarType_36);
    }
    {
      ml_backend__ml_accurate_gc__Var_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_53, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__LocalVarName_35));
    }
    {
      ml_backend__ml_accurate_gc__Var_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_accurate_gc__ModuleInfo_24, ml_backend__ml_accurate_gc__LocalVarType_36);
    }
    {
      ml_backend__ml_accurate_gc__LambdaHeadVar__2_52 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(ml_backend__ml_accurate_gc__Var_53, ml_backend__ml_accurate_gc__Var_54, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__Context_11);
    }
    return ml_backend__ml_accurate_gc__LambdaHeadVar__2_52;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__313__1_1_f_0(
  MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__1_43)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__LambdaHeadVar__2_44;
    MR_Word ml_backend__ml_accurate_gc__GI_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__LambdaHeadVar__1_43, (MR_Integer) 1)));
    MR_Word ml_backend__ml_accurate_gc___GX_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__LambdaHeadVar__1_43, (MR_Integer) 0)));

    {
      ml_backend__ml_accurate_gc__LambdaHeadVar__2_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(ml_backend__ml_accurate_gc__GI_64);
    }
    return ml_backend__ml_accurate_gc__LambdaHeadVar__2_44;
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
            MR_Word ml_backend__ml_accurate_gc__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

            {
              ml_backend__mlds____Compare____mlds_rval_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__Var_16, ml_backend__ml_accurate_gc__ArgY1_11);
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
            MR_Word ml_backend__ml_accurate_gc__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));

            {
              parse_tree__prog_data____Compare____mer_type_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__Var_17, ml_backend__ml_accurate_gc__ArgY1_5);
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
        MR_Word ml_backend__ml_accurate_gc__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__ArgY1_6;

        ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (ml_backend__ml_accurate_gc__succeeded)
          {
            ml_backend__ml_accurate_gc__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
            {
              ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_accurate_gc__ArgX1_5, ml_backend__ml_accurate_gc__ArgY1_6);
            }
          }
      }
    else
      {
        MR_Word ml_backend__ml_accurate_gc__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__ArgY1_4;

        ml_backend__ml_accurate_gc__succeeded = ((MR_tag((MR_Word) ml_backend__ml_accurate_gc__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ml_backend__ml_accurate_gc__succeeded)
          {
            ml_backend__ml_accurate_gc__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
            {
              ml_backend__ml_accurate_gc__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_accurate_gc__ArgX1_3, ml_backend__ml_accurate_gc__ArgY1_4);
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
    MR_Integer ml_backend__ml_accurate_gc__CastX_12 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;
    MR_Integer ml_backend__ml_accurate_gc__CastY_13 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__3_3;

    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_12 == ml_backend__ml_accurate_gc__CastY_13);
    if (ml_backend__ml_accurate_gc__succeeded)
      *ml_backend__ml_accurate_gc__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_accurate_gc__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__Var_10;

        {
          ml_backend__mlds____Compare____mlds_module_name_0_0(&ml_backend__ml_accurate_gc__Var_10, ml_backend__ml_accurate_gc__ArgX1_4, ml_backend__ml_accurate_gc__ArgY1_5);
        }
        ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Var_10 == (MR_Integer) 0);
        ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
        if (ml_backend__ml_accurate_gc__succeeded)
          *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__Var_10;
        else
          {
            MR_Word ml_backend__ml_accurate_gc__Var_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[3], &ml_backend__ml_accurate_gc__Var_11, ((MR_Box) (ml_backend__ml_accurate_gc__ArgX2_6)), ((MR_Box) (ml_backend__ml_accurate_gc__ArgY2_7)));
            }
            ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__Var_11 == (MR_Integer) 0);
            ml_backend__ml_accurate_gc__succeeded = !(ml_backend__ml_accurate_gc__succeeded);
            if (ml_backend__ml_accurate_gc__succeeded)
              *ml_backend__ml_accurate_gc__HeadVar__1_1 = ml_backend__ml_accurate_gc__Var_11;
            else
              {
                mercury__counter____Compare____counter_0_0(ml_backend__ml_accurate_gc__HeadVar__1_1, ml_backend__ml_accurate_gc__ArgX3_8, ml_backend__ml_accurate_gc__ArgY3_9);
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
    MR_Integer ml_backend__ml_accurate_gc__CastX_9 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__1_1;
    MR_Integer ml_backend__ml_accurate_gc__CastY_10 = (MR_Integer) ml_backend__ml_accurate_gc__HeadVar__2_2;

    ml_backend__ml_accurate_gc__succeeded = (ml_backend__ml_accurate_gc__CastX_9 == ml_backend__ml_accurate_gc__CastY_10);
    if (ml_backend__ml_accurate_gc__succeeded)
      ml_backend__ml_accurate_gc__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_accurate_gc__TypeInfo_12_12;
        MR_Word ml_backend__ml_accurate_gc__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_accurate_gc__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_accurate_gc__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_accurate_gc__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__HeadVar__2_2, (MR_Integer) 2)));

        {
          ml_backend__ml_accurate_gc__succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ml_backend__ml_accurate_gc__ArgX1_3, ml_backend__ml_accurate_gc__ArgY1_4);
        }
        if (ml_backend__ml_accurate_gc__succeeded)
          {
            ml_backend__ml_accurate_gc__TypeInfo_12_12 = (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[3];
            {
              ml_backend__ml_accurate_gc__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_accurate_gc__TypeInfo_12_12, ((MR_Box) (ml_backend__ml_accurate_gc__ArgX2_5)), ((MR_Box) (ml_backend__ml_accurate_gc__ArgY2_6)));
            }
            if (ml_backend__ml_accurate_gc__succeeded)
              {
                ml_backend__ml_accurate_gc__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_accurate_gc__ArgX3_7, ml_backend__ml_accurate_gc__ArgY3_8);
              }
          }
      }
    return ml_backend__ml_accurate_gc__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__PointerType_8,
  MR_Word ml_backend__ml_accurate_gc__PointerRval_9,
  MR_Word ml_backend__ml_accurate_gc__Context_10,
  MR_Word ml_backend__ml_accurate_gc__ArgRval_11,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_12,
  MR_Integer ml_backend__ml_accurate_gc__FieldNum_13,
  MR_Integer * ml_backend__ml_accurate_gc__HeadVar__7_7)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__FieldId_14;
    MR_Word ml_backend__ml_accurate_gc__Field_17;
    MR_Word ml_backend__ml_accurate_gc__Var_19;
    MR_Word ml_backend__ml_accurate_gc__Var_20;
    MR_Word ml_backend__ml_accurate_gc__Var_22;

    *ml_backend__ml_accurate_gc__HeadVar__7_7 = (ml_backend__ml_accurate_gc__FieldNum_13 + (MR_Integer) 1);
    {
      ml_backend__ml_accurate_gc__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_20, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldNum_13));
    }
    {
      ml_backend__ml_accurate_gc__Var_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_19, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_20));
    }
    {
      ml_backend__ml_accurate_gc__FieldId_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__FieldId_14, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_19));
    }
    {
      ml_backend__ml_accurate_gc__Field_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_4[1])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerRval_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FieldId_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Field_17, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_8));
    }
    {
      ml_backend__ml_accurate_gc__Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_22, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Field_17));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgRval_11));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_accurate_gc__Stmt_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_22));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
    }
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
    MR_Word ml_backend__ml_accurate_gc__Stmt0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Case0_5, (MR_Integer) 2)));
    MR_Word ml_backend__ml_accurate_gc__Stmt_11;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_10, &ml_backend__ml_accurate_gc__Stmt_11, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_13);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_accurate_gc__Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__FirstCond_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__LaterConds_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_11));
    }
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__TypeInfoRval_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStmt_12,
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
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStmt_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStmt_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
  MR_Word * ml_backend__ml_accurate_gc__GCStmt_12,
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
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__HowToGetTypeInfo_15, ml_backend__ml_accurate_gc__Context_11, ml_backend__ml_accurate_gc__GCStmt_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17);
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStmt_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_17 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_16;
      }
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_7,
  MR_Word ml_backend__ml_accurate_gc__Type_8,
  MR_Word ml_backend__ml_accurate_gc__Context_9,
  MR_Word * ml_backend__ml_accurate_gc__GCStmt_10,
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
          ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(ml_backend__ml_accurate_gc__VarName_7, ml_backend__ml_accurate_gc__Type_8, ml_backend__ml_accurate_gc__HowToGetTypeInfo_25, ml_backend__ml_accurate_gc__Context_9, ml_backend__ml_accurate_gc__GCStmt_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13);
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStmt_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_13 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_12;
      }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
  MR_Word ml_backend__ml_accurate_gc__VarName_8,
  MR_Word ml_backend__ml_accurate_gc__DeclType_9,
  MR_Word ml_backend__ml_accurate_gc__HowToGetTypeInfo_10,
  MR_Word ml_backend__ml_accurate_gc__Context_11,
  MR_Word * ml_backend__ml_accurate_gc__GCStmt_12,
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
                            ml_backend__ml_accurate_gc__str_1 = ((&ml_backend__ml_accurate_gc_vector_common_9[0 + ml_backend__ml_accurate_gc__slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_0;
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
                                ml_backend__ml_accurate_gc__slot_0 = ((&ml_backend__ml_accurate_gc_vector_common_9[0 + ml_backend__ml_accurate_gc__slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_1;
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
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_accurate_gc__GCStmt_12 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__GC_TraceCode_23));
        }
      }
    else
      {
        *ml_backend__ml_accurate_gc__GCStmt_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_26 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_25;
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
    MR_Word ml_backend__ml_accurate_gc__conv1_LambdaHeadVar__2_52;

    {
      ml_backend__ml_accurate_gc__conv1_LambdaHeadVar__2_52 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__349__1_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_LambdaHeadVar__2_52));
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
    MR_Word ml_backend__ml_accurate_gc__conv0_LambdaHeadVar__2_44;

    {
      ml_backend__ml_accurate_gc__conv0_LambdaHeadVar__2_44 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__313__1_1_f_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1));
    }
    ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_LambdaHeadVar__2_44));
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
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_39,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_68_68;
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_70_70;
    MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_17_86;
    MR_Word ml_backend__ml_accurate_gc__TypeInfoVar_14;
    MR_Word ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15;
    MR_Word ml_backend__ml_accurate_gc__NonLocalsList_16;
    MR_Word ml_backend__ml_accurate_gc__NonLocals_19;
    MR_Word ml_backend__ml_accurate_gc__InstMapDelta_20;
    MR_Word ml_backend__ml_accurate_gc__GoalInfo_21;
    MR_Word ml_backend__ml_accurate_gc__Conj_22;
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStmt0_23;
    MR_Word ml_backend__ml_accurate_gc__ModuleInfo_24;
    MR_Word ml_backend__ml_accurate_gc__ModuleName_25;
    MR_Word ml_backend__ml_accurate_gc__MLDS_TypeInfoStmt_26;
    MR_Word ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27;
    MR_Word ml_backend__ml_accurate_gc__TypeInfoLval_28;
    MR_Word ml_backend__ml_accurate_gc__MLDS_TraceStmt_29;
    MR_Word ml_backend__ml_accurate_gc__VarSet_30;
    MR_Word ml_backend__ml_accurate_gc__VarTypes_31;
    MR_Word ml_backend__ml_accurate_gc__GenLocalVarDecl_32;
    MR_Word ml_backend__ml_accurate_gc__NonLocalVarList_37;
    MR_Word ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_38;
    MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41_41;
    MR_Word ml_backend__ml_accurate_gc__Var_49;
    MR_Word ml_backend__ml_accurate_gc__Var_50;
    MR_Word ml_backend__ml_accurate_gc__Var_56;
    MR_Word ml_backend__ml_accurate_gc__Var_58;
    MR_Word ml_backend__ml_accurate_gc__Var_59;
    MR_Word ml_backend__ml_accurate_gc__Var_60;
    MR_Word ml_backend__ml_accurate_gc__Info0_78;
    MR_Word ml_backend__ml_accurate_gc__Info_79;
    MR_Word ml_backend__ml_accurate_gc__Var_80;
    MR_Word ml_backend__ml_accurate_gc__Var_81;
    MR_Word ml_backend__ml_accurate_gc__Var_83;
    MR_Word ml_backend__ml_accurate_gc__Var_84;
    MR_Word ml_backend__ml_accurate_gc__Var_85;

    {
      ml_backend__ml_accurate_gc__ml_gen_make_type_info_var_6_p_0(ml_backend__ml_accurate_gc__ActualType_10, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_0_39, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41_41);
    }
    {
      ml_backend__ml_accurate_gc__NonLocalsList_16 = mercury__list__map_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[1], (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_7[2], ml_backend__ml_accurate_gc__HLDS_TypeInfoGoals_15);
    }
    ml_backend__ml_accurate_gc__TypeCtorInfo_68_68 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
    {
      ml_backend__ml_accurate_gc__NonLocals_19 = parse_tree__set_of_var__union_list_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_68_68, ml_backend__ml_accurate_gc__NonLocalsList_16);
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
      ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, ml_backend__ml_accurate_gc__Conj_22, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStmt0_23, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_41_41, ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40, &ml_backend__ml_accurate_gc__ModuleInfo_24);
    }
    {
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_accurate_gc__ModuleInfo_24, &ml_backend__ml_accurate_gc__ModuleName_25);
    }
    {
      ml_backend__ml_accurate_gc__Var_49 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_accurate_gc__ModuleName_25);
    }
    ml_backend__ml_accurate_gc__TypeCtorInfo_17_86 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0;
    {
      ml_backend__ml_accurate_gc__Var_80 = mercury__cord__init_0_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_17_86);
    }
    {
      ml_backend__ml_accurate_gc__Var_81 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
    {
      ml_backend__ml_accurate_gc__Info0_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_78, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_49));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_78, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_80));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info0_78, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_81));
    }
    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__MLDS_TypeInfoStmt0_23, &ml_backend__ml_accurate_gc__MLDS_TypeInfoStmt_26, ml_backend__ml_accurate_gc__Info0_78, &ml_backend__ml_accurate_gc__Info_79);
    }
    ml_backend__ml_accurate_gc__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_79, (MR_Integer) 0)));
    ml_backend__ml_accurate_gc__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_79, (MR_Integer) 1)));
    ml_backend__ml_accurate_gc__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Info_79, (MR_Integer) 2)));
    {
      ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27 = mercury__cord__to_list_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_17_86, ml_backend__ml_accurate_gc__Var_83);
    }
    {
      ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40, ml_backend__ml_accurate_gc__TypeInfoVar_14, &ml_backend__ml_accurate_gc__TypeInfoLval_28);
    }
    {
      ml_backend__ml_accurate_gc__Var_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_50, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoLval_28));
    }
    {
      ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40, ml_backend__ml_accurate_gc__VarName_8, ml_backend__ml_accurate_gc__DeclType_9, ml_backend__ml_accurate_gc__Var_50, ml_backend__ml_accurate_gc__Context_11, &ml_backend__ml_accurate_gc__MLDS_TraceStmt_29);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_varset_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40, &ml_backend__ml_accurate_gc__VarSet_30);
    }
    {
      ml_backend__ml_gen_info__ml_gen_info_get_var_types_2_p_0(*ml_backend__ml_accurate_gc__STATE_VARIABLE_Info_40, &ml_backend__ml_accurate_gc__VarTypes_31);
    }
    {
      ml_backend__ml_accurate_gc__GenLocalVarDecl_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__ModuleInfo_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__VarSet_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__GenLocalVarDecl_32, 6) = ((MR_Box) (ml_backend__ml_accurate_gc__VarTypes_31));
    }
    {
      parse_tree__set_of_var__to_sorted_list_2_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_68_68, ml_backend__ml_accurate_gc__NonLocals_19, &ml_backend__ml_accurate_gc__NonLocalVarList_37);
    }
    ml_backend__ml_accurate_gc__TypeCtorInfo_70_70 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0;
    {
      ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_38 = mercury__list__map_2_f_0((MR_Word) &ml_backend__ml_accurate_gc_scalar_common_1[0], ml_backend__ml_accurate_gc__TypeCtorInfo_70_70, ml_backend__ml_accurate_gc__GenLocalVarDecl_32, ml_backend__ml_accurate_gc__NonLocalVarList_37);
    }
    {
      ml_backend__ml_accurate_gc__Var_58 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_70_70, ml_backend__ml_accurate_gc__MLDS_NewobjLocals_27, ml_backend__ml_accurate_gc__MLDS_NonLocalVarDecls_38);
    }
    {
      ml_backend__ml_accurate_gc__Var_56 = mercury__list__map_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_70_70, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_7[3], ml_backend__ml_accurate_gc__Var_58);
    }
    {
      ml_backend__ml_accurate_gc__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_60, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TraceStmt_29));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_TypeInfoStmt_26));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_59, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_60));
    }
    {
      *ml_backend__ml_accurate_gc__GC_TraceCode_12 = ml_backend__ml_code_util__ml_gen_block_3_f_0(ml_backend__ml_accurate_gc__Var_56, ml_backend__ml_accurate_gc__Var_59, ml_backend__ml_accurate_gc__Context_11);
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Default0_5,
  MR_Word * ml_backend__ml_accurate_gc__Default_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_10,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_11)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Default0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ml_backend__ml_accurate_gc__Default_6 = ml_backend__ml_accurate_gc__Default0_5;
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_11 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_10;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_accurate_gc__Stmt0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Default0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Stmt_9;

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_8, &ml_backend__ml_accurate_gc__Stmt_9, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_10, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_11);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_accurate_gc__Default_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_9));
          }
        }
        break;
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
    MR_Word ml_backend__ml_accurate_gc__conv1_Stmt_6;
    MR_Word ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Fixup_47;

    {
      ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Stmt_6, ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Fixup_47);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Stmt_6));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_STATE_VARIABLE_Fixup_47));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
  MR_Word ml_backend__ml_accurate_gc__Stmt0_5,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_6,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded;

    switch (MR_tag((MR_Word) ml_backend__ml_accurate_gc__Stmt0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_75_75 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
          MR_Word ml_backend__ml_accurate_gc__Defns_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__SubStmts0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__SubStmts_11;
          MR_Box ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_47;

          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_75_75, ml_backend__ml_accurate_gc__TypeCtorInfo_75_75, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_7[0], ml_backend__ml_accurate_gc__SubStmts0_9, &ml_backend__ml_accurate_gc__SubStmts_11, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46)), &ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_47);
          }
          *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47 = ((MR_Word) ml_backend__ml_accurate_gc__conv2_STATE_VARIABLE_Fixup_47);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Defns_8));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__SubStmts_11));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_10));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_accurate_gc__Kind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__BodyStmt0_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__BodyStmt_15;
          MR_Word ml_backend__ml_accurate_gc__Context_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__BodyStmt0_14, &ml_backend__ml_accurate_gc__BodyStmt_15, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Kind_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Rval_13));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__BodyStmt_15));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_59));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_accurate_gc__Cond_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Then0_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__MaybeElse0_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
          MR_Word ml_backend__ml_accurate_gc__Then_19;
          MR_Word ml_backend__ml_accurate_gc__MaybeElse_20;
          MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_54_54;
          MR_Word ml_backend__ml_accurate_gc__Context_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));

          {
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Then0_17, &ml_backend__ml_accurate_gc__Then_19, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_54_54);
          }
          if ((ml_backend__ml_accurate_gc__MaybeElse0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ml_backend__ml_accurate_gc__MaybeElse_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_54_54;
            }
          else
            {
              MR_Word ml_backend__ml_accurate_gc__Stmt0_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__MaybeElse0_18, (MR_Integer) 0)));
              MR_Word ml_backend__ml_accurate_gc__Stmt_87;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__Stmt0_86, &ml_backend__ml_accurate_gc__Stmt_87, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_54_54, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47);
              }
              {
                ml_backend__ml_accurate_gc__MaybeElse_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__MaybeElse_20, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Stmt_87));
              }
            }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *ml_backend__ml_accurate_gc__Stmt_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Cond_16));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Then_19));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__MaybeElse_20));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_60));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_81_81 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0;
              MR_Word ml_backend__ml_accurate_gc__Type_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Val_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__Range_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__Cases0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_accurate_gc__Default0_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 5)));
              MR_Word ml_backend__ml_accurate_gc__Cases_26;
              MR_Word ml_backend__ml_accurate_gc__Default_27;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_52_52;
              MR_Word ml_backend__ml_accurate_gc__Context_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 6)));
              MR_Box ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_52_52;

              {
                mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_81_81, ml_backend__ml_accurate_gc__TypeCtorInfo_81_81, (MR_Word) &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0, (MR_Word) &ml_backend__ml_accurate_gc_scalar_common_7[1], ml_backend__ml_accurate_gc__Cases0_24, &ml_backend__ml_accurate_gc__Cases_26, ((MR_Box) (ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46)), &ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_52_52);
              }
              ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_52_52 = ((MR_Word) ml_backend__ml_accurate_gc__conv5_STATE_VARIABLE_Fixup_52_52);
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_default_4_p_0(ml_backend__ml_accurate_gc__Default0_25, &ml_backend__ml_accurate_gc__Default_27, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_52_52, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_accurate_gc__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Type_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Val_22));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__Range_23));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Cases_26));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Default_27));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_61));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            {
              *ml_backend__ml_accurate_gc__Stmt_6 = ml_backend__ml_accurate_gc__Stmt0_5;
              *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ml_backend__ml_accurate_gc__Ref_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__HandlerStmt0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 3)));
              MR_Word ml_backend__ml_accurate_gc__HandlerStmt_44;
              MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49;
              MR_Word ml_backend__ml_accurate_gc__Context_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 4)));
              MR_Word ml_backend__ml_accurate_gc__BodyStmt0_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));
              MR_Word ml_backend__ml_accurate_gc__BodyStmt_69;

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__BodyStmt0_68, &ml_backend__ml_accurate_gc__BodyStmt_69, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46, &ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49);
              }
              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(ml_backend__ml_accurate_gc__HandlerStmt0_43, &ml_backend__ml_accurate_gc__HandlerStmt_44, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_49_49, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ml_backend__ml_accurate_gc__Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Ref_42));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__BodyStmt_69));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__HandlerStmt_44));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_67));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 1)));
              MR_Word ml_backend__ml_accurate_gc__Context_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Stmt0_5, (MR_Integer) 2)));

              {
                ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_5_p_0(ml_backend__ml_accurate_gc__AtomicStmt0_45, ml_backend__ml_accurate_gc__Context_70, ml_backend__ml_accurate_gc__Stmt_6, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_46, ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47);
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_5_p_0_1(
  MR_Box ml_backend__ml_accurate_gc__closure_arg,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_1,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_2,
  MR_Box ml_backend__ml_accurate_gc__wrapper_arg_3,
  MR_Box * ml_backend__ml_accurate_gc__wrapper_arg_4)
{
  {
    MR_Box ml_backend__ml_accurate_gc__closure = ml_backend__ml_accurate_gc__closure_arg;
    MR_Word ml_backend__ml_accurate_gc__conv1_Stmt_12;
    MR_Integer ml_backend__ml_accurate_gc__conv0_HeadVar__7_7;

    {
      ml_backend__ml_accurate_gc__init_field_n_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__ml_accurate_gc__wrapper_arg_1), &ml_backend__ml_accurate_gc__conv1_Stmt_12, ((MR_Integer) ml_backend__ml_accurate_gc__wrapper_arg_3), &ml_backend__ml_accurate_gc__conv0_HeadVar__7_7);
    }
    *ml_backend__ml_accurate_gc__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_accurate_gc__conv1_Stmt_12));
    *ml_backend__ml_accurate_gc__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_accurate_gc__conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_5_p_0(
  MR_Word ml_backend__ml_accurate_gc__AtomicStmt0_6,
  MR_Word ml_backend__ml_accurate_gc__Context_7,
  MR_Word * ml_backend__ml_accurate_gc__Stmt_8,
  MR_Word ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36,
  MR_Word * ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37)
{
  {
    MR_bool ml_backend__ml_accurate_gc__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_accurate_gc__AtomicStmt0_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
    MR_Word ml_backend__ml_accurate_gc__Lval_10;
    MR_Word ml_backend__ml_accurate_gc__MaybeTag_11;
    MR_Word ml_backend__ml_accurate_gc__PointerType_13;
    MR_Word ml_backend__ml_accurate_gc__ArgRvals_16;
    MR_Word ml_backend__ml_accurate_gc___ExplicitSecTag_12;
    MR_Word ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_14;
    MR_Word ml_backend__ml_accurate_gc___MaybeCtorName_15;
    MR_Word ml_backend__ml_accurate_gc___ArgTypes_17;
    MR_Word ml_backend__ml_accurate_gc___MayUseAtomic_18;
    MR_Word ml_backend__ml_accurate_gc___AllocId_19;

    if (ml_backend__ml_accurate_gc__succeeded)
      {
        ml_backend__ml_accurate_gc__Lval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 1)));
        ml_backend__ml_accurate_gc__MaybeTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 2)));
        ml_backend__ml_accurate_gc___ExplicitSecTag_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 3)));
        ml_backend__ml_accurate_gc__PointerType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 4)));
        ml_backend__ml_accurate_gc___MaybeSizeInWordsRval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 5)));
        ml_backend__ml_accurate_gc___MaybeCtorName_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 6)));
        ml_backend__ml_accurate_gc__ArgRvals_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 7)));
        ml_backend__ml_accurate_gc___ArgTypes_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 8)));
        ml_backend__ml_accurate_gc___MayUseAtomic_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 9)));
        ml_backend__ml_accurate_gc___AllocId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AtomicStmt0_6, (MR_Integer) 10)));
        {
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_74_74;
          MR_Word ml_backend__ml_accurate_gc__TypeCtorInfo_80_80;
          MR_Integer ml_backend__ml_accurate_gc__Id_20;
          MR_Word ml_backend__ml_accurate_gc__NextId_21;
          MR_Word ml_backend__ml_accurate_gc__VarName_22;
          MR_Word ml_backend__ml_accurate_gc__VarType_23;
          MR_Word ml_backend__ml_accurate_gc__NullPointers_24;
          MR_Word ml_backend__ml_accurate_gc__Initializer_25;
          MR_Word ml_backend__ml_accurate_gc__VarDecl_27;
          MR_Word ml_backend__ml_accurate_gc__Locals0_28;
          MR_Word ml_backend__ml_accurate_gc__Locals_29;
          MR_Word ml_backend__ml_accurate_gc__VarLval_30;
          MR_Word ml_backend__ml_accurate_gc__PtrRval_31;
          MR_Word ml_backend__ml_accurate_gc__ArgInitStmts_32;
          MR_Word ml_backend__ml_accurate_gc__TaggedPtrRval_34;
          MR_Word ml_backend__ml_accurate_gc__AssignStmt_35;
          MR_Word ml_backend__ml_accurate_gc__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 2)));
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
          MR_Word ml_backend__ml_accurate_gc__Var_68;
          MR_Word ml_backend__ml_accurate_gc__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 0)));
          MR_Word ml_backend__ml_accurate_gc__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 1)));
          MR_Word ml_backend__ml_accurate_gc__Var_63;
          MR_Word ml_backend__ml_accurate_gc__Var_65;
          MR_Word ml_backend__ml_accurate_gc__Var_70;
          MR_Word ml_backend__ml_accurate_gc__Var_69;
          MR_Integer ml_backend__ml_accurate_gc___NumFields_33;
          MR_Box ml_backend__ml_accurate_gc__conv2__NumFields_33;

          {
            mercury__counter__allocate_3_p_0(&ml_backend__ml_accurate_gc__Id_20, ml_backend__ml_accurate_gc__Var_38, &ml_backend__ml_accurate_gc__NextId_21);
          }
          {
            ml_backend__ml_accurate_gc__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_39, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Id_20));
          }
          {
            ml_backend__ml_accurate_gc__VarName_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarName_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarName_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_39));
          }
          ml_backend__ml_accurate_gc__VarType_23 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[5]);
          ml_backend__ml_accurate_gc__TypeCtorInfo_74_74 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0;
          {
            ml_backend__ml_accurate_gc__Var_41 = mercury__list__length_1_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_74_74, ml_backend__ml_accurate_gc__ArgRvals_16);
          }
          {
            ml_backend__ml_accurate_gc__NullPointers_24 = mercury__list__duplicate_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__ml_accurate_gc__Var_41, ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_accurate_gc_scalar_common_4[0]))));
          }
          {
            ml_backend__ml_accurate_gc__Initializer_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Initializer_25, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__NullPointers_24));
          }
          {
            ml_backend__ml_accurate_gc__Var_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_46, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__VarName_22));
          }
          {
            ml_backend__ml_accurate_gc__VarDecl_27 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_accurate_gc__Var_46, ml_backend__ml_accurate_gc__VarType_23, ml_backend__ml_accurate_gc__Initializer_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_accurate_gc__Context_7);
          }
          ml_backend__ml_accurate_gc__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 0)));
          ml_backend__ml_accurate_gc__Locals0_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 1)));
          ml_backend__ml_accurate_gc__Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36, (MR_Integer) 2)));
          {
            ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_63));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Locals0_28));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__NextId_21));
          }
          {
            ml_backend__ml_accurate_gc__Locals_29 = mercury__cord__snoc_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_defn_0, ml_backend__ml_accurate_gc__Locals0_28, ((MR_Box) (ml_backend__ml_accurate_gc__VarDecl_27)));
          }
          ml_backend__ml_accurate_gc__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 0)));
          ml_backend__ml_accurate_gc__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 1)));
          ml_backend__ml_accurate_gc__Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_47_47, (MR_Integer) 2)));
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_68));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Locals_29));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_70));
          }
          {
            ml_backend__ml_accurate_gc__Var_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_49, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_68));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_49, 1) = ((MR_Box) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_49, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__VarName_22));
          }
          {
            ml_backend__ml_accurate_gc__VarLval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_30, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_49));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__VarLval_30, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarType_23));
          }
          {
            ml_backend__ml_accurate_gc__Var_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_52, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_13));
          }
          {
            ml_backend__ml_accurate_gc__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_53, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_30));
          }
          {
            ml_backend__ml_accurate_gc__PtrRval_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_31, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_52));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__PtrRval_31, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_53));
          }
          {
            ml_backend__ml_accurate_gc__Var_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_5[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_5_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 3) = ((MR_Box) (ml_backend__ml_accurate_gc__PointerType_13));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__PtrRval_31));
            MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_54, 5) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_7));
          }
          ml_backend__ml_accurate_gc__TypeCtorInfo_80_80 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0;
          {
            mercury__list__map_foldl_5_p_0(ml_backend__ml_accurate_gc__TypeCtorInfo_74_74, ml_backend__ml_accurate_gc__TypeCtorInfo_80_80, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_accurate_gc__Var_54, ml_backend__ml_accurate_gc__ArgRvals_16, &ml_backend__ml_accurate_gc__ArgInitStmts_32, ((MR_Box) ((MR_Integer) 0)), &ml_backend__ml_accurate_gc__conv2__NumFields_33);
          }
          ml_backend__ml_accurate_gc___NumFields_33 = ((MR_Integer) ml_backend__ml_accurate_gc__conv2__NumFields_33);
          if ((ml_backend__ml_accurate_gc__MaybeTag_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ml_backend__ml_accurate_gc__TaggedPtrRval_34 = ml_backend__ml_accurate_gc__PtrRval_31;
          else
            {
              MR_Integer ml_backend__ml_accurate_gc__Tag_84 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__MaybeTag_11, (MR_Integer) 0)));
              MR_Word ml_backend__ml_accurate_gc__Var_89;

              {
                ml_backend__ml_accurate_gc__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_89, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Tag_84));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_89, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__PtrRval_31));
              }
              {
                ml_backend__ml_accurate_gc__TaggedPtrRval_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TaggedPtrRval_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TaggedPtrRval_34, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_52));
                MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__TaggedPtrRval_34, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_89));
              }
            }
          {
            ml_backend__ml_accurate_gc__Var_56 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_56, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Lval_10));
            MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_56, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__TaggedPtrRval_34));
          }
          {
            ml_backend__ml_accurate_gc__AssignStmt_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_35, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_56));
            MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__AssignStmt_35, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_7));
          }
          {
            ml_backend__ml_accurate_gc__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_59, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__AssignStmt_35));
            MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_accurate_gc__Var_58 = mercury__list__f_43_43_2_f_0(ml_backend__ml_accurate_gc__TypeCtorInfo_80_80, ml_backend__ml_accurate_gc__ArgInitStmts_32, ml_backend__ml_accurate_gc__Var_59);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_accurate_gc__Stmt_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_58));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_7));
          }
        }
      }
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *ml_backend__ml_accurate_gc__Stmt_8 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__AtomicStmt0_6));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_7));
        }
        *ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_37 = ml_backend__ml_accurate_gc__STATE_VARIABLE_Fixup_0_36;
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
      ml_backend__ml_accurate_gc__succeeded = ml_backend__ml_accurate_gc__IntroducedFrom__pred__ml_gen_make_type_info_var__422__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__closure, (MR_Integer) 4))));
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
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_28, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_3[0]));
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
  MR_Word * ml_backend__ml_accurate_gc__TraceStmt_12)
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
    MR_Word ml_backend__ml_accurate_gc__Var_34;
    MR_Word ml_backend__ml_accurate_gc__Var_37;
    MR_Word ml_backend__ml_accurate_gc__Var_38;
    MR_Word ml_backend__ml_accurate_gc__Var_40;
    MR_Word ml_backend__ml_accurate_gc__Var_43;
    MR_Word ml_backend__ml_accurate_gc__Var_44;
    MR_Word ml_backend__ml_accurate_gc__Var_45;
    MR_Word ml_backend__ml_accurate_gc__Var_46;
    MR_Word ml_backend__ml_accurate_gc__Var_48;
    MR_Word ml_backend__ml_accurate_gc__Var_49;
    MR_Word ml_backend__ml_accurate_gc__Var_53;

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
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__ProcLabel_22, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcId_19));
    }
    {
      ml_backend__ml_accurate_gc__QualProcLabel_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__MLDS_Module_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__QualProcLabel_23, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__ProcLabel_22));
    }
    {
      ml_backend__ml_accurate_gc__Var_34 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ml_backend__ml_accurate_gc__Var_38 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
    }
    {
      ml_backend__ml_accurate_gc__Var_37 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__ml_accurate_gc__Var_38);
    }
    {
      ml_backend__ml_accurate_gc__CPointerType_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_34));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_accurate_gc_scalar_common_1[4])));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__CPointerType_24, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_37));
    }
    {
      ml_backend__ml_accurate_gc__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_40, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__ArgTypes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__ArgTypes_25, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_40));
    }
    {
      ml_backend__ml_accurate_gc__Signature_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__ArgTypes_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Signature_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_44, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__QualProcLabel_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_accurate_gc__Var_44, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
    }
    {
      ml_backend__ml_accurate_gc__Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_43, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_44));
    }
    {
      ml_backend__ml_accurate_gc__FuncAddr_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__FuncAddr_27, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_43));
    }
    {
      ml_backend__ml_accurate_gc__Var_45 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_accurate_gc__Var_45, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CPointerType_24));
    }
    {
      ml_backend__ml_accurate_gc__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__Var_46, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__VarLval_15));
    }
    {
      ml_backend__ml_accurate_gc__CastVarAddr_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_45));
      MR_hl_field(MR_mktag(3), ml_backend__ml_accurate_gc__CastVarAddr_28, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_46));
    }
    {
      ml_backend__ml_accurate_gc__Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_49, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__CastVarAddr_28));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_accurate_gc__Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_48, 0) = ((MR_Box) (ml_backend__ml_accurate_gc__TypeInfoRval_10));
      MR_hl_field(MR_mktag(1), ml_backend__ml_accurate_gc__Var_48, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_49));
    }
    {
      ml_backend__ml_accurate_gc__Var_53 = mercury__set__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_call_marker_0);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_accurate_gc__TraceStmt_12 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__Signature_26));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_accurate_gc__FuncAddr_27));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_48));
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ml_backend__ml_accurate_gc__Var_53));
      MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ml_backend__ml_accurate_gc__Context_11));
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
