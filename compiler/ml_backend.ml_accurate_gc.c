/*
** Automatically generated from `ml_accurate_gc.m'
** by the Mercury compiler,
** version rotd-2025-12-12
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


// :- module ml_backend.ml_accurate_gc.
// :- implementation.

/*
INIT mercury__ml_backend__ml_accurate_gc__init
ENDINIT
*/

#include "ml_backend.ml_accurate_gc.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism_info.mih"
#include "check_hlds.polymorphism_type_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.feedback_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0;

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

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__336__1_4_f_0(
  MR_Word Context_11,
  MR_Word ModuleInfo_24,
  MR_Word VarTable_30,
  MR_Word LambdaHeadVar__1_51);

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_f_0(
  MR_Word LambdaHeadVar__1_43);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
  MR_Word PointerType_8,
  MR_Word PointerRval_9,
  MR_Word Context_10,
  MR_Word ArgRvalType_11,
  MR_Word * Stmt_12,
  MR_Integer FieldNum_13,
  MR_Integer * HeadVar__7_7);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
  MR_Word Case0_5,
  MR_Word * Case_6,
  MR_Word STATE_VARIABLE_Fixup_0_12,
  MR_Word * STATE_VARIABLE_Fixup_13);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
  MR_Word VarName_8,
  MR_Word DeclType_9,
  MR_Word HowToGetTypeInfo_10,
  MR_Word Context_11,
  MR_Word * GCStmt_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28);

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
  MR_Word VarName_8,
  MR_Word DeclType_9,
  MR_Word ActualType_10,
  MR_Word Context_11,
  MR_Word * GC_TraceCode_12,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Fixup_0_47,
  MR_Word * STATE_VARIABLE_Fixup_48);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Fixup_0_50,
  MR_Word * STATE_VARIABLE_Fixup_51);

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
  MR_Word Info_7,
  MR_Word VarName_8,
  MR_Word Type_9,
  MR_Word TypeInfoRval_10,
  MR_Word Context_11,
  MR_Word * TraceStmt_12);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[7][2];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_2[1][4];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[2][1];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[1][10];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[2][7];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[3][3];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[1][5];

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[1][8];


struct ml_backend__ml_accurate_gc__vector_common_type_9_0_s {
  const MR_String ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_0;
  const MR_Integer ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_1;
};

static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_9_0_s ml_backend__ml_accurate_gc_vector_common_9[16];



static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_1[7][2] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__set_of_var__parse_tree__set_of_var__type_ctor_info_set_of_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 4U)
  },
  /* row   4 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 20U)),
    ((MR_Box) ((MR_Unsigned) 20U))
  },
  /* row   6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    ((MR_Box) (MR_mkword(3, &ml_backend__ml_accurate_gc_scalar_common_1[5])))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_2[1][4] = {
  /* row   0 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "gc_trace")),
    ((MR_Box) (((MR_Box) ((MR_Integer) 1))))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_3[2][1] = {
  /* row   0 */
  { ((MR_Box) (MR_mkword(3, &ml_backend__ml_accurate_gc_scalar_common_1[6]))) },
  /* row   1 */
  { ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0))))) },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_6[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_7[0])),
    ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_7[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_accurate_gc_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__var_table__parse_tree__var_table__type_ctor_info_var_table_0)),
    ((MR_Box) (&ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
};


static /* final */ const struct ml_backend__ml_accurate_gc__vector_common_type_9_0_s ml_backend__ml_accurate_gc_vector_common_9[16] = {
  /* row   0 */
  {
    (MR_String) "zero_base_typeclass_info",
    (MR_Integer) -1
  },
  /* row   1 */
  {
    (MR_String) "zero_type_ctor_info",
    (MR_Integer) -1
  },
  /* row   2 */
  {
    (MR_String) "type_ctor_info",
    (MR_Integer) -1
  },
  /* row   3 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   4 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   5 */
  {
    (MR_String) "typeclass_info",
    (MR_Integer) -1
  },
  /* row   6 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   7 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row   8 */
  {
    (MR_String) "type_info",
    (MR_Integer) 1
  },
  /* row   9 */
  {
    (MR_String) "zero_typeclass_info",
    (MR_Integer) -1
  },
  /* row  10 */
  {
    (MR_String) "zero_type_info",
    (MR_Integer) -1
  },
  /* row  11 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  12 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  13 */
  {
    NULL,
    (MR_Integer) -2
  },
  /* row  14 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Integer) -1
  },
  /* row  15 */
  {
    NULL,
    (MR_Integer) -2
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


static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__sparse_bitset__pti_sparse_bitset_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&ml_backend__ml_accurate_gc__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_accurate_gc__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0) }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  { (MR_TypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0) }
};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0[3] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__ml_accurate_gc__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0),
  (MR_PseudoTypeInfo) (&mercury__counter__counter__type_ctor_info_counter_0)
};

static const MR_ConstString ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0[3] = {
  (MR_String) "fnoi_module_name",
  (MR_String) "fnoi_locals",
  (MR_String) "fnoi_next_id"
};

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 = {
  (MR_String) "fixup_newobj_info",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_fixup_newobj_info_0_0,
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_names_fixup_newobj_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0[1] = { &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 };

static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_fixup_newobj_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0[1] = { &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_fixup_newobj_info_0_0 };

static const MR_Integer ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "fixup_newobj_info",
  { ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_fixup_newobj_info_0 },
  { ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_fixup_newobj_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_fixup_newobj_info_0,

};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0[1] = { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0) };

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0 = {
  (MR_String) "construct_from_type",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1[1] = { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0) };

static const MR_DuFunctorDesc ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1 = {
  (MR_String) "already_provided",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__field_types_how_to_get_type_info_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0[1] = { &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_0 };

static const MR_DuFunctorDescPtr ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1[1] = { &ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_functor_desc_how_to_get_type_info_0_1 };

static const MR_DuPtagLayout ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_stag_ordered_how_to_get_type_info_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001)),
  (MR_String) "ml_backend.ml_accurate_gc",
  (MR_String) "how_to_get_type_info",
  { ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_name_ordered_how_to_get_type_info_0 },
  { ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__du_ptag_ordered_how_to_get_type_info_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__functor_number_map_how_to_get_type_info_0,

};

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__336__1_4_f_0(
  MR_Word Context_11,
  MR_Word ModuleInfo_24,
  MR_Word VarTable_30,
  MR_Word LambdaHeadVar__1_51)
{
  MR_Word LambdaHeadVar__2_52;
  MR_Word Entry_34;
  MR_Word LocalVarName_35;
  MR_Word LocalVarType_36;
  MR_Word Var_53;

  parse_tree__var_table__lookup_var_entry_3_p_0(VarTable_30, LambdaHeadVar__1_51, &Entry_34);
  LocalVarName_35 = ml_backend__ml_code_util__ml_gen_local_var_name_2_f_0(LambdaHeadVar__1_51, Entry_34);
  LocalVarType_36 = ((MR_Word) ((MR_hl_field(0, Entry_34, 1))));
  Var_53 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_24, LocalVarType_36);
  LambdaHeadVar__2_52 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0(LocalVarName_35, Var_53, (MR_Word) ((MR_Unsigned) 0U), Context_11);
  return LambdaHeadVar__2_52;
}

static MR_Word MR_CALL 
ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_f_0(
  MR_Word LambdaHeadVar__1_43)
{
  MR_Word LambdaHeadVar__2_44;
  MR_Word GI_62 = ((MR_Word) ((MR_hl_field(0, LambdaHeadVar__1_43, 1))));

  LambdaHeadVar__2_44 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(GI_62);
  return LambdaHeadVar__2_44;
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

      ml_backend__mlds____Compare____mlds_rval_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));

    parse_tree__prog_data____Compare____mer_type_0_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;

    ml_backend__mlds____Compare____mlds_module_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      mercury__builtin__compare_3_p_0((MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_1[2]), &SubResult2_9, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__counter____Compare____counter_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_12_12;
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      TypeInfo_12_12 = (MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_1[2]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_12_12, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      if (succeeded)
        succeeded = mercury__counter____Unify____counter_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_accurate_gc__init_field_n_7_p_0(
  MR_Word PointerType_8,
  MR_Word PointerRval_9,
  MR_Word Context_10,
  MR_Word ArgRvalType_11,
  MR_Word * Stmt_12,
  MR_Integer FieldNum_13,
  MR_Integer * HeadVar__7_7)
{
  MR_Word ArgRval_14;
  MR_Word FieldId_16;
  MR_Word Field_19;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_25;

  *HeadVar__7_7 = (MR_Integer) ((MR_Unsigned) FieldNum_13 + (MR_Unsigned) 1);
  ArgRval_14 = ((MR_Word) ((MR_hl_field(0, ArgRvalType_11, 0))));
  {
    Var_22 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_22, 0) = ((MR_Box) (FieldNum_13));
  }
  {
    Var_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_21, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, Var_21, 1) = ((MR_Box) (Var_22));
  }
  {
    FieldId_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldId_16, 0) = ((MR_Box) (Var_21));
  }
  {
    Field_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Field_19, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_accurate_gc_scalar_common_3[1])));
    MR_hl_field(0, Field_19, 1) = ((MR_Box) (PointerRval_9));
    MR_hl_field(0, Field_19, 2) = ((MR_Box) (PointerType_8));
    MR_hl_field(0, Field_19, 3) = ((MR_Box) (FieldId_16));
    MR_hl_field(0, Field_19, 4) = ((MR_Box) ((MR_Unsigned) 20U));
  }
  {
    Var_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_25, 0) = ((MR_Box) (Field_19));
    MR_hl_field(2, Var_25, 1) = ((MR_Box) (ArgRval_14));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    *Stmt_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Var_25));
    MR_hl_field(3, base, 2) = ((MR_Box) (Context_10));
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(
  MR_Word Case0_5,
  MR_Word * Case_6,
  MR_Word STATE_VARIABLE_Fixup_0_12,
  MR_Word * STATE_VARIABLE_Fixup_13)
{
  MR_Word FirstCond_8 = ((MR_Word) ((MR_hl_field(0, Case0_5, 0))));
  MR_Word LaterConds_9 = ((MR_Word) ((MR_hl_field(0, Case0_5, 1))));
  MR_Word Stmt0_10 = ((MR_Word) ((MR_hl_field(0, Case0_5, 2))));
  MR_Word Stmt_11;

  ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(Stmt0_10, &Stmt_11, STATE_VARIABLE_Fixup_0_12, STATE_VARIABLE_Fixup_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *Case_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FirstCond_8));
    MR_hl_field(0, base, 1) = ((MR_Box) (LaterConds_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (Stmt_11));
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_with_typeinfo_7_p_0(
  MR_Word VarName_8,
  MR_Word DeclType_9,
  MR_Word TypeInfoRval_10,
  MR_Word Context_11,
  MR_Word * GCStmt_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word GC_14;

  ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(STATE_VARIABLE_Info_0_16, &GC_14);
  succeeded = (GC_14 == (MR_Integer) 5);
  if (succeeded)
  {
    MR_Word HowToGetTypeInfo_15;

    {
      HowToGetTypeInfo_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HowToGetTypeInfo_15, 0) = ((MR_Box) (TypeInfoRval_10));
    }
    ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(VarName_8, DeclType_9, HowToGetTypeInfo_15, Context_11, GCStmt_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
  else
  {
    *GCStmt_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_poly_7_p_0(
  MR_Word VarName_8,
  MR_Word DeclType_9,
  MR_Word ActualType_10,
  MR_Word Context_11,
  MR_Word * GCStmt_12,
  MR_Word STATE_VARIABLE_Info_0_16,
  MR_Word * STATE_VARIABLE_Info_17)
{
  MR_bool succeeded;
  MR_Word GC_14;

  ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(STATE_VARIABLE_Info_0_16, &GC_14);
  succeeded = (GC_14 == (MR_Integer) 5);
  if (succeeded)
  {
    MR_Word HowToGetTypeInfo_15;

    {
      HowToGetTypeInfo_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HowToGetTypeInfo_15, 0) = ((MR_Box) (ActualType_10));
    }
    ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(VarName_8, DeclType_9, HowToGetTypeInfo_15, Context_11, GCStmt_12, STATE_VARIABLE_Info_0_16, STATE_VARIABLE_Info_17);
  }
  else
  {
    *GCStmt_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_17 = STATE_VARIABLE_Info_0_16;
  }
}

void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_statement_6_p_0(
  MR_Word VarName_7,
  MR_Word Type_8,
  MR_Word Context_9,
  MR_Word * GCStmt_10,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  MR_bool succeeded;
  MR_Word GC_15;

  ml_backend__ml_gen_info__ml_gen_info_get_gc_2_p_0(STATE_VARIABLE_Info_0_12, &GC_15);
  succeeded = (GC_15 == (MR_Integer) 5);
  if (succeeded)
  {
    MR_Word HowToGetTypeInfo_16;

    {
      HowToGetTypeInfo_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, HowToGetTypeInfo_16, 0) = ((MR_Box) (Type_8));
    }
    ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(VarName_7, Type_8, HowToGetTypeInfo_16, Context_9, GCStmt_10, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
  }
  else
  {
    *GCStmt_10 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_13 = STATE_VARIABLE_Info_0_12;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_do_gen_gc_statement_7_p_0(
  MR_Word VarName_8,
  MR_Word DeclType_9,
  MR_Word HowToGetTypeInfo_10,
  MR_Word Context_11,
  MR_Word * GCStmt_12,
  MR_Word STATE_VARIABLE_Info_0_27,
  MR_Word * STATE_VARIABLE_Info_28)
{
  MR_bool succeeded;
  MR_Word ModuleInfo_14;
  MR_Word MLDS_DeclType_15;
  MR_Word PredId_16;
  MR_Word PredModule_18;
  MR_String PredName_19;
  MR_Word PredFormArity_20;
  MR_Integer PredFormArityInt_21;
  MR_Word Var_30;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_14);
  MLDS_DeclType_15 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_14, DeclType_9);
  switch (MR_tag((MR_Word) MLDS_DeclType_15)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(MLDS_DeclType_15)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
          succeeded = MR_TRUE;
          break;
      }
      break;
    case (MR_Integer) 1:
      succeeded = MR_TRUE;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, MLDS_DeclType_15, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
        case (MR_Integer) 4:
        case (MR_Integer) 8:
        case (MR_Integer) 9:
        case (MR_Integer) 10:
        case (MR_Integer) 11:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 3:
          {
            MR_Word TypeCategory_32 = ((MR_Word) ((MR_hl_field(3, MLDS_DeclType_15, 2))));

            switch (MR_tag((MR_Word) TypeCategory_32)) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 0:
                switch (MR_unmkbody(TypeCategory_32)) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 2:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 3:
                    succeeded = MR_TRUE;
                    break;
                  case (MR_Integer) 4:
                    succeeded = MR_TRUE;
                    break;
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, TypeCategory_32, 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word Var_57 = ((MR_Unsigned) ((MR_hl_field(3, TypeCategory_32, 1))) & (MR_Integer) 3);

                      switch (Var_57) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 0:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_58 = ((MR_Unsigned) ((MR_hl_field(3, TypeCategory_32, 1))) & (MR_Integer) 7);

                      switch (Var_58) {
                        default:
                          succeeded = MR_FALSE;
                          break;
                        case (MR_Integer) 3:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 4:
                          succeeded = MR_TRUE;
                          break;
                        case (MR_Integer) 2:
                          succeeded = MR_TRUE;
                          break;
                      }
                    }
                    break;
                }
                break;
            }
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_27, &Var_30);
    PredId_16 = ((MR_Word) ((MR_hl_field(0, Var_30, 0))));
    hlds__hlds_module__predicate_id_5_p_0(ModuleInfo_14, PredId_16, &PredModule_18, &PredName_19, &PredFormArity_20);
    PredFormArityInt_21 = (MR_Integer) (PredFormArity_20);
    succeeded = mdbcomp__program_representation__no_type_info_builtin_3_p_0(PredModule_18, PredName_19, PredFormArityInt_21);
    succeeded = !(succeeded);
  }
  if (succeeded)
  {
    MR_Word GC_TraceCode_25;

    if (((MR_tag((MR_Word) HowToGetTypeInfo_10)) == (MR_Integer) 1))
    {
      MR_Word TypeInfoRval_26 = ((MR_Word) ((MR_hl_field(1, HowToGetTypeInfo_10, 0))));
      MR_Word ModuleInfo_59;
      MR_Word MLDS_Type_60;
      MR_Word VarLval_61;
      MR_Integer ProcId_65;
      MR_Word PredModule_66;
      MR_Word MLDS_Module_67;
      MR_Word ProcLabel_68;
      MR_Word FuncLabel_69;
      MR_Word QualFuncLabel_70;
      MR_Word CPointerType_71;
      MR_Word ArgTypes_72;
      MR_Word Signature_73;
      MR_Word FuncAddr_74;
      MR_Word CastVarAddr_75;
      MR_Word Var_80;
      MR_Word Var_84;
      MR_Word Var_87;
      MR_Word Var_88;
      MR_Word Var_89;
      MR_Word Var_90;
      MR_Word Var_91;

      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_27, &ModuleInfo_59);
      MLDS_Type_60 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_59, DeclType_9);
      {
        VarLval_61 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, VarLval_61, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, VarLval_61, 1) = ((MR_Box) (VarName_8));
        MR_hl_field(3, VarLval_61, 2) = ((MR_Box) (MLDS_Type_60));
      }
      ProcId_65 = hlds__hlds_pred__initial_proc_id_0_f_0();
      PredModule_66 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
      MLDS_Module_67 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(PredModule_66);
      {
        ProcLabel_68 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ProcLabel_68, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_2[0]));
        MR_hl_field(0, ProcLabel_68, 1) = ((MR_Box) (ProcId_65));
      }
      {
        FuncLabel_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, FuncLabel_69, 0) = ((MR_Box) (ProcLabel_68));
        MR_hl_field(0, FuncLabel_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        QualFuncLabel_70 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, QualFuncLabel_70, 0) = ((MR_Box) (MLDS_Module_67));
        MR_hl_field(0, QualFuncLabel_70, 1) = ((MR_Box) (FuncLabel_69));
      }
      Var_80 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
      {
        CPointerType_71 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CPointerType_71, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, CPointerType_71, 1) = ((MR_Box) (Var_80));
        MR_hl_field(3, CPointerType_71, 2) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_accurate_gc_scalar_common_1[3])));
      }
      {
        Var_84 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_84, 0) = ((MR_Box) (CPointerType_71));
        MR_hl_field(1, Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ArgTypes_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, ArgTypes_72, 0) = ((MR_Box) ((MR_Unsigned) 32U));
        MR_hl_field(1, ArgTypes_72, 1) = ((MR_Box) (Var_84));
      }
      {
        Signature_73 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Signature_73, 0) = ((MR_Box) (ArgTypes_72));
        MR_hl_field(0, Signature_73, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_88 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_88, 0) = ((MR_Box) (QualFuncLabel_70));
        MR_hl_field(0, Var_88, 1) = ((MR_Box) (Signature_73));
      }
      Var_87 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_88)));
      {
        FuncAddr_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, FuncAddr_74, 0) = ((MR_Box) ((MR_Unsigned) 1U));
        MR_hl_field(3, FuncAddr_74, 1) = ((MR_Box) (Var_87));
      }
      {
        Var_89 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Var_89, 0) = ((MR_Box) ((MR_Unsigned) 7U));
        MR_hl_field(3, Var_89, 1) = ((MR_Box) (VarLval_61));
      }
      {
        CastVarAddr_75 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, CastVarAddr_75, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, CastVarAddr_75, 1) = ((MR_Box) (CPointerType_71));
        MR_hl_field(3, CastVarAddr_75, 2) = ((MR_Box) (Var_89));
      }
      {
        Var_91 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_91, 0) = ((MR_Box) (CastVarAddr_75));
        MR_hl_field(1, Var_91, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_90, 0) = ((MR_Box) (TypeInfoRval_26));
        MR_hl_field(1, Var_90, 1) = ((MR_Box) (Var_91));
      }
      {
        GC_TraceCode_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, GC_TraceCode_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
        MR_hl_field(3, GC_TraceCode_25, 1) = ((MR_Box) (Signature_73));
        MR_hl_field(3, GC_TraceCode_25, 2) = ((MR_Box) (FuncAddr_74));
        MR_hl_field(3, GC_TraceCode_25, 3) = ((MR_Box) (Var_90));
        MR_hl_field(3, GC_TraceCode_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(3, GC_TraceCode_25, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
        MR_hl_field(3, GC_TraceCode_25, 6) = ((MR_Box) (Context_11));
      }
      *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
    }
    else
    {
      MR_Word ActualType0_22 = ((MR_Word) ((MR_hl_field(0, HowToGetTypeInfo_10, 0))));
      MR_Word ActualType_24;
      MR_Word ActualType1_23;
      MR_Word TypeName_95;
      MR_Word PrivateBuiltin_98;
      MR_String Name_99;
      MR_Word Var_100;
      MR_Integer slot_0;
      MR_String str_1;

      succeeded = ((MR_tag((MR_Word) ActualType0_22)) == (MR_Integer) 1);
      if (succeeded)
      {
        TypeName_95 = ((MR_Word) ((MR_hl_field(1, ActualType0_22, 0))));
        succeeded = ((MR_tag((MR_Word) TypeName_95)) == (MR_Integer) 1);
        if (succeeded)
        {
          PrivateBuiltin_98 = ((MR_Word) ((MR_hl_field(1, TypeName_95, 0))));
          Name_99 = ((MR_String) ((MR_hl_field(1, TypeName_95, 1))));
          Var_100 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
          succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(PrivateBuiltin_98, Var_100);
          if (succeeded)
          {
            // hashed string jump switch
            ;
            // compute the hash value of the input string
            ;
            slot_0 = ((MR_hash_string5(Name_99)) & (MR_Integer) 15);
            // hash chain loop
            ;
            do
            {
              // lookup the string for this hash slot
              ;
              str_1 = ((&ml_backend__ml_accurate_gc_vector_common_9[0 + slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_0;
              // did we find a match?
              ;
              if ((((str_1 != NULL)) && ((strcmp(str_1, Name_99) == 0))))
              {
                // we found a match; dispatch to the corresponding code
                ;
                switch (slot_0) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      // case "zero_base_typeclass_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      // case "zero_type_ctor_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      // case "type_ctor_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      // case "typeclass_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      // case "type_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      // case "zero_typeclass_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__sample_typeclass_info_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      // case "zero_type_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__sample_type_info_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 14:
                    {
                      // case "base_typeclass_info"
                      ;
                      ActualType1_23 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
                      succeeded = MR_TRUE;
                    }
                    break;
                }
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              {
                // no match yet, so get next slot in hash chain
                ;
                slot_0 = ((&ml_backend__ml_accurate_gc_vector_common_9[0 + slot_0]))->ml_backend__ml_accurate_gc__vector_common_type_9_0__vct_9_f_1;
              }
            }
            while ((slot_0 >= (MR_Integer) 0));
            succeeded = MR_FALSE;
          label_0:;
          }
        }
      }
      if (succeeded)
        ActualType_24 = ActualType1_23;
      else
        ActualType_24 = ActualType0_22;
      ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(VarName_8, DeclType_9, ActualType_24, Context_11, &GC_TraceCode_25, STATE_VARIABLE_Info_0_27, STATE_VARIABLE_Info_28);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *GCStmt_12 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (GC_TraceCode_25));
    }
  }
  else
  {
    *GCStmt_12 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_Info_28 = STATE_VARIABLE_Info_0_27;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_LambdaHeadVar__2_52;

  conv1_LambdaHeadVar__2_52 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__336__1_4_f_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_LambdaHeadVar__2_52));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_LambdaHeadVar__2_44;

  conv0_LambdaHeadVar__2_44 = ml_backend__ml_accurate_gc__IntroducedFrom__func__ml_gen_gc_trace_code__301__1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_44));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0(
  MR_Word VarName_8,
  MR_Word DeclType_9,
  MR_Word ActualType_10,
  MR_Word Context_11,
  MR_Word * GC_TraceCode_12,
  MR_Word STATE_VARIABLE_Info_0_39,
  MR_Word * STATE_VARIABLE_Info_40)
{
  MR_Word TypeInfoVar_14;
  MR_Word HLDS_TypeInfoGoals_15;
  MR_Word NonLocalsList_16;
  MR_Word NonLocals_19;
  MR_Word InstMapDelta_20;
  MR_Word GoalInfo_21;
  MR_Word Conj_22;
  MR_Word MLDS_TypeInfoStmt0_23;
  MR_Word ModuleInfo_24;
  MR_Word ModuleName_25;
  MR_Word MLDS_TypeInfoStmt_26;
  MR_Word NewObjLocalVarDefns_27;
  MR_Word TypeInfoLval_28;
  MR_Word MLDS_TraceStmt_29;
  MR_Word VarTable_30;
  MR_Word GenLocalVarDecl_31;
  MR_Word NonLocalVarList_37;
  MR_Word NonLocalVarDefns_38;
  MR_Word STATE_VARIABLE_Info_1_41;
  MR_Word Var_49;
  MR_Word Var_50;
  MR_Word Var_55;
  MR_Word Var_57;
  MR_Word Var_58;
  MR_Word ModuleInfo0_71;
  MR_Word PredProcId_72;
  MR_Word PredInfo0_73;
  MR_Word ProcInfo0_74;
  MR_Word ModuleInfo1_75;
  MR_Word PredInfo_76;
  MR_Word ProcInfo_77;
  MR_Word ModuleInfo_78;
  MR_Word VarTable_79;
  MR_Word STATE_VARIABLE_Info_1_80;
  MR_Word Info0_81;
  MR_Word Info_82;
  MR_Word Var_83;
  MR_Word Var_84;
  MR_Word Var_86;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(STATE_VARIABLE_Info_0_39, &ModuleInfo0_71);
  ml_backend__ml_gen_info__ml_gen_info_get_pred_proc_id_2_p_0(STATE_VARIABLE_Info_0_39, &PredProcId_72);
  hlds__hlds_module__module_info_pred_proc_info_4_p_0(ModuleInfo0_71, PredProcId_72, &PredInfo0_73, &ProcInfo0_74);
  check_hlds__polymorphism_type_info__polymorphism_make_type_info_var_mi_10_p_0(ActualType_10, Context_11, &TypeInfoVar_14, &HLDS_TypeInfoGoals_15, ModuleInfo0_71, &ModuleInfo1_75, PredInfo0_73, &PredInfo_76, ProcInfo0_74, &ProcInfo_77);
  hlds__hlds_module__module_info_set_pred_proc_info_5_p_0(PredProcId_72, PredInfo_76, ProcInfo_77, ModuleInfo1_75, &ModuleInfo_78);
  hlds__hlds_pred__proc_info_get_var_table_2_p_0(ProcInfo_77, &VarTable_79);
  ml_backend__ml_gen_info__ml_gen_info_set_module_info_3_p_0(ModuleInfo_78, STATE_VARIABLE_Info_0_39, &STATE_VARIABLE_Info_1_80);
  ml_backend__ml_gen_info__ml_gen_info_set_var_table_3_p_0(VarTable_79, STATE_VARIABLE_Info_1_80, &STATE_VARIABLE_Info_1_41);
  NonLocalsList_16 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0), (MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_6[2]), HLDS_TypeInfoGoals_15);
  NonLocals_19 = parse_tree__set_of_var__union_list_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocalsList_16);
  InstMapDelta_20 = hlds__instmap__instmap_delta_bind_var_1_f_0(TypeInfoVar_14);
  hlds__hlds_goal__goal_info_init_5_p_0(NonLocals_19, InstMapDelta_20, (MR_Integer) 0, (MR_Integer) 2, &GoalInfo_21);
  hlds__hlds_goal__conj_list_to_goal_3_p_0(HLDS_TypeInfoGoals_15, GoalInfo_21, &Conj_22);
  ml_backend__ml_code_gen__ml_gen_goal_as_block_5_p_0((MR_Integer) 0, Conj_22, &MLDS_TypeInfoStmt0_23, STATE_VARIABLE_Info_1_41, STATE_VARIABLE_Info_40);
  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*STATE_VARIABLE_Info_40, &ModuleInfo_24);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_24, &ModuleName_25);
  Var_49 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_25);
  Var_83 = mercury__cord__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0));
  Var_84 = mercury__counter__init_1_f_0((MR_Integer) 0);
  {
    Info0_81 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Info0_81, 0) = ((MR_Box) (Var_49));
    MR_hl_field(0, Info0_81, 1) = ((MR_Box) (Var_83));
    MR_hl_field(0, Info0_81, 2) = ((MR_Box) (Var_84));
  }
  ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(MLDS_TypeInfoStmt0_23, &MLDS_TypeInfoStmt_26, Info0_81, &Info_82);
  Var_86 = ((MR_Word) ((MR_hl_field(0, Info_82, 1))));
  NewObjLocalVarDefns_27 = mercury__cord__to_list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Var_86);
  ml_backend__ml_code_util__ml_gen_var_direct_3_p_0(*STATE_VARIABLE_Info_40, TypeInfoVar_14, &TypeInfoLval_28);
  {
    Var_50 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_50, 0) = ((MR_Box) (TypeInfoLval_28));
  }
  ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(*STATE_VARIABLE_Info_40, VarName_8, DeclType_9, Var_50, Context_11, &MLDS_TraceStmt_29);
  ml_backend__ml_gen_info__ml_gen_info_get_var_table_2_p_0(*STATE_VARIABLE_Info_40, &VarTable_30);
  {
    GenLocalVarDecl_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, GenLocalVarDecl_31, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_8[0]));
    MR_hl_field(0, GenLocalVarDecl_31, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__ml_gen_gc_trace_code_7_p_0_2));
    MR_hl_field(0, GenLocalVarDecl_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, GenLocalVarDecl_31, 3) = ((MR_Box) (Context_11));
    MR_hl_field(0, GenLocalVarDecl_31, 4) = ((MR_Box) (ModuleInfo_24));
    MR_hl_field(0, GenLocalVarDecl_31, 5) = ((MR_Box) (VarTable_30));
  }
  parse_tree__set_of_var__to_sorted_list_2_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), NonLocals_19, &NonLocalVarList_37);
  NonLocalVarDefns_38 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), GenLocalVarDecl_31, NonLocalVarList_37);
  Var_55 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), NewObjLocalVarDefns_27, NonLocalVarDefns_38);
  {
    Var_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_58, 0) = ((MR_Box) (MLDS_TraceStmt_29));
    MR_hl_field(1, Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_57, 0) = ((MR_Box) (MLDS_TypeInfoStmt_26));
    MR_hl_field(1, Var_57, 1) = ((MR_Box) (Var_58));
  }
  *GC_TraceCode_12 = ml_backend__ml_code_util__ml_gen_block_4_f_0(Var_55, (MR_Word) ((MR_Unsigned) 0U), Var_57, Context_11);
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv4_Case_6;
  MR_Word conv3_STATE_VARIABLE_Fixup_13;

  ml_backend__ml_accurate_gc__fixup_newobj_in_case_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Case_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_Fixup_13);
  *wrapper_arg_2 = ((MR_Box) (conv4_Case_6));
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_Fixup_13));
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Stmt_6;
  MR_Word conv0_STATE_VARIABLE_Fixup_48;

  ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Stmt_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Fixup_48);
  *wrapper_arg_2 = ((MR_Box) (conv1_Stmt_6));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Fixup_48));
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Fixup_0_47,
  MR_Word * STATE_VARIABLE_Fixup_48)
{
  switch (MR_tag((MR_Word) Stmt0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns_8 = ((MR_Word) ((MR_hl_field(0, Stmt0_5, 0))));
        MR_Word FuncDefns_9 = ((MR_Word) ((MR_hl_field(0, Stmt0_5, 1))));
        MR_Word SubStmts0_10 = ((MR_Word) ((MR_hl_field(0, Stmt0_5, 2))));
        MR_Word Context_11 = ((MR_Word) ((MR_hl_field(0, Stmt0_5, 3))));
        MR_Word SubStmts_12;
        MR_Box conv2_STATE_VARIABLE_Fixup_48;

        mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0), (MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_6[0]), SubStmts0_10, &SubStmts_12, ((MR_Box) (STATE_VARIABLE_Fixup_0_47)), &conv2_STATE_VARIABLE_Fixup_48);
        *STATE_VARIABLE_Fixup_48 = ((MR_Word) (conv2_STATE_VARIABLE_Fixup_48));
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_6 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (LocalVarDefns_8));
          MR_hl_field(0, base, 1) = ((MR_Box) (FuncDefns_9));
          MR_hl_field(0, base, 2) = ((MR_Box) (SubStmts_12));
          MR_hl_field(0, base, 3) = ((MR_Box) (Context_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_13 = ((MR_Unsigned) ((MR_hl_field(1, Stmt0_5, 0))) & (MR_Integer) 1);
        MR_Word Rval_14 = ((MR_Word) ((MR_hl_field(1, Stmt0_5, 1))));
        MR_Word BodyStmt0_15 = ((MR_Word) ((MR_hl_field(1, Stmt0_5, 2))));
        MR_Word LoopLocalVars_16 = ((MR_Word) ((MR_hl_field(1, Stmt0_5, 3))));
        MR_Word BodyStmt_17;
        MR_Word Context_60 = ((MR_Word) ((MR_hl_field(1, Stmt0_5, 4))));

        ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(BodyStmt0_15, &BodyStmt_17, STATE_VARIABLE_Fixup_0_47, STATE_VARIABLE_Fixup_48);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_6 = base;
          MR_hl_field(1, base, 0) = (MR_Box) ((MR_Unsigned) (Kind_13));
          MR_hl_field(1, base, 1) = ((MR_Box) (Rval_14));
          MR_hl_field(1, base, 2) = ((MR_Box) (BodyStmt_17));
          MR_hl_field(1, base, 3) = ((MR_Box) (LoopLocalVars_16));
          MR_hl_field(1, base, 4) = ((MR_Box) (Context_60));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond_18 = ((MR_Word) ((MR_hl_field(2, Stmt0_5, 0))));
        MR_Word Then0_19 = ((MR_Word) ((MR_hl_field(2, Stmt0_5, 1))));
        MR_Word MaybeElse0_20 = ((MR_Word) ((MR_hl_field(2, Stmt0_5, 2))));
        MR_Word Then_21;
        MR_Word MaybeElse_22;
        MR_Word STATE_VARIABLE_Fixup_3_52;
        MR_Word Context_61 = ((MR_Word) ((MR_hl_field(2, Stmt0_5, 3))));

        ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(Then0_19, &Then_21, STATE_VARIABLE_Fixup_0_47, &STATE_VARIABLE_Fixup_3_52);
        if ((MaybeElse0_20 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeElse_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Fixup_48 = STATE_VARIABLE_Fixup_3_52;
        }
        else
        {
          MR_Word Stmt0_85 = ((MR_Word) ((MR_hl_field(1, MaybeElse0_20, 0))));
          MR_Word Stmt_86;

          ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(Stmt0_85, &Stmt_86, STATE_VARIABLE_Fixup_3_52, STATE_VARIABLE_Fixup_48);
          {
            MaybeElse_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, MaybeElse_22, 0) = ((MR_Box) (Stmt_86));
          }
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_6 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Cond_18));
          MR_hl_field(2, base, 1) = ((MR_Box) (Then_21));
          MR_hl_field(2, base, 2) = ((MR_Box) (MaybeElse_22));
          MR_hl_field(2, base, 3) = ((MR_Box) (Context_61));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Stmt0_5, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_23 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 1))));
            MR_Word Val_24 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 2))));
            MR_Word Range_25 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 3))));
            MR_Word Cases0_26 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 4))));
            MR_Word Default0_27 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 5))));
            MR_Word Cases_28;
            MR_Word Default_29;
            MR_Word STATE_VARIABLE_Fixup_5_55;
            MR_Word Context_62 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 6))));
            MR_Box conv5_STATE_VARIABLE_Fixup_5_55;

            mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__ml_accurate_gc__ml_backend__ml_accurate_gc__type_ctor_info_fixup_newobj_info_0), (MR_Word) (&ml_backend__ml_accurate_gc_scalar_common_6[1]), Cases0_26, &Cases_28, ((MR_Box) (STATE_VARIABLE_Fixup_0_47)), &conv5_STATE_VARIABLE_Fixup_5_55);
            STATE_VARIABLE_Fixup_5_55 = ((MR_Word) (conv5_STATE_VARIABLE_Fixup_5_55));
            switch (MR_tag((MR_Word) Default0_27)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  Default_29 = Default0_27;
                  *STATE_VARIABLE_Fixup_48 = STATE_VARIABLE_Fixup_5_55;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Stmt0_89 = ((MR_Word) ((MR_hl_field(1, Default0_27, 0))));
                  MR_Word Stmt_90;

                  ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(Stmt0_89, &Stmt_90, STATE_VARIABLE_Fixup_5_55, STATE_VARIABLE_Fixup_48);
                  {
                    Default_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Default_29, 0) = ((MR_Box) (Stmt_90));
                  }
                }
                break;
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Type_23));
              MR_hl_field(3, base, 2) = ((MR_Box) (Val_24));
              MR_hl_field(3, base, 3) = ((MR_Box) (Range_25));
              MR_hl_field(3, base, 4) = ((MR_Box) (Cases_28));
              MR_hl_field(3, base, 5) = ((MR_Box) (Default_29));
              MR_hl_field(3, base, 6) = ((MR_Box) (Context_62));
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
            *Stmt_6 = Stmt0_5;
            *STATE_VARIABLE_Fixup_48 = STATE_VARIABLE_Fixup_0_47;
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Ref_42 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 1))));
            MR_Word HandlerStmt0_43 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 3))));
            MR_Word HandlerStmt_44;
            MR_Word STATE_VARIABLE_Fixup_7_57;
            MR_Word Context_68 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 4))));
            MR_Word BodyStmt0_69 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 2))));
            MR_Word BodyStmt_70;

            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(BodyStmt0_69, &BodyStmt_70, STATE_VARIABLE_Fixup_0_47, &STATE_VARIABLE_Fixup_7_57);
            ml_backend__ml_accurate_gc__fixup_newobj_in_stmt_4_p_0(HandlerStmt0_43, &HandlerStmt_44, STATE_VARIABLE_Fixup_7_57, STATE_VARIABLE_Fixup_48);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(3, base, 1) = ((MR_Box) (Ref_42));
              MR_hl_field(3, base, 2) = ((MR_Box) (BodyStmt_70));
              MR_hl_field(3, base, 3) = ((MR_Box) (HandlerStmt_44));
              MR_hl_field(3, base, 4) = ((MR_Box) (Context_68));
            }
          }
          break;
        case (MR_Integer) 8:
          ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(Stmt0_5, Stmt_6, STATE_VARIABLE_Fixup_0_47, STATE_VARIABLE_Fixup_48);
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Stmt_12;
  MR_Integer conv0_HeadVar__7_7;

  ml_backend__ml_accurate_gc__init_field_n_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_Stmt_12, ((MR_Integer) (wrapper_arg_3)), &conv0_HeadVar__7_7);
  *wrapper_arg_2 = ((MR_Box) (conv1_Stmt_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_Fixup_0_50,
  MR_Word * STATE_VARIABLE_Fixup_51)
{
  MR_bool succeeded;
  MR_Word AtomicStmt0_8 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 1))));
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(3, Stmt0_5, 2))));

  switch (MR_tag((MR_Word) AtomicStmt0_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Stmt_6 = Stmt0_5;
        *STATE_VARIABLE_Fixup_51 = STATE_VARIABLE_Fixup_0_50;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, AtomicStmt0_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
        case (MR_Integer) 1:
        case (MR_Integer) 3:
        case (MR_Integer) 4:
        case (MR_Integer) 5:
        case (MR_Integer) 6:
        case (MR_Integer) 7:
          {
            *Stmt_6 = Stmt0_5;
            *STATE_VARIABLE_Fixup_51 = STATE_VARIABLE_Fixup_0_50;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_10 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_8, 1))));
            MR_Word Ptag_11 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_8, 2))));
            MR_Word PointerType_13 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_8, 4))));
            MR_Word ArgRvalsTypes_16 = ((MR_Word) ((MR_hl_field(3, AtomicStmt0_8, 7))));
            MR_Integer Id_19;
            MR_Word NextId_20;
            MR_Word VarName_21;
            MR_Word VarType_22;
            MR_Word NullPointers_23;
            MR_Word Initializer_24;
            MR_Word VarDecl_26;
            MR_Word Locals0_27;
            MR_Word Locals_28;
            MR_Word VarLval_29;
            MR_Word PtrRval_30;
            MR_Word ArgInitStmts_31;
            MR_Word TaggedPtrRval_33;
            MR_Word AssignStmt_34;
            MR_Word Var_52 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Fixup_0_50, 2))));
            MR_Word Var_53;
            MR_Integer Var_55;
            MR_Word STATE_VARIABLE_Fixup_1_60;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_67;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_75;
            MR_Word Var_80;
            MR_Word Var_82;
            MR_Box conv2__NumFields_32;
            uint8_t Var_65;

            mercury__counter__allocate_3_p_0(&Id_19, Var_52, &NextId_20);
            {
              Var_53 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_53, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_53, 1) = ((MR_Box) (Id_19));
            }
            {
              VarName_21 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, VarName_21, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, VarName_21, 1) = ((MR_Box) (Var_53));
            }
            VarType_22 = (MR_Word) (MR_mkword(3, &ml_backend__ml_accurate_gc_scalar_common_1[4]));
            Var_55 = mercury__list__length_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), ArgRvalsTypes_16);
            NullPointers_23 = mercury__list__duplicate_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Var_55, ((MR_Box) (MR_mkword(1, &ml_backend__ml_accurate_gc_scalar_common_3[0]))));
            {
              Initializer_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Initializer_24, 0) = ((MR_Box) (NullPointers_23));
            }
            VarDecl_26 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(VarName_21, VarType_22, Initializer_24, (MR_Word) ((MR_Unsigned) 0U), Context_9);
            Var_75 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Fixup_0_50, 0))));
            Locals0_27 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Fixup_0_50, 1))));
            {
              STATE_VARIABLE_Fixup_1_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, STATE_VARIABLE_Fixup_1_60, 0) = ((MR_Box) (Var_75));
              MR_hl_field(0, STATE_VARIABLE_Fixup_1_60, 1) = ((MR_Box) (Locals0_27));
              MR_hl_field(0, STATE_VARIABLE_Fixup_1_60, 2) = ((MR_Box) (NextId_20));
            }
            Locals_28 = mercury__cord__snoc_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Locals0_27, ((MR_Box) (VarDecl_26)));
            Var_80 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Fixup_1_60, 0))));
            Var_82 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_Fixup_1_60, 2))));
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_Fixup_51 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_80));
              MR_hl_field(0, base, 1) = ((MR_Box) (Locals_28));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_82));
            }
            {
              VarLval_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, VarLval_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(3, VarLval_29, 1) = ((MR_Box) (VarName_21));
              MR_hl_field(3, VarLval_29, 2) = ((MR_Box) (VarType_22));
            }
            {
              Var_62 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_62, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(3, Var_62, 1) = ((MR_Box) (VarLval_29));
            }
            {
              PtrRval_30 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, PtrRval_30, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(3, PtrRval_30, 1) = ((MR_Box) (PointerType_13));
              MR_hl_field(3, PtrRval_30, 2) = ((MR_Box) (Var_62));
            }
            {
              Var_63 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_63, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_4[0]));
              MR_hl_field(0, Var_63, 1) = ((MR_Box) (ml_backend__ml_accurate_gc__fixup_newobj_in_atomic_statement_4_p_0_1));
              MR_hl_field(0, Var_63, 2) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, Var_63, 3) = ((MR_Box) (PointerType_13));
              MR_hl_field(0, Var_63, 4) = ((MR_Box) (PtrRval_30));
              MR_hl_field(0, Var_63, 5) = ((MR_Box) (Context_9));
            }
            mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_typed_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_63, ArgRvalsTypes_16, &ArgInitStmts_31, ((MR_Box) ((MR_Integer) 0)), &conv2__NumFields_32);
            Var_65 = (uint8_t) (Ptag_11);
            succeeded = (Var_65 == UINT8_C(0));
            if (succeeded)
              TaggedPtrRval_33 = PtrRval_30;
            else
            {
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(3, Var_66, 1) = ((MR_Box) (Ptag_11));
                MR_hl_field(3, Var_66, 2) = ((MR_Box) (PtrRval_30));
              }
              {
                TaggedPtrRval_33 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, TaggedPtrRval_33, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(3, TaggedPtrRval_33, 1) = ((MR_Box) (PointerType_13));
                MR_hl_field(3, TaggedPtrRval_33, 2) = ((MR_Box) (Var_66));
              }
            }
            {
              Var_67 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_67, 0) = ((MR_Box) (Lval_10));
              MR_hl_field(2, Var_67, 1) = ((MR_Box) (TaggedPtrRval_33));
            }
            {
              AssignStmt_34 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, AssignStmt_34, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(3, AssignStmt_34, 1) = ((MR_Box) (Var_67));
              MR_hl_field(3, AssignStmt_34, 2) = ((MR_Box) (Context_9));
            }
            {
              Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_71, 0) = ((MR_Box) (AssignStmt_34));
              MR_hl_field(1, Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            Var_70 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), ArgInitStmts_31, Var_71);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *Stmt_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(0, base, 2) = ((MR_Box) (Var_70));
              MR_hl_field(0, base, 3) = ((MR_Box) (Context_9));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_accurate_gc__ml_gen_trace_var_6_p_0(
  MR_Word Info_7,
  MR_Word VarName_8,
  MR_Word Type_9,
  MR_Word TypeInfoRval_10,
  MR_Word Context_11,
  MR_Word * TraceStmt_12)
{
  MR_Word ModuleInfo_13;
  MR_Word MLDS_Type_14;
  MR_Word VarLval_15;
  MR_Integer ProcId_19;
  MR_Word PredModule_20;
  MR_Word MLDS_Module_21;
  MR_Word ProcLabel_22;
  MR_Word FuncLabel_23;
  MR_Word QualFuncLabel_24;
  MR_Word CPointerType_25;
  MR_Word ArgTypes_26;
  MR_Word Signature_27;
  MR_Word FuncAddr_28;
  MR_Word CastVarAddr_29;
  MR_Word Var_34;
  MR_Word Var_38;
  MR_Word Var_41;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_44;
  MR_Word Var_45;

  ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(Info_7, &ModuleInfo_13);
  MLDS_Type_14 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_13, Type_9);
  {
    VarLval_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VarLval_15, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, VarLval_15, 1) = ((MR_Box) (VarName_8));
    MR_hl_field(3, VarLval_15, 2) = ((MR_Box) (MLDS_Type_14));
  }
  ProcId_19 = hlds__hlds_pred__initial_proc_id_0_f_0();
  PredModule_20 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
  MLDS_Module_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(PredModule_20);
  {
    ProcLabel_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ProcLabel_22, 0) = ((MR_Box) (&ml_backend__ml_accurate_gc_scalar_common_2[0]));
    MR_hl_field(0, ProcLabel_22, 1) = ((MR_Box) (ProcId_19));
  }
  {
    FuncLabel_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FuncLabel_23, 0) = ((MR_Box) (ProcLabel_22));
    MR_hl_field(0, FuncLabel_23, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    QualFuncLabel_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, QualFuncLabel_24, 0) = ((MR_Box) (MLDS_Module_21));
    MR_hl_field(0, QualFuncLabel_24, 1) = ((MR_Box) (FuncLabel_23));
  }
  Var_34 = parse_tree__builtin_lib_types__c_pointer_type_0_f_0();
  {
    CPointerType_25 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CPointerType_25, 0) = ((MR_Box) ((MR_Unsigned) 3U));
    MR_hl_field(3, CPointerType_25, 1) = ((MR_Box) (Var_34));
    MR_hl_field(3, CPointerType_25, 2) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_accurate_gc_scalar_common_1[3])));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (CPointerType_25));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    ArgTypes_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, ArgTypes_26, 0) = ((MR_Box) ((MR_Unsigned) 32U));
    MR_hl_field(1, ArgTypes_26, 1) = ((MR_Box) (Var_38));
  }
  {
    Signature_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Signature_27, 0) = ((MR_Box) (ArgTypes_26));
    MR_hl_field(0, Signature_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) (QualFuncLabel_24));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (Signature_27));
  }
  Var_41 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_42)));
  {
    FuncAddr_28 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, FuncAddr_28, 0) = ((MR_Box) ((MR_Unsigned) 1U));
    MR_hl_field(3, FuncAddr_28, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_43 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_43, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_43, 1) = ((MR_Box) (VarLval_15));
  }
  {
    CastVarAddr_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, CastVarAddr_29, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, CastVarAddr_29, 1) = ((MR_Box) (CPointerType_25));
    MR_hl_field(3, CastVarAddr_29, 2) = ((MR_Box) (Var_43));
  }
  {
    Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_45, 0) = ((MR_Box) (CastVarAddr_29));
    MR_hl_field(1, Var_45, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (TypeInfoRval_10));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
    *TraceStmt_12 = base;
    MR_hl_field(3, base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
    MR_hl_field(3, base, 1) = ((MR_Box) (Signature_27));
    MR_hl_field(3, base, 2) = ((MR_Box) (FuncAddr_28));
    MR_hl_field(3, base, 3) = ((MR_Box) (Var_44));
    MR_hl_field(3, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, base, 5) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
    MR_hl_field(3, base, 6) = ((MR_Box) (Context_11));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_accurate_gc____Unify____fixup_newobj_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_accurate_gc____Compare____fixup_newobj_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_accurate_gc____Unify____how_to_get_type_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_accurate_gc____Compare____how_to_get_type_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ml_backend.ml_accurate_gc.
