/*
** Automatically generated from `ml_optimize.m'
** by the Mercury compiler,
** version rotd-2019-03-31
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


// :- module ml_backend.ml_optimize.
// :- implementation.

/*
INIT mercury__ml_backend__ml_optimize__init
ENDINIT
*/

#include "ml_backend.ml_optimize.mih"


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
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
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
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_dump.mih"
#include "mode_robdd.tfeirn.mih"
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



struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s {
  MR_bool ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7;
  jmp_buf ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0;

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[4];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1];

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1];

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4];

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4];

static const MR_DuArgLocn ml_backend__ml_optimize__ml_backend__ml_optimize__field_locns_var_elim_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1];

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1];

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__733__1_3_p_0(
  MR_Word RHS_18,
  MR_Word ThisVarName_19,
  MR_Word LambdaHeadVar__1_39);

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
  MR_Word Component0_5,
  MR_Word * Component_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_17,
  MR_Word * STATE_VARIABLE_VarElimInfo_18);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(
  MR_Word Case0_5,
  MR_Word * Case_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * STATE_VARIABLE_VarElimInfo_15);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
  MR_Word Cond0_5,
  MR_Word * Cond_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * STATE_VARIABLE_VarElimInfo_15);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(
  MR_Word FuncDefn0_5,
  MR_Word * FuncDefn_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_19,
  MR_Word * STATE_VARIABLE_VarElimInfo_20);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
  MR_Word Default0_5,
  MR_Word * Default_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_10,
  MR_Word * STATE_VARIABLE_VarElimInfo_11);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_56,
  MR_Word * STATE_VARIABLE_VarElimInfo_57);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * STATE_VARIABLE_VarElimInfo_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_33,
  MR_Word * STATE_VARIABLE_VarElimInfo_34);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
  MR_Word Op0_5,
  MR_Word * Op_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_13,
  MR_Word * STATE_VARIABLE_VarElimInfo_14);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_typed_rvals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * STATE_VARIABLE_VarElimInfo_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(
  MR_Word STATE_VARIABLE_Lvals_0_7,
  MR_Word * STATE_VARIABLE_Lvals_8,
  MR_Word STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * STATE_VARIABLE_VarElimInfo_10);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(
  MR_Word STATE_VARIABLE_Rvals_0_7,
  MR_Word * STATE_VARIABLE_Rvals_8,
  MR_Word STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * STATE_VARIABLE_VarElimInfo_10);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(
  MR_Word LocalVarDefn0_5,
  MR_Word * LocalVarDefn_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * STATE_VARIABLE_VarElimInfo_15);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
  MR_Word Init0_5,
  MR_Word * Init_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_15,
  MR_Word * STATE_VARIABLE_VarElimInfo_16);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
  MR_Word Lval0_5,
  MR_Word * Lval_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_20,
  MR_Word * STATE_VARIABLE_VarElimInfo_21);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word Rval0_5,
  MR_Word * Rval_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_29,
  MR_Word * STATE_VARIABLE_VarElimInfo_30);

static void MR_CALL 
ml_backend__ml_optimize__invalidate_if_eliminating_local_loop_var_3_p_0(
  MR_Word VarName_4,
  MR_Word STATE_VARIABLE_VarElimInfo_0_6,
  MR_Word * STATE_VARIABLE_VarElimInfo_7);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0(
  MR_Word STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * STATE_VARIABLE_LocalVarDefns_14,
  MR_Word STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * STATE_VARIABLE_FuncDefns_16,
  MR_Word STATE_VARIABLE_Stmts_0_17,
  MR_Word * STATE_VARIABLE_Stmts_18,
  MR_Word STATE_VARIABLE_VarElimInfo_0_19,
  MR_Word * STATE_VARIABLE_VarElimInfo_20);

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word Stmt_3);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word OptInfo_4,
  MR_Word Case0_5,
  MR_Word * Case_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Globals_6,
  MR_Word FuncDefn0_7,
  MR_Word * FuncDefn_8);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
  MR_Word OptInfo_4,
  MR_Word Stmt0_5,
  MR_Word * Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_stmt_3_p_0(
  MR_Word OptInfo_4,
  MR_Word STATE_VARIABLE_MaybeStmt_0_8,
  MR_Word * STATE_VARIABLE_MaybeStmt_9);

static void MR_CALL 
ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_105_109_105_122_101_95_105_110_95_99_97_108_108_95_115_116_109_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6);

static void MR_CALL 
ml_backend__ml_optimize__maybe_eliminate_locals_7_p_0(
  MR_Word OptInfo_8,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * STATE_VARIABLE_LocalVarDefns_14,
  MR_Word STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * STATE_VARIABLE_FuncDefns_16,
  MR_Word STATE_VARIABLE_Stmts_0_17,
  MR_Word * STATE_VARIABLE_Stmts_18);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_FuncDefns_0_4,
  MR_Word * STATE_VARIABLE_FuncDefns_5,
  MR_Word STATE_VARIABLE_Stmts_0_6,
  MR_Word * STATE_VARIABLE_Stmts_7);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0(
  MR_Word QualVarName_11,
  MR_Word VarRval_12,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_22,
  MR_Word * STATE_VARIABLE_LocalVarDefns_23,
  MR_Word STATE_VARIABLE_FuncDefns_0_24,
  MR_Word * STATE_VARIABLE_FuncDefns_25,
  MR_Word STATE_VARIABLE_Stmts_0_26,
  MR_Word * STATE_VARIABLE_Stmts_27,
  MR_Integer * Count_16,
  MR_Word * Invalidated_17);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(
  void * env_ptr_arg);

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(
  MR_Word VarName_5,
  MR_Word * Rval_6,
  MR_Word HeadVar__3_3,
  MR_Word * Stmts_9);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
  MR_Word Rval_2);

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
  MR_Word Rval_2);

static MR_Word MR_CALL 
ml_backend__ml_optimize__rval_is_cheap_enough_to_duplicate_1_f_0(
  MR_Word Rval_3);

static void MR_CALL 
ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(
  MR_Word OptInfo_6,
  MR_Word STATE_VARIABLE_Defns_0_11,
  MR_Word * STATE_VARIABLE_Defns_12,
  MR_Word STATE_VARIABLE_Stmts_0_13,
  MR_Word * STATE_VARIABLE_Stmts_14);

static MR_bool MR_CALL 
ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_LocalVarDefns_0_2,
  MR_Word * STATE_VARIABLE_LocalVarDefns_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_this_var_defn_6_p_0(
  MR_Word VarName_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPrevDefns_0_17,
  MR_Word * STATE_VARIABLE_RevPrevDefns_18,
  MR_Word * ThisVarDefn_11,
  MR_Word * LaterDefns_12);

static MR_Box MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0(
  MR_Word STATE_VARIABLE_Stmts_0_4,
  MR_Word * STATE_VARIABLE_Stmts_5);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0(
  MR_Word OptInfo_4,
  MR_Word STATE_VARIABLE_Stmts_0_8,
  MR_Word * STATE_VARIABLE_Stmts_9);

static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statement_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statement_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
ml_backend__ml_optimize__peephole_opt_statement_4_p_0(
  MR_Word Stmt0_5,
  MR_Word Stmt1_6,
  MR_Word Stmts2_7,
  MR_Word * Stmts_8);

static void MR_CALL 
ml_backend__ml_optimize__statement_affects_lvals_3_p_0(
  MR_Word Lvals_4,
  MR_Word Stmt_5,
  MR_Word * Affects_6);

static void MR_CALL 
ml_backend__ml_optimize__cases_affect_lvals_3_p_0(
  MR_Word Lvals_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_optimize__statements_affect_lvals_3_p_0(
  MR_Word Lvals_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_Components_0_22,
  MR_Word * STATE_VARIABLE_Components_23);

static void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[10][7];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[1][5];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[18][3];

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[4][6];




static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_2[10][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_4[18][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_optimize__peephole_opt_statement_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_optimize__peephole_opt_statement_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_10_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_10_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_10_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[1])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[2])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[4])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[5])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[7])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[6])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[8])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[3])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[9])),
    ((MR_Box) (ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_optimize_scalar_common_5[4][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0)),
    ((MR_Box) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_optimize__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_stmt_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_func_params_0)
};

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0[4] = {
  (MR_String) "oi_globals",
  (MR_String) "oi_module_name",
  (MR_String) "oi_func_name",
  (MR_String) "oi_func_params"
};

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0 = {
  (MR_String) "opt_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_opt_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_opt_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_opt_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_opt_info_0_0
};

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_optimize____Unify____opt_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_optimize____Compare____opt_info_0_0_10001)),
  (MR_String) "ml_backend.ml_optimize",
  (MR_String) "opt_info",
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_opt_info_0 },
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_opt_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_opt_info_0
};

static const MR_PseudoTypeInfo ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_ConstString ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0[4] = {
  (MR_String) "var_name",
  (MR_String) "var_value",
  (MR_String) "replace_count",
  (MR_String) "invalidated"
};

static const MR_DuArgLocn ml_backend__ml_optimize__ml_backend__ml_optimize__field_locns_var_elim_info_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0 = {
  (MR_String) "var_elim_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_types_var_elim_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_names_var_elim_info_0_0,
  ml_backend__ml_optimize__ml_backend__ml_optimize__field_locns_var_elim_info_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_optimize__ml_backend__ml_optimize__du_stag_ordered_var_elim_info_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0[1] = {
  &ml_backend__ml_optimize__ml_backend__ml_optimize__du_functor_desc_var_elim_info_0_0
};

static const MR_Integer ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001)),
  (MR_String) "ml_backend.ml_optimize",
  (MR_String) "var_elim_info",
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_name_ordered_var_elim_info_0 },
  {     ml_backend__ml_optimize__ml_backend__ml_optimize__du_ptag_ordered_var_elim_info_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  ml_backend__ml_optimize__ml_backend__ml_optimize__functor_number_map_var_elim_info_0
};

static MR_bool MR_CALL 
ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__733__1_3_p_0(
  MR_Word RHS_18,
  MR_Word ThisVarName_19,
  MR_Word LambdaHeadVar__1_39)
{
  {
    MR_bool succeeded;
    MR_Word OtherVarName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 0))));
    MR_Word OtherInitializer_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_39, (MR_Integer) 3))));

    {
      MR_Word Var_41;

      Var_41 = ml_backend__ml_util__rval_contains_var_2_f_0(RHS_18, OtherVarName_26);
      succeeded = (Var_41 == (MR_Integer) 1);
    }
    if (!(succeeded))
    {
      MR_Word Var_40;

      Var_40 = ml_backend__ml_util__initializer_contains_var_2_f_0(OtherInitializer_29, ThisVarName_19);
      succeeded = (Var_40 == (MR_Integer) 1);
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      ml_backend__mlds____Compare____mlds_local_var_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        ml_backend__mlds____Compare____mlds_rval_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          succeeded = (ArgX3_10 < ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX3_10 > ArgY3_11);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Integer Var_21 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_22 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_21 < Var_22);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_21 > Var_22);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Integer ArgY3_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))) & (MR_Integer) 1);

      succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));
      MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word SubResult1_6;

      libs__globals____Compare____globals_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        ml_backend__mlds____Compare____mlds_module_name_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;

          ml_backend__mlds____Compare____mlds_function_name_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
          succeeded = (SubResult3_12 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
            ml_backend__mlds____Compare____mlds_func_params_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3))));
      MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3))));

      succeeded = libs__globals____Unify____globals_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_function_name_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = ml_backend__mlds____Unify____mlds_func_params_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(
  MR_Word Component0_5,
  MR_Word * Component_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_17,
  MR_Word * STATE_VARIABLE_VarElimInfo_18)
{
  switch (MR_tag((MR_Word) Component0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Component_6 = Component0_5;
        *STATE_VARIABLE_VarElimInfo_18 = STATE_VARIABLE_VarElimInfo_0_17;
      }
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      {
        *Component_6 = Component0_5;
        *STATE_VARIABLE_VarElimInfo_18 = STATE_VARIABLE_VarElimInfo_0_17;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Component0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_5, (MR_Integer) 1))));
            MR_Word Rval_14;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_13, &Rval_14, STATE_VARIABLE_VarElimInfo_0_17, STATE_VARIABLE_VarElimInfo_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Component_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_14));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Component0_5, (MR_Integer) 1))));
            MR_Word Lval_16;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_15, &Lval_16, STATE_VARIABLE_VarElimInfo_0_17, STATE_VARIABLE_VarElimInfo_18);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Component_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_16));
            }
          }
          break;
        case (MR_Integer) 2:
        case (MR_Integer) 3:
          {
            *Component_6 = Component0_5;
            *STATE_VARIABLE_VarElimInfo_18 = STATE_VARIABLE_VarElimInfo_0_17;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Cond_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Cond_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_Cond_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(
  MR_Word Case0_5,
  MR_Word * Case_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * STATE_VARIABLE_VarElimInfo_15)
{
  {
    MR_Word FirstCond0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0))));
    MR_Word LaterConds0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1))));
    MR_Word Stmt0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 2))));
    MR_Word FirstCond_11;
    MR_Word LaterConds_12;
    MR_Word Stmt_13;
    MR_Word STATE_VARIABLE_VarElimInfo_16_16;
    MR_Word STATE_VARIABLE_VarElimInfo_18_18;
    MR_Box conv2_STATE_VARIABLE_VarElimInfo_18_18;

    ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(FirstCond0_8, &FirstCond_11, STATE_VARIABLE_VarElimInfo_0_14, &STATE_VARIABLE_VarElimInfo_16_16);
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_case_match_cond_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[17]), LaterConds0_9, &LaterConds_12, ((MR_Box) (STATE_VARIABLE_VarElimInfo_16_16)), &conv2_STATE_VARIABLE_VarElimInfo_18_18);
    STATE_VARIABLE_VarElimInfo_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_18_18));
    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(Stmt0_10, &Stmt_13, STATE_VARIABLE_VarElimInfo_18_18, STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstCond_11));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LaterConds_12));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmt_13));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_case_cond_4_p_0(
  MR_Word Cond0_5,
  MR_Word * Cond_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * STATE_VARIABLE_VarElimInfo_15)
{
  if (((MR_tag((MR_Word) Cond0_5)) == (MR_Integer) 1))
  {
    MR_Word Low0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_5, (MR_Integer) 0))));
    MR_Word High0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cond0_5, (MR_Integer) 1))));
    MR_Word Low_12;
    MR_Word High_13;
    MR_Word STATE_VARIABLE_VarElimInfo_16_16;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Low0_10, &Low_12, STATE_VARIABLE_VarElimInfo_0_14, &STATE_VARIABLE_VarElimInfo_16_16);
    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(High0_11, &High_13, STATE_VARIABLE_VarElimInfo_16_16, STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Cond_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Low_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (High_13));
    }
  }
  else
  {
    MR_Word Rval0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Cond0_5, (MR_Integer) 0))));
    MR_Word Rval_9;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_8, &Rval_9, STATE_VARIABLE_VarElimInfo_0_14, STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Cond_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Rval_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(
  MR_Word FuncDefn0_5,
  MR_Word * FuncDefn_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_19,
  MR_Word * STATE_VARIABLE_VarElimInfo_20)
{
  {
    MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 0))));
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 1))));
    MR_Word Flags_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 2))));
    MR_Word Id_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 3))));
    MR_Word Params_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 4))));
    MR_Word Body0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 5))));
    MR_Word EnvVarNames_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 6))));
    MR_Word MaybeRequireTailrecInfo_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_5, (MR_Integer) 7))));
    MR_Word Body_16;

    if ((Body0_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      Body_16 = Body0_13;
      *STATE_VARIABLE_VarElimInfo_20 = STATE_VARIABLE_VarElimInfo_0_19;
    }
    else
    {
      MR_Word Stmt0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body0_13, (MR_Integer) 0))));
      MR_Word Stmt_18;

      ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(Stmt0_17, &Stmt_18, STATE_VARIABLE_VarElimInfo_0_19, STATE_VARIABLE_VarElimInfo_20);
      {
        Body_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Body_16, 0) = ((MR_Box) (Stmt_18));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *FuncDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Id_11));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Params_12));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Body_16));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_14));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeRequireTailrecInfo_15));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(
  MR_Word Default0_5,
  MR_Word * Default_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_10,
  MR_Word * STATE_VARIABLE_VarElimInfo_11)
{
  switch (MR_tag((MR_Word) Default0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Default_6 = Default0_5;
        *STATE_VARIABLE_VarElimInfo_11 = STATE_VARIABLE_VarElimInfo_0_10;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Stmt0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default0_5, (MR_Integer) 0))));
        MR_Word Stmt_9;

        ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(Stmt0_8, &Stmt_9, STATE_VARIABLE_VarElimInfo_0_10, STATE_VARIABLE_VarElimInfo_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Default_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_9));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_STATE_VARIABLE_VarElimInfo_7;

    ml_backend__ml_optimize__invalidate_if_eliminating_local_loop_var_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_VarElimInfo_7);
    *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_VarElimInfo_7));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Case_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_case_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Case_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_Case_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_56,
  MR_Word * STATE_VARIABLE_VarElimInfo_57)
{
  switch (MR_tag((MR_Word) Stmt0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word LocalVarDefns0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 0))));
        MR_Word FuncDefns0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 1))));
        MR_Word SubStmts0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 2))));
        MR_Word Context_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 3))));
        MR_Word LocalVarDefns_12;
        MR_Word FuncDefns_13;
        MR_Word SubStmts_14;

        ml_backend__ml_optimize__eliminate_var_in_block_8_p_0(LocalVarDefns0_8, &LocalVarDefns_12, FuncDefns0_9, &FuncDefns_13, SubStmts0_10, &SubStmts_14, STATE_VARIABLE_VarElimInfo_0_56, STATE_VARIABLE_VarElimInfo_57);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          *Stmt_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_12));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubStmts_14));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_11));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Kind_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Word Rval0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 1))));
        MR_Word LocalLoopVars_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 3))));
        MR_Word Rval_18;
        MR_Word STATE_VARIABLE_VarElimInfo_76_76;
        MR_Word STATE_VARIABLE_VarElimInfo_77_77;
        MR_Word SubStmts0_80 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 2))));
        MR_Word Context_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 4))));
        MR_Word SubStmts_82;
        MR_Box conv4_STATE_VARIABLE_VarElimInfo_76_76;

        mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_name_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[16]), LocalLoopVars_17, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_56)), &conv4_STATE_VARIABLE_VarElimInfo_76_76);
        STATE_VARIABLE_VarElimInfo_76_76 = ((MR_Word) (conv4_STATE_VARIABLE_VarElimInfo_76_76));
        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_16, &Rval_18, STATE_VARIABLE_VarElimInfo_76_76, &STATE_VARIABLE_VarElimInfo_77_77);
        ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(SubStmts0_80, &SubStmts_82, STATE_VARIABLE_VarElimInfo_77_77, STATE_VARIABLE_VarElimInfo_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Kind_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_18));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (SubStmts_82));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LocalLoopVars_17));
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_81));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Cond0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 0))));
        MR_Word Then0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 1))));
        MR_Word MaybeElse0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 2))));
        MR_Word Cond_22;
        MR_Word Then_23;
        MR_Word MaybeElse_24;
        MR_Word STATE_VARIABLE_VarElimInfo_72_72;
        MR_Word STATE_VARIABLE_VarElimInfo_73_73;
        MR_Word Context_83 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 3))));

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Cond0_19, &Cond_22, STATE_VARIABLE_VarElimInfo_0_56, &STATE_VARIABLE_VarElimInfo_72_72);
        ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(Then0_20, &Then_23, STATE_VARIABLE_VarElimInfo_72_72, &STATE_VARIABLE_VarElimInfo_73_73);
        ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(MaybeElse0_21, &MaybeElse_24, STATE_VARIABLE_VarElimInfo_73_73, STATE_VARIABLE_VarElimInfo_57);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Cond_22));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_23));
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_24));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_83));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Type_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Val0_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word Range_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
            MR_Word Cases0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
            MR_Word Default0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5))));
            MR_Word Val_30;
            MR_Word Cases_31;
            MR_Word Default_32;
            MR_Word STATE_VARIABLE_VarElimInfo_68_68;
            MR_Word STATE_VARIABLE_VarElimInfo_70_70;
            MR_Word Context_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6))));
            MR_Box conv2_STATE_VARIABLE_VarElimInfo_70_70;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Val0_26, &Val_30, STATE_VARIABLE_VarElimInfo_0_56, &STATE_VARIABLE_VarElimInfo_68_68);
            mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[15]), Cases0_28, &Cases_31, ((MR_Box) (STATE_VARIABLE_VarElimInfo_68_68)), &conv2_STATE_VARIABLE_VarElimInfo_70_70);
            STATE_VARIABLE_VarElimInfo_70_70 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_70_70));
            ml_backend__ml_optimize__eliminate_var_in_default_4_p_0(Default0_29, &Default_32, STATE_VARIABLE_VarElimInfo_70_70, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_25));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Val_30));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Range_27));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_31));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_32));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_84));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Stmt_6 = Stmt0_5;
            *STATE_VARIABLE_VarElimInfo_57 = STATE_VARIABLE_VarElimInfo_0_56;
          }
          break;
        case (MR_Integer) 2:
          {
            *Stmt_6 = Stmt0_5;
            *STATE_VARIABLE_VarElimInfo_57 = STATE_VARIABLE_VarElimInfo_0_56;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Labels_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word Context_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
            MR_Word Rval0_86 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Rval_87;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_86, &Rval_87, STATE_VARIABLE_VarElimInfo_0_56, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_87));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Labels_37));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Context_85));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Sig_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Func0_39 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word Args0_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
            MR_Word RetLvals0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
            MR_Word TailCall_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5))) & (MR_Integer) 3);
            MR_Word Func_43;
            MR_Word Args_44;
            MR_Word RetLvals_45;
            MR_Word STATE_VARIABLE_VarElimInfo_64_64;
            MR_Word STATE_VARIABLE_VarElimInfo_65_65;
            MR_Word Context_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6))));

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Func0_39, &Func_43, STATE_VARIABLE_VarElimInfo_0_56, &STATE_VARIABLE_VarElimInfo_64_64);
            ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(Args0_40, &Args_44, STATE_VARIABLE_VarElimInfo_64_64, &STATE_VARIABLE_VarElimInfo_65_65);
            ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(RetLvals0_41, &RetLvals_45, STATE_VARIABLE_VarElimInfo_65_65, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Sig_38));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Func_43));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Args_44));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (RetLvals_45));
              MR_hl_field(MR_mktag(3), base, 5) = (MR_Box) ((MR_Unsigned) (TailCall_42));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_88));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rvals0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Rvals_47;
            MR_Word Context_89 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));

            ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(Rvals0_46, &Rvals_47, STATE_VARIABLE_VarElimInfo_0_56, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rvals_47));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_89));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word BodyStmt0_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word HandlerStmt0_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
            MR_Word BodyStmt_52;
            MR_Word HandlerStmt_53;
            MR_Word STATE_VARIABLE_VarElimInfo_59_59;
            MR_Word STATE_VARIABLE_VarElimInfo_60_60;
            MR_Word Context_91 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
            MR_Word Ref0_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Ref_93;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Ref0_92, &Ref_93, STATE_VARIABLE_VarElimInfo_0_56, &STATE_VARIABLE_VarElimInfo_59_59);
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(BodyStmt0_50, &BodyStmt_52, STATE_VARIABLE_VarElimInfo_59_59, &STATE_VARIABLE_VarElimInfo_60_60);
            ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(HandlerStmt0_51, &HandlerStmt_53, STATE_VARIABLE_VarElimInfo_60_60, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_93));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BodyStmt_52));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HandlerStmt_53));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Context_91));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Ref0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Ref_49;
            MR_Word Context_90 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Ref0_48, &Ref_49, STATE_VARIABLE_VarElimInfo_0_56, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_49));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_90));
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AtomicStmt0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word AtomicStmt_55;
            MR_Word Context_94 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));

            ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(AtomicStmt0_54, &AtomicStmt_55, STATE_VARIABLE_VarElimInfo_0_56, STATE_VARIABLE_VarElimInfo_57);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AtomicStmt_55));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_94));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_maybe_stmt_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * STATE_VARIABLE_VarElimInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarElimInfo_4 = STATE_VARIABLE_VarElimInfo_0_3;
  }
  else
  {
    MR_Word Stmt0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Stmt_9;

    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(Stmt0_8, &Stmt_9, STATE_VARIABLE_VarElimInfo_0_3, STATE_VARIABLE_VarElimInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_9));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Lval_6;
    MR_Word conv3_STATE_VARIABLE_VarElimInfo_21;

    ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Lval_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_VarElimInfo_21);
    *wrapper_arg_2 = ((MR_Box) (conv4_Lval_6));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_VarElimInfo_21));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Component_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_18;

    ml_backend__ml_optimize__eliminate_var_in_target_code_component_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Component_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_18);
    *wrapper_arg_2 = ((MR_Box) (conv1_Component_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_18));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_atomic_stmt_4_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_33,
  MR_Word * STATE_VARIABLE_VarElimInfo_34)
{
  switch (MR_tag((MR_Word) Stmt0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Stmt_6 = Stmt0_5;
        *STATE_VARIABLE_VarElimInfo_34 = STATE_VARIABLE_VarElimInfo_0_33;
      }
      break;
    case (MR_Integer) 1:
      {
        *Stmt_6 = Stmt0_5;
        *STATE_VARIABLE_VarElimInfo_34 = STATE_VARIABLE_VarElimInfo_0_33;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Lval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 0))));
        MR_Word Rval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 1))));
        MR_Word Lval_11;
        MR_Word Rval_12;
        MR_Word STATE_VARIABLE_VarElimInfo_46_46;

        ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_9, &Lval_11, STATE_VARIABLE_VarElimInfo_0_33, &STATE_VARIABLE_VarElimInfo_46_46);
        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_10, &Rval_12, STATE_VARIABLE_VarElimInfo_46_46, STATE_VARIABLE_VarElimInfo_34);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Stmt_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_11));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Rval_12));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word STATE_VARIABLE_VarElimInfo_44_44;
            MR_Word Lval0_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Rval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word Lval_50;
            MR_Word Rval_51;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_48, &Lval_50, STATE_VARIABLE_VarElimInfo_0_33, &STATE_VARIABLE_VarElimInfo_44_44);
            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_49, &Rval_51, STATE_VARIABLE_VarElimInfo_44_44, STATE_VARIABLE_VarElimInfo_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_50));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_51));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Rval_53;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_52, &Rval_53, STATE_VARIABLE_VarElimInfo_0_33, STATE_VARIABLE_VarElimInfo_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_53));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Target0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Ptag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word ExplicitSecTag_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
            MR_Word MaybeSize_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5))));
            MR_Word MaybeCtorName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6))));
            MR_Word ArgRvalsTypes0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 7))));
            MR_Word MayUseAtomic_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 8))) & (MR_Integer) 1);
            MR_Word MaybeAllocId_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 9))));
            MR_Word Target_22;
            MR_Word ArgRvalsTypes_23;
            MR_Word STATE_VARIABLE_VarElimInfo_41_41;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Target0_13, &Target_22, STATE_VARIABLE_VarElimInfo_0_33, &STATE_VARIABLE_VarElimInfo_41_41);
            ml_backend__ml_optimize__eliminate_var_in_typed_rvals_4_p_0(ArgRvalsTypes0_19, &ArgRvalsTypes_23, STATE_VARIABLE_VarElimInfo_41_41, STATE_VARIABLE_VarElimInfo_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Target_22));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Ptag_14));
              MR_hl_field(MR_mktag(3), base, 3) = (MR_Box) ((MR_Unsigned) (ExplicitSecTag_15));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Type_16));
              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (MaybeSize_17));
              MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (MaybeCtorName_18));
              MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ArgRvalsTypes_23));
              MR_hl_field(MR_mktag(3), base, 8) = (MR_Box) ((MR_Unsigned) (MayUseAtomic_20));
              MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (MaybeAllocId_21));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Lval0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Lval_55;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_54, &Lval_55, STATE_VARIABLE_VarElimInfo_0_33, STATE_VARIABLE_VarElimInfo_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_55));
            }
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval0_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word Rval_57;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_56, &Rval_57, STATE_VARIABLE_VarElimInfo_0_33, STATE_VARIABLE_VarElimInfo_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_57));
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word TrailOp0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
            MR_Word TrailOp_25;

            ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(TrailOp0_24, &TrailOp_25, STATE_VARIABLE_VarElimInfo_0_33, STATE_VARIABLE_VarElimInfo_34);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (TrailOp_25));
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Lang_26 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word Components0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word Components_28;
            MR_Box conv2_STATE_VARIABLE_VarElimInfo_34;

            mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[13]), Components0_27, &Components_28, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_33)), &conv2_STATE_VARIABLE_VarElimInfo_34);
            *STATE_VARIABLE_VarElimInfo_34 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_34));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_26));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Components_28));
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Vs_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
            MR_Word Lvals0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
            MR_String Code_31 = ((MR_String) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
            MR_Word Lvals_32;
            MR_Word Lang_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Box conv5_STATE_VARIABLE_VarElimInfo_34;

            mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[14]), Lvals0_30, &Lvals_32, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_33)), &conv5_STATE_VARIABLE_VarElimInfo_34);
            *STATE_VARIABLE_VarElimInfo_34 = ((MR_Word) (conv5_STATE_VARIABLE_VarElimInfo_34));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
              MR_hl_field(MR_mktag(3), base, 1) = (MR_Box) ((MR_Unsigned) (Lang_58));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Vs_29));
              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Lvals_32));
              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Code_31));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_trail_op_4_p_0(
  MR_Word Op0_5,
  MR_Word * Op_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_13,
  MR_Word * STATE_VARIABLE_VarElimInfo_14)
{
  switch (MR_tag((MR_Word) Op0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Op_6 = Op0_5;
        *STATE_VARIABLE_VarElimInfo_14 = STATE_VARIABLE_VarElimInfo_0_13;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Lval0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Op0_5, (MR_Integer) 0))));
        MR_Word Lval_9;

        ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_8, &Lval_9, STATE_VARIABLE_VarElimInfo_0_13, STATE_VARIABLE_VarElimInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Op_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Lval_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Rval0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Op0_5, (MR_Integer) 0))));
        MR_Word Reason_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Op0_5, (MR_Integer) 1))) & (MR_Integer) 7);
        MR_Word Rval_12;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_10, &Rval_12, STATE_VARIABLE_VarElimInfo_0_13, STATE_VARIABLE_VarElimInfo_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Op_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Rval_12));
          MR_hl_field(MR_mktag(2), base, 1) = (MR_Box) ((MR_Unsigned) (Reason_11));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Op0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op0_5, (MR_Integer) 1))));
            MR_Word Lval_20;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_19, &Lval_20, STATE_VARIABLE_VarElimInfo_0_13, STATE_VARIABLE_VarElimInfo_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Op_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_20));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Op0_5, (MR_Integer) 1))));
            MR_Word Rval_22;

            ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_21, &Rval_22, STATE_VARIABLE_VarElimInfo_0_13, STATE_VARIABLE_VarElimInfo_14);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Op_6 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Rval_22));
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_typed_rvals_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word STATE_VARIABLE_VarElimInfo_0_3,
  MR_Word * STATE_VARIABLE_VarElimInfo_4)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_VarElimInfo_4 = STATE_VARIABLE_VarElimInfo_0_3;
  }
  else
  {
    MR_Word TypedRval0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word TypedRvals0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word TypedRval_10;
    MR_Word TypedRvals_11;
    MR_Word Rval0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval0_8, (MR_Integer) 0))));
    MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypedRval0_8, (MR_Integer) 1))));
    MR_Word Rval_15;
    MR_Word STATE_VARIABLE_VarElimInfo_18_18;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_13, &Rval_15, STATE_VARIABLE_VarElimInfo_0_3, &STATE_VARIABLE_VarElimInfo_18_18);
    {
      TypedRval_10 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypedRval_10, 0) = ((MR_Box) (Rval_15));
      MR_hl_field(MR_mktag(0), TypedRval_10, 1) = ((MR_Box) (Type_14));
    }
    ml_backend__ml_optimize__eliminate_var_in_typed_rvals_4_p_0(TypedRvals0_9, &TypedRvals_11, STATE_VARIABLE_VarElimInfo_18_18, STATE_VARIABLE_VarElimInfo_4);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (TypedRval_10));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TypedRvals_11));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Lval_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_21;

    ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Lval_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_21);
    *wrapper_arg_2 = ((MR_Box) (conv1_Lval_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_21));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lvals_4_p_0(
  MR_Word STATE_VARIABLE_Lvals_0_7,
  MR_Word * STATE_VARIABLE_Lvals_8,
  MR_Word STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * STATE_VARIABLE_VarElimInfo_10)
{
  {
    MR_Box conv2_STATE_VARIABLE_VarElimInfo_10;

    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[12]), STATE_VARIABLE_Lvals_0_7, STATE_VARIABLE_Lvals_8, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_9)), &conv2_STATE_VARIABLE_VarElimInfo_10);
    *STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_10));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Rval_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_30;

    ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Rval_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_30);
    *wrapper_arg_2 = ((MR_Box) (conv1_Rval_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_30));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rvals_4_p_0(
  MR_Word STATE_VARIABLE_Rvals_0_7,
  MR_Word * STATE_VARIABLE_Rvals_8,
  MR_Word STATE_VARIABLE_VarElimInfo_0_9,
  MR_Word * STATE_VARIABLE_VarElimInfo_10)
{
  {
    MR_Box conv2_STATE_VARIABLE_VarElimInfo_10;

    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[11]), STATE_VARIABLE_Rvals_0_7, STATE_VARIABLE_Rvals_8, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_9)), &conv2_STATE_VARIABLE_VarElimInfo_10);
    *STATE_VARIABLE_VarElimInfo_10 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_10));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(
  MR_Word LocalVarDefn0_5,
  MR_Word * LocalVarDefn_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_14,
  MR_Word * STATE_VARIABLE_VarElimInfo_15)
{
  {
    MR_Word Name_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 0))));
    MR_Word Context_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 1))));
    MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 2))));
    MR_Word Initializer0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 3))));
    MR_Word GCStmt_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_5, (MR_Integer) 4))));
    MR_Word Initializer_13;

    ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(Initializer0_11, &Initializer_13, STATE_VARIABLE_VarElimInfo_0_14, STATE_VARIABLE_VarElimInfo_15);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      *LocalVarDefn_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_8));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Type_10));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Initializer_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (GCStmt_12));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_Init_6;
    MR_Word conv3_STATE_VARIABLE_VarElimInfo_16;

    ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_Init_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_VarElimInfo_16);
    *wrapper_arg_2 = ((MR_Box) (conv4_Init_6));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_VarElimInfo_16));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_Init_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_16;

    ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_Init_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_16);
    *wrapper_arg_2 = ((MR_Box) (conv1_Init_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_16));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_initializer_4_p_0(
  MR_Word Init0_5,
  MR_Word * Init_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_15,
  MR_Word * STATE_VARIABLE_VarElimInfo_16)
{
  switch (MR_tag((MR_Word) Init0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Init_6 = Init0_5;
        *STATE_VARIABLE_VarElimInfo_16 = STATE_VARIABLE_VarElimInfo_0_15;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Rval0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Init0_5, (MR_Integer) 0))));
        MR_Word Rval_9;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_8, &Rval_9, STATE_VARIABLE_VarElimInfo_0_15, STATE_VARIABLE_VarElimInfo_16);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Init_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_9));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_5, (MR_Integer) 0))));
        MR_Word Members0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Init0_5, (MR_Integer) 1))));
        MR_Word Members_14;
        MR_Box conv5_STATE_VARIABLE_VarElimInfo_16;

        mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[10]), Members0_13, &Members_14, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_15)), &conv5_STATE_VARIABLE_VarElimInfo_16);
        *STATE_VARIABLE_VarElimInfo_16 = ((MR_Word) (conv5_STATE_VARIABLE_VarElimInfo_16));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Init_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Type_12));
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Members_14));
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Elements0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Init0_5, (MR_Integer) 0))));
        MR_Word Elements_11;
        MR_Box conv2_STATE_VARIABLE_VarElimInfo_16;

        mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[9]), Elements0_10, &Elements_11, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_15)), &conv2_STATE_VARIABLE_VarElimInfo_16);
        *STATE_VARIABLE_VarElimInfo_16 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_16));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Init_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (Elements_11));
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(
  MR_Word Lval0_5,
  MR_Word * Lval_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_20,
  MR_Word * STATE_VARIABLE_VarElimInfo_21)
{
  switch (MR_tag((MR_Word) Lval0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word MaybeTag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_5, (MR_Integer) 0))));
        MR_Word Rval0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_5, (MR_Integer) 1))));
        MR_Word PtrType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_5, (MR_Integer) 2))));
        MR_Word FieldId_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_5, (MR_Integer) 3))));
        MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval0_5, (MR_Integer) 4))));
        MR_Word Rval_13;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_9, &Rval_13, STATE_VARIABLE_VarElimInfo_0_20, STATE_VARIABLE_VarElimInfo_21);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          *Lval_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeTag_8));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Rval_13));
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (PtrType_10));
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (FieldId_11));
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (FieldType_12));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval0_5, (MR_Integer) 1))));
        MR_Word Rval0_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval0_5, (MR_Integer) 0))));
        MR_Word Rval_26;

        ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(Rval0_25, &Rval_26, STATE_VARIABLE_VarElimInfo_0_20, STATE_VARIABLE_VarElimInfo_21);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Lval_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Rval_26));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Type_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        *Lval_6 = Lval0_5;
        *STATE_VARIABLE_VarElimInfo_21 = STATE_VARIABLE_VarElimInfo_0_20;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word VarName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_5, (MR_Integer) 1))));

            ml_backend__ml_optimize__invalidate_if_eliminating_local_loop_var_3_p_0(VarName_18, STATE_VARIABLE_VarElimInfo_0_20, STATE_VARIABLE_VarElimInfo_21);
            *Lval_6 = Lval0_5;
          }
          break;
        case (MR_Integer) 1:
          {
            *Lval_6 = Lval0_5;
            *STATE_VARIABLE_VarElimInfo_21 = STATE_VARIABLE_VarElimInfo_0_20;
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(
  MR_Word Rval0_5,
  MR_Word * Rval_6,
  MR_Word STATE_VARIABLE_VarElimInfo_0_29,
  MR_Word * STATE_VARIABLE_VarElimInfo_30)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          *Rval_6 = Rval0_5;
          *STATE_VARIABLE_VarElimInfo_30 = STATE_VARIABLE_VarElimInfo_0_29;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval0_5, (MR_Integer) 0))));
          MR_Word VarName_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_29, (MR_Integer) 0))));
          MR_Word Var_70;

          succeeded = ((((MR_tag((MR_Word) Lval0_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval0_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval0_8, (MR_Integer) 1))));
            succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_9, Var_70);
          }
          if (succeeded)
          {
            MR_Integer Count0_11;
            MR_Integer Var_41;
            MR_Word Var_60 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_29, (MR_Integer) 0))));
            MR_Word Var_62;

            *Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_29, (MR_Integer) 1))));
            Count0_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_29, (MR_Integer) 2))));
            Var_62 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_29, (MR_Integer) 3))) & (MR_Integer) 1);
            Var_41 = (MR_Integer) ((MR_Unsigned) Count0_11 + (MR_Unsigned) (MR_Integer) 1);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *STATE_VARIABLE_VarElimInfo_30 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_60));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (*Rval_6));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_41));
              MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) (Var_62));
            }
          }
          else
          {
            MR_Word Lval_12;

            ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_8, &Lval_12, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Rval_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Lval_12));
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Tag_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));
              MR_Word ArgRval0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word ArgRval_15;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRval0_14, &ArgRval_15, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Tag_13));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgRval_15));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 9:
            {
              *Rval_6 = Rval0_5;
              *STATE_VARIABLE_VarElimInfo_30 = STATE_VARIABLE_VarElimInfo_0_29;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));
              MR_Word ArgRval0_44 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word ArgRval_45;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRval0_44, &ArgRval_45, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_16));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgRval_45));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ArgRval0_46 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word ArgRval_47;
              MR_Word Type_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRval0_46, &ArgRval_47, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_48));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgRval_47));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ArgRval0_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word ArgRval_50;
              MR_Word Type_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRval0_49, &ArgRval_50, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_51));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgRval_50));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Op_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));
              MR_Word ArgRval0_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word ArgRval_53;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRval0_52, &ArgRval_53, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgRval_53));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ArgRvalA0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word ArgRvalB0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 3))));
              MR_Word ArgRvalA_20;
              MR_Word ArgRvalB_21;
              MR_Word STATE_VARIABLE_VarElimInfo_33_33;
              MR_Word Op_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRvalA0_18, &ArgRvalA_20, STATE_VARIABLE_VarElimInfo_0_29, &STATE_VARIABLE_VarElimInfo_33_33);
              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(ArgRvalB0_19, &ArgRvalB_21, STATE_VARIABLE_VarElimInfo_33_33, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Op_54));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ArgRvalA_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ArgRvalB_21));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));
              MR_Word Lval_56;

              ml_backend__ml_optimize__eliminate_var_in_lval_4_p_0(Lval0_55, &Lval_56, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 7U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Lval_56));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word VectorCommon_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 1))));
              MR_Word RowRval0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval0_5, (MR_Integer) 2))));
              MR_Word RowRval_24;

              ml_backend__ml_optimize__eliminate_var_in_rval_4_p_0(RowRval0_23, &RowRval_24, STATE_VARIABLE_VarElimInfo_0_29, STATE_VARIABLE_VarElimInfo_30);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                *Rval_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (VectorCommon_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (RowRval_24));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__invalidate_if_eliminating_local_loop_var_3_p_0(
  MR_Word VarName_4,
  MR_Word STATE_VARIABLE_VarElimInfo_0_6,
  MR_Word * STATE_VARIABLE_VarElimInfo_7)
{
  {
    MR_bool succeeded;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_6, (MR_Integer) 0))));

    succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_4, Var_17);
    if (succeeded)
    {
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_6, (MR_Integer) 0))));
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_6, (MR_Integer) 1))));
      MR_Integer Var_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_VarElimInfo_0_6, (MR_Integer) 2))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_VarElimInfo_7 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_14));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_15));
        MR_hl_field(MR_mktag(0), base, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      }
    }
    else
      *STATE_VARIABLE_VarElimInfo_7 = STATE_VARIABLE_VarElimInfo_0_6;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Stmt_6;
    MR_Word conv6_STATE_VARIABLE_VarElimInfo_57;

    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_Stmt_6, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_VarElimInfo_57);
    *wrapper_arg_2 = ((MR_Box) (conv7_Stmt_6));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_VarElimInfo_57));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_FuncDefn_6;
    MR_Word conv3_STATE_VARIABLE_VarElimInfo_20;

    ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_FuncDefn_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_VarElimInfo_20);
    *wrapper_arg_2 = ((MR_Box) (conv4_FuncDefn_6));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_VarElimInfo_20));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LocalVarDefn_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LocalVarDefn_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_LocalVarDefn_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_in_block_8_p_0(
  MR_Word STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * STATE_VARIABLE_LocalVarDefns_14,
  MR_Word STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * STATE_VARIABLE_FuncDefns_16,
  MR_Word STATE_VARIABLE_Stmts_0_17,
  MR_Word * STATE_VARIABLE_Stmts_18,
  MR_Word STATE_VARIABLE_VarElimInfo_0_19,
  MR_Word * STATE_VARIABLE_VarElimInfo_20)
{
  {
    MR_Word STATE_VARIABLE_VarElimInfo_23_23;
    MR_Word STATE_VARIABLE_VarElimInfo_26_26;
    MR_Box conv2_STATE_VARIABLE_VarElimInfo_23_23;
    MR_Box conv5_STATE_VARIABLE_VarElimInfo_26_26;
    MR_Box conv8_STATE_VARIABLE_VarElimInfo_20;

    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[6]), STATE_VARIABLE_LocalVarDefns_0_13, STATE_VARIABLE_LocalVarDefns_14, ((MR_Box) (STATE_VARIABLE_VarElimInfo_0_19)), &conv2_STATE_VARIABLE_VarElimInfo_23_23);
    STATE_VARIABLE_VarElimInfo_23_23 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_23_23));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[7]), STATE_VARIABLE_FuncDefns_0_15, STATE_VARIABLE_FuncDefns_16, ((MR_Box) (STATE_VARIABLE_VarElimInfo_23_23)), &conv5_STATE_VARIABLE_VarElimInfo_26_26);
    STATE_VARIABLE_VarElimInfo_26_26 = ((MR_Word) (conv5_STATE_VARIABLE_VarElimInfo_26_26));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[8]), STATE_VARIABLE_Stmts_0_17, STATE_VARIABLE_Stmts_18, ((MR_Box) (STATE_VARIABLE_VarElimInfo_26_26)), &conv8_STATE_VARIABLE_VarElimInfo_20);
    *STATE_VARIABLE_VarElimInfo_20 = ((MR_Word) (conv8_STATE_VARIABLE_VarElimInfo_20));
  }
}

static MR_Word MR_CALL 
ml_backend__ml_optimize__flatten_block_1_f_0(
  MR_Word Stmt_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Stmt_3)) == (MR_Integer) 0);
    MR_Word Stmts_4;
    MR_Word BlockStmts_5;
    MR_Word Var_7;
    MR_Word Var_8;

    if (succeeded)
    {
      Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 0))));
      Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 1))));
      BlockStmts_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_3, (MR_Integer) 2))));
      succeeded = (Var_7 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (Var_8 == (MR_Word) ((MR_Unsigned) 0U));
    }
    if (succeeded)
      Stmts_4 = BlockStmts_5;
    else
    {
      {
        Stmts_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Stmts_4, 0) = ((MR_Box) (Stmt_3));
        MR_hl_field(MR_mktag(1), Stmts_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    return Stmts_4;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_case_3_p_0(
  MR_Word OptInfo_4,
  MR_Word Case0_5,
  MR_Word * Case_6)
{
  {
    MR_Word FirstCond_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 0))));
    MR_Word LaterConds_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 1))));
    MR_Word Stmt0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Case0_5, (MR_Integer) 2))));
    MR_Word Stmt_10;

    ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, Stmt0_9, &Stmt_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Case_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FirstCond_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (LaterConds_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Stmt_10));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_function_defn_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Globals_6,
  MR_Word FuncDefn0_7,
  MR_Word * FuncDefn_8)
{
  {
    MR_Word Name_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 0))));
    MR_Word Context_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 1))));
    MR_Word Flags_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 2))));
    MR_Word PredProcId_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 3))));
    MR_Word Params_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 4))));
    MR_Word FuncBody0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 5))));
    MR_Word EnvVarNames_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 6))));
    MR_Word MaybeRequireTailrecInfo_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncDefn0_7, (MR_Integer) 7))));
    MR_Word OptInfo_17;
    MR_Word FuncBody_18;

    {
      OptInfo_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), OptInfo_17, 0) = ((MR_Box) (Globals_6));
      MR_hl_field(MR_mktag(0), OptInfo_17, 1) = ((MR_Box) (ModuleName_5));
      MR_hl_field(MR_mktag(0), OptInfo_17, 2) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(0), OptInfo_17, 3) = ((MR_Box) (Params_13));
    }
    if ((FuncBody0_14 == (MR_Word) ((MR_Unsigned) 0U)))
      FuncBody_18 = FuncBody0_14;
    else
    {
      MR_Word Stmt0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FuncBody0_14, (MR_Integer) 0))));
      MR_Word Stmt_24;

      ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_17, Stmt0_23, &Stmt_24);
      {
        FuncBody_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FuncBody_18, 0) = ((MR_Box) (Stmt_24));
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
      *FuncDefn_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_10));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Flags_11));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (PredProcId_12));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Params_13));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncBody_18));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (EnvVarNames_15));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MaybeRequireTailrecInfo_16));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Case_6;

    ml_backend__ml_optimize__optimize_in_case_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Case_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Case_6));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmt_3_p_0(
  MR_Word OptInfo_4,
  MR_Word Stmt0_5,
  MR_Word * Stmt_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Stmt0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word LocalVarDefns0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 0))));
          MR_Word FuncDefns0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 1))));
          MR_Word SubStmts0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 2))));
          MR_Word Context_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt0_5, (MR_Integer) 3))));
          MR_Word LocalVarDefns1_17;
          MR_Word SubStmts1_18;
          MR_Word LocalVarDefns_19;
          MR_Word FuncDefns_20;
          MR_Word SubStmts2_21;
          MR_Word SubStmts3_22;
          MR_Word SubStmts_23;

          ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(OptInfo_4, LocalVarDefns0_13, &LocalVarDefns1_17, SubStmts0_15, &SubStmts1_18);
          ml_backend__ml_optimize__maybe_eliminate_locals_7_p_0(OptInfo_4, LocalVarDefns1_17, &LocalVarDefns_19, FuncDefns0_14, &FuncDefns_20, SubStmts1_18, &SubStmts2_21);
          ml_backend__ml_optimize__maybe_flatten_block_2_p_0(SubStmts2_21, &SubStmts3_22);
          ml_backend__ml_optimize__optimize_in_stmts_3_p_0(OptInfo_4, SubStmts3_22, &SubStmts_23);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            *Stmt_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (LocalVarDefns_19));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (FuncDefns_20));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (SubStmts_23));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Kind_24 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Word Rval_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 1))));
          MR_Word LocalLoopVars_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 3))));
          MR_Word SubStmts0_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 2))));
          MR_Word Context_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt0_5, (MR_Integer) 4))));
          MR_Word SubStmts_77;

          ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, SubStmts0_75, &SubStmts_77);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
            *Stmt_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = (MR_Box) ((MR_Unsigned) (Kind_24));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Rval_25));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (SubStmts_77));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LocalLoopVars_26));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (Context_76));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Then0_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 1))));
          MR_Word MaybeElse0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 2))));
          MR_Word Then_29;
          MR_Word MaybeElse_30;
          MR_Word Context_78 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 3))));
          MR_Word Rval_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 0))));
          MR_Word Else_32;
          MR_Word Var_70;
          MR_Word Var_71;
          MR_Word Var_72;

          ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, Then0_27, &Then_29);
          ml_backend__ml_optimize__optimize_in_maybe_stmt_3_p_0(OptInfo_4, MaybeElse0_28, &MaybeElse_30);
          succeeded = ((MR_tag((MR_Word) Then_29)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_29, (MR_Integer) 0))));
            Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_29, (MR_Integer) 1))));
            Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Then_29, (MR_Integer) 2))));
            succeeded = (Var_70 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  succeeded = (MaybeElse_30 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    Else_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_30, (MR_Integer) 0))));
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word NotRval_33;

            {
              NotRval_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), NotRval_33, 0) = ((MR_Box) ((MR_Unsigned) 5U));
              MR_hl_field(MR_mktag(3), NotRval_33, 1) = ((MR_Box) ((MR_Unsigned) 16U));
              MR_hl_field(MR_mktag(3), NotRval_33, 2) = ((MR_Box) (Rval_79));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (NotRval_33));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Else_32));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_78));
            }
          }
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Stmt_6 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Rval_79));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (Then_29));
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (MaybeElse_30));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Context_78));
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Type_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
              MR_Word Range_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
              MR_Word Cases0_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));
              MR_Word Default0_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 5))));
              MR_Word Cases_38;
              MR_Word Default_39;
              MR_Word Var_69;
              MR_Word Context_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6))));
              MR_Word Rval_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));

              {
                Var_69 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Var_69, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[2]));
                MR_hl_field(MR_mktag(0), Var_69, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmt_3_p_0_1));
                MR_hl_field(MR_mktag(0), Var_69, 2) = ((MR_Box) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(0), Var_69, 3) = ((MR_Box) (OptInfo_4));
              }
              mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_switch_case_0), Var_69, Cases0_36, &Cases_38);
              switch (MR_tag((MR_Word) Default0_37)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Default0_37)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Default_39 = (MR_Word) ((MR_Unsigned) 0U);
                      break;
                    case (MR_Integer) 1:
                      Default_39 = (MR_Word) ((MR_Unsigned) 4U);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Stmt0_95 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default0_37, (MR_Integer) 0))));
                    MR_Word Stmt_96;

                    ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, Stmt0_95, &Stmt_96);
                    {
                      Default_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Default_39, 0) = ((MR_Box) (Stmt_96));
                    }
                  }
                  break;
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL));
                *Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Type_34));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_81));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (Range_35));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Cases_38));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (Default_39));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (Context_80));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
            *Stmt_6 = Stmt0_5;
            break;
          case (MR_Integer) 4:
            ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_105_109_105_122_101_95_105_110_95_99_97_108_108_95_115_116_109_116_95_95_91_49_93_95_48_3_p_0(Stmt0_5, Stmt_6);
            break;
          case (MR_Integer) 6:
            {
              MR_Word Ref_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
              MR_Word BodyStmt0_41 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
              MR_Word HandlerStmt0_42 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
              MR_Word BodyStmt_43;
              MR_Word HandlerStmt_44;
              MR_Word Context_82 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 4))));

              ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, BodyStmt0_41, &BodyStmt_43);
              ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, HandlerStmt0_42, &HandlerStmt_44);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL));
                *Stmt_6 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Ref_40));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (BodyStmt_43));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (HandlerStmt_44));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (Context_82));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Atomic0_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
              MR_Word Context_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
              MR_Word TargetLval_55;
              MR_Word SourceRval_56;

              succeeded = ((MR_tag((MR_Word) Atomic0_54)) == (MR_Integer) 2);
              if (succeeded)
              {
                TargetLval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_54, (MR_Integer) 0))));
                SourceRval_56 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_54, (MR_Integer) 1))));
                {
                  MR_Word TargetGlobalVar_57;
                  MR_Word Var_89;

                  succeeded = ((((MR_tag((MR_Word) TargetLval_55)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), TargetLval_55, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    TargetGlobalVar_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TargetLval_55, (MR_Integer) 1))));
                    Var_89 = ml_backend__mlds__global_dummy_var_0_f_0();
                    succeeded = ml_backend__mlds____Unify____qual_global_var_name_0_0(TargetGlobalVar_57, Var_89);
                  }
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                      *Stmt_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_85));
                    }
                  }
                  else
                  {
                    MR_Word BinOp_59;
                    MR_Word RvalA_60;
                    MR_Word RvalB_61;

                    succeeded = ((((MR_tag((MR_Word) SourceRval_56)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SourceRval_56, (MR_Integer) 0)))) == (MR_Integer) 6)));
                    if (succeeded)
                    {
                      BinOp_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SourceRval_56, (MR_Integer) 1))));
                      RvalA_60 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SourceRval_56, (MR_Integer) 2))));
                      RvalB_61 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SourceRval_56, (MR_Integer) 3))));
                      succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(RvalA_60, RvalB_61);
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) BinOp_59)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), BinOp_59, (MR_Integer) 0)))) == (MR_Integer) 8)));
                        if (succeeded)
                        {
                        }
                      }
                    }
                    if (succeeded)
                    {
                      MR_Word Atomic_64;

                      {
                        Atomic_64 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), Atomic_64, 0) = ((MR_Box) (TargetLval_55));
                        MR_hl_field(MR_mktag(2), Atomic_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_optimize_scalar_common_1[1])));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                        *Stmt_6 = base;
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (Atomic_64));
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_85));
                      }
                    }
                    else
                      *Stmt_6 = Stmt0_5;
                  }
                }
              }
              else
                *Stmt_6 = Stmt0_5;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_maybe_stmt_3_p_0(
  MR_Word OptInfo_4,
  MR_Word STATE_VARIABLE_MaybeStmt_0_8,
  MR_Word * STATE_VARIABLE_MaybeStmt_9)
{
  if ((STATE_VARIABLE_MaybeStmt_0_8 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_MaybeStmt_9 = STATE_VARIABLE_MaybeStmt_0_8;
  else
  {
    MR_Word Stmt0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_MaybeStmt_0_8, (MR_Integer) 0))));
    MR_Word Stmt_7;

    ml_backend__ml_optimize__optimize_in_stmt_3_p_0(OptInfo_4, Stmt0_6, &Stmt_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_MaybeStmt_9 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_7));
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_111_112_116_105_109_105_122_101_95_105_110_95_99_97_108_108_95_115_116_109_116_95_95_91_49_93_95_48_3_p_0(
  MR_Word Stmt0_5,
  MR_Word * Stmt_6)
{
  {
    MR_bool succeeded;
    MR_Word FuncRval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
    MR_Word CallArgRvals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 3))));
    MR_Word Context_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 6))));
    MR_Word AtomicStmt_28;
    MR_Word CodeAddr_13;
    MR_Word QualFuncLabel_14;
    MR_Word ModName_16;
    MR_Word FuncLabel_17;
    MR_Word ProcLabel_18;
    MR_Word MaybeAux_19;
    MR_Word PredLabel_20;
    MR_String PredName_23;
    MR_Word PrivateBuiltin_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;

    succeeded = ((((MR_tag((MR_Word) FuncRval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FuncRval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FuncRval_8, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_31)) == (MR_Integer) 1);
      if (succeeded)
      {
        CodeAddr_13 = (MR_Word) (MR_body((MR_Word) (Var_31), (MR_Integer) 1));
        QualFuncLabel_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CodeAddr_13, (MR_Integer) 0))));
        ModName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_14, (MR_Integer) 0))));
        FuncLabel_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), QualFuncLabel_14, (MR_Integer) 1))));
        ProcLabel_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_17, (MR_Integer) 0))));
        MaybeAux_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FuncLabel_17, (MR_Integer) 1))));
        succeeded = (MaybeAux_19 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          PredLabel_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProcLabel_18, (MR_Integer) 0))));
          succeeded = ((MR_tag((MR_Word) PredLabel_20)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_32 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), PredLabel_20, (MR_Integer) 0))) & (MR_Integer) 1);
            PredName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), PredLabel_20, (MR_Integer) 2))));
            succeeded = (Var_32 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (CallArgRvals_9 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallArgRvals_9, (MR_Integer) 0))));
                Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CallArgRvals_9, (MR_Integer) 1))));
                succeeded = (Var_37 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  if ((strcmp(PredName_23, (MR_String) "mark_hp") == 0))
                  {
                    MR_Word Lval_27;

                    succeeded = ((((MR_tag((MR_Word) Var_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      Lval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_38, (MR_Integer) 1))));
                      {
                        AtomicStmt_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), AtomicStmt_28, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                        MR_hl_field(MR_mktag(3), AtomicStmt_28, 1) = ((MR_Box) (Lval_27));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  if ((strcmp(PredName_23, (MR_String) "restore_hp") == 0))
                  {
                    {
                      AtomicStmt_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), AtomicStmt_28, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                      MR_hl_field(MR_mktag(3), AtomicStmt_28, 1) = ((MR_Box) (Var_38));
                    }
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = MR_FALSE;
                  if (succeeded)
                  {
                    PrivateBuiltin_30 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                    Var_36 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(PrivateBuiltin_30);
                    succeeded = ml_backend__mlds____Unify____mlds_module_name_0_0(ModName_16, Var_36);
                  }
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Stmt_6 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 8U));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (AtomicStmt_28));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Context_12));
      }
    else
      *Stmt_6 = Stmt0_5;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__maybe_eliminate_locals_7_p_0(
  MR_Word OptInfo_8,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_13,
  MR_Word * STATE_VARIABLE_LocalVarDefns_14,
  MR_Word STATE_VARIABLE_FuncDefns_0_15,
  MR_Word * STATE_VARIABLE_FuncDefns_16,
  MR_Word STATE_VARIABLE_Stmts_0_17,
  MR_Word * STATE_VARIABLE_Stmts_18)
{
  {
    MR_Word EliminateLocalVars_12;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptInfo_8, (MR_Integer) 0))));

    libs__globals__lookup_bool_option_3_p_0(Var_19, (MR_Integer) 483, &EliminateLocalVars_12);
    switch (EliminateLocalVars_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_LocalVarDefns_14 = STATE_VARIABLE_LocalVarDefns_0_13;
          *STATE_VARIABLE_FuncDefns_16 = STATE_VARIABLE_FuncDefns_0_15;
          *STATE_VARIABLE_Stmts_18 = STATE_VARIABLE_Stmts_0_17;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_optimize__eliminate_locals_7_p_0(OptInfo_8, STATE_VARIABLE_LocalVarDefns_0_13, STATE_VARIABLE_LocalVarDefns_14, STATE_VARIABLE_FuncDefns_0_15, STATE_VARIABLE_FuncDefns_16, STATE_VARIABLE_Stmts_0_17, STATE_VARIABLE_Stmts_18);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_locals_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_FuncDefns_0_4,
  MR_Word * STATE_VARIABLE_FuncDefns_5,
  MR_Word STATE_VARIABLE_Stmts_0_6,
  MR_Word * STATE_VARIABLE_Stmts_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_Stmts_7 = STATE_VARIABLE_Stmts_0_6;
      *STATE_VARIABLE_FuncDefns_5 = STATE_VARIABLE_FuncDefns_0_4;
    }
    else
    {
      MR_Word LocalVarDefn0_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word LocalVarDefns0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word LocalVarDefns1_21;
      MR_Word STATE_VARIABLE_FuncDefns_27_27;
      MR_Word STATE_VARIABLE_Stmts_28_28;
      MR_Word VarName_43 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_16, (MR_Integer) 0))));
      MR_Word Initializer_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn0_16, (MR_Integer) 3))));
      MR_Word Rval_48;
      MR_Integer Count_53;
      MR_Word Invalidated_54;
      MR_Word STATE_VARIABLE_Stmts_31_55;

      if ((Initializer_46 == (MR_Word) ((MR_Unsigned) 0U)))
        succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(VarName_43, &Rval_48, STATE_VARIABLE_Stmts_0_6, &STATE_VARIABLE_Stmts_31_55);
      else
      if (((MR_tag((MR_Word) Initializer_46)) == (MR_Integer) 1))
      {
        Rval_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Initializer_46, (MR_Integer) 0))));
        STATE_VARIABLE_Stmts_31_55 = STATE_VARIABLE_Stmts_0_6;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(Rval_48);
        if (succeeded)
        {
          succeeded = ml_backend__ml_optimize__rval_cannot_throw_1_p_0(Rval_48);
          if (!(succeeded))
          {
            MR_Word Globals_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word Var_58;
            MR_Word Var_59;

            succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_52, (MR_Integer) 186, (MR_Integer) 1);
            if (succeeded)
            {
              Var_58 = (MR_Integer) 187;
              Var_59 = (MR_Integer) 1;
              succeeded = libs__globals__lookup_bool_option_3_p_1(Globals_52, Var_58, Var_59);
            }
          }
          if (succeeded)
          {
            ml_backend__ml_optimize__eliminate_var_10_p_0(VarName_43, Rval_48, LocalVarDefns0_17, &LocalVarDefns1_21, STATE_VARIABLE_FuncDefns_0_4, &STATE_VARIABLE_FuncDefns_27_27, STATE_VARIABLE_Stmts_31_55, &STATE_VARIABLE_Stmts_28_28, &Count_53, &Invalidated_54);
            succeeded = (Invalidated_54 == (MR_Integer) 0);
            if (succeeded)
            {
              succeeded = (Count_53 <= (MR_Integer) 1);
              if (!(succeeded))
              {
                MR_Word Var_62;

                Var_62 = ml_backend__ml_optimize__rval_is_cheap_enough_to_duplicate_1_f_0(Rval_48);
                succeeded = (Var_62 == (MR_Integer) 1);
              }
            }
          }
        }
      }
      if (succeeded)
      {
        MR_Word next_value_of_HeadVar__2_2 = LocalVarDefns1_21;
        MR_Word next_value_of_STATE_VARIABLE_FuncDefns_0_4 = STATE_VARIABLE_FuncDefns_27_27;
        MR_Word next_value_of_STATE_VARIABLE_Stmts_0_6 = STATE_VARIABLE_Stmts_28_28;

        // direct tailcall eliminated
        ;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_FuncDefns_0_4 = next_value_of_STATE_VARIABLE_FuncDefns_0_4;
        STATE_VARIABLE_Stmts_0_6 = next_value_of_STATE_VARIABLE_Stmts_0_6;
        continue;
      }
      else
      {
        MR_Word LocalVarDefns2_22;

        ml_backend__ml_optimize__eliminate_locals_7_p_0(HeadVar__1_1, LocalVarDefns0_17, &LocalVarDefns2_22, STATE_VARIABLE_FuncDefns_0_4, STATE_VARIABLE_FuncDefns_5, STATE_VARIABLE_Stmts_0_6, STATE_VARIABLE_Stmts_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (LocalVarDefn0_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (LocalVarDefns2_22));
        }
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv7_Stmt_6;
    MR_Word conv6_STATE_VARIABLE_VarElimInfo_57;

    ml_backend__ml_optimize__eliminate_var_in_stmt_4_p_0(((MR_Word) (wrapper_arg_1)), &conv7_Stmt_6, ((MR_Word) (wrapper_arg_3)), &conv6_STATE_VARIABLE_VarElimInfo_57);
    *wrapper_arg_2 = ((MR_Box) (conv7_Stmt_6));
    *wrapper_arg_4 = ((MR_Box) (conv6_STATE_VARIABLE_VarElimInfo_57));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv4_FuncDefn_6;
    MR_Word conv3_STATE_VARIABLE_VarElimInfo_20;

    ml_backend__ml_optimize__eliminate_var_in_function_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv4_FuncDefn_6, ((MR_Word) (wrapper_arg_3)), &conv3_STATE_VARIABLE_VarElimInfo_20);
    *wrapper_arg_2 = ((MR_Box) (conv4_FuncDefn_6));
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_VarElimInfo_20));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_LocalVarDefn_6;
    MR_Word conv0_STATE_VARIABLE_VarElimInfo_15;

    ml_backend__ml_optimize__eliminate_var_in_local_var_defn_4_p_0(((MR_Word) (wrapper_arg_1)), &conv1_LocalVarDefn_6, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_VarElimInfo_15);
    *wrapper_arg_2 = ((MR_Box) (conv1_LocalVarDefn_6));
    *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_VarElimInfo_15));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__eliminate_var_10_p_0(
  MR_Word QualVarName_11,
  MR_Word VarRval_12,
  MR_Word STATE_VARIABLE_LocalVarDefns_0_22,
  MR_Word * STATE_VARIABLE_LocalVarDefns_23,
  MR_Word STATE_VARIABLE_FuncDefns_0_24,
  MR_Word * STATE_VARIABLE_FuncDefns_25,
  MR_Word STATE_VARIABLE_Stmts_0_26,
  MR_Word * STATE_VARIABLE_Stmts_27,
  MR_Integer * Count_16,
  MR_Word * Invalidated_17)
{
  {
    MR_Word VarElimInfo0_20;
    MR_Word VarElimInfo_21;
    MR_Word STATE_VARIABLE_VarElimInfo_23_51;
    MR_Word STATE_VARIABLE_VarElimInfo_26_54;
    MR_Box conv2_STATE_VARIABLE_VarElimInfo_23_51;
    MR_Box conv5_STATE_VARIABLE_VarElimInfo_26_54;
    MR_Box conv8_VarElimInfo_21;

    {
      VarElimInfo0_20 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), VarElimInfo0_20, 0) = ((MR_Box) (QualVarName_11));
      MR_hl_field(MR_mktag(0), VarElimInfo0_20, 1) = ((MR_Box) (VarRval_12));
      MR_hl_field(MR_mktag(0), VarElimInfo0_20, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), VarElimInfo0_20, 3) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    }
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[3]), STATE_VARIABLE_LocalVarDefns_0_22, STATE_VARIABLE_LocalVarDefns_23, ((MR_Box) (VarElimInfo0_20)), &conv2_STATE_VARIABLE_VarElimInfo_23_51);
    STATE_VARIABLE_VarElimInfo_23_51 = ((MR_Word) (conv2_STATE_VARIABLE_VarElimInfo_23_51));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[4]), STATE_VARIABLE_FuncDefns_0_24, STATE_VARIABLE_FuncDefns_25, ((MR_Box) (STATE_VARIABLE_VarElimInfo_23_51)), &conv5_STATE_VARIABLE_VarElimInfo_26_54);
    STATE_VARIABLE_VarElimInfo_26_54 = ((MR_Word) (conv5_STATE_VARIABLE_VarElimInfo_26_54));
    mercury__list__map_foldl_5_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[5]), STATE_VARIABLE_Stmts_0_26, STATE_VARIABLE_Stmts_27, ((MR_Box) (STATE_VARIABLE_VarElimInfo_26_54)), &conv8_VarElimInfo_21);
    VarElimInfo_21 = ((MR_Word) (conv8_VarElimInfo_21));
    *Count_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), VarElimInfo_21, (MR_Integer) 2))));
    *Invalidated_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), VarElimInfo_21, (MR_Integer) 3))) & (MR_Integer) 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s * env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s * env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_String Var_14;
      MR_Word Var_15;

      (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if ((env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
      {
        Var_14 = ((MR_String) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 1))));
        Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, (MR_Integer) 2))));
        ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s * env_ptr = (struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__commit_0) == 0)
      {
        ml_backend__ml_util__statement_is_or_contains_statement_2_p_0((env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, &(env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Label_13, ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_2, env_ptr);
        (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(
  MR_Word VarName_5,
  MR_Word * Rval_6,
  MR_Word HeadVar__3_3,
  MR_Word * Stmts_9)
{
  {
    struct ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0_s env;

    {
      MR_Word Stmts0_8;
      MR_Word Rval1_10;
      MR_Word Stmt1_11;
      MR_Word Context_26;
      MR_Word Rval0_28;
      MR_Word AtomicStmt_25;
      MR_Word Var_33;
      MR_Word Var_40;
      MR_Word _Type_27;

      (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (HeadVar__3_3 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
      {
        (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        Stmts0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
        if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          AtomicStmt_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 1))));
          Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 2))));
          (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) AtomicStmt_25)) == (MR_Integer) 2);
          if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_25, (MR_Integer) 0))));
            Rval0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_25, (MR_Integer) 1))));
            (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((((MR_tag((MR_Word) Var_33)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 1))));
              _Type_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_33, (MR_Integer) 2))));
              (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_5, Var_40);
            }
          }
        }
        if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          Rval1_10 = Rval0_28;
          {
            Stmt1_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Stmt1_11, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Stmt1_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Stmt1_11, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Stmt1_11, 3) = ((MR_Box) (Context_26));
          }
          (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word LocalVarDefns0_29;
          MR_Word FuncDefns0_30;
          MR_Word SubStmts0_31;
          MR_Word SubStmts_32;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word Context_39;

          (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7)) == (MR_Integer) 0);
          if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            LocalVarDefns0_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 0))));
            FuncDefns0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 1))));
            SubStmts0_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 2))));
            Context_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, (MR_Integer) 3))));
            Var_37 = ml_backend__ml_util__local_var_defns_contains_var_2_f_0(LocalVarDefns0_29, VarName_5);
            (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (Var_37 == (MR_Integer) 0);
            if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              Var_38 = ml_backend__ml_util__function_defns_contains_var_2_f_0(FuncDefns0_30, VarName_5);
              (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (Var_38 == (MR_Integer) 0);
              if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
              {
                (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(VarName_5, &Rval1_10, SubStmts0_31, &SubStmts_32);
                if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                {
                  {
                    Stmt1_11 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Stmt1_11, 0) = ((MR_Box) (LocalVarDefns0_29));
                    MR_hl_field(MR_mktag(0), Stmt1_11, 1) = ((MR_Box) (FuncDefns0_30));
                    MR_hl_field(MR_mktag(0), Stmt1_11, 2) = ((MR_Box) (SubStmts_32));
                    MR_hl_field(MR_mktag(0), Stmt1_11, 3) = ((MR_Box) (Context_39));
                  }
                  (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
        {
          MR_Word Var_17;
          MR_Word Var_18;
          MR_Word Var_19;
          MR_Word Var_12;

          *Rval_6 = Rval1_10;
          (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) Stmt1_11)) == (MR_Integer) 0);
          if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt1_11, (MR_Integer) 0))));
            Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt1_11, (MR_Integer) 1))));
            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt1_11, (MR_Integer) 2))));
            Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt1_11, (MR_Integer) 3))));
            (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 0U));
            if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (Var_18 == (MR_Word) ((MR_Unsigned) 0U));
              if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
                (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (Var_19 == (MR_Word) ((MR_Unsigned) 0U));
            }
          }
          if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            *Stmts_9 = Stmts0_8;
          else
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *Stmts_9 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt1_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts0_8));
            }
          (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Stmts1_16;
          MR_Word Var_20;

          Var_20 = ml_backend__ml_util__statement_contains_var_2_f_0((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7, VarName_5);
          (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = (Var_20 == (MR_Integer) 0);
          if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
          {
            ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_3(&env);
            (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = !((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded);
            if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
            {
              (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0(VarName_5, Rval_6, Stmts0_8, &Stmts1_16);
              if ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *Stmts_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__Stmt0_7));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts1_16));
                }
                (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      return (env).ml_backend__ml_optimize__find_initial_val_in_stmts_4_p_0_env_0__succeeded;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_cannot_throw_1_p_0(
  MR_Word Rval_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_21;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_9;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_22;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_20;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 7:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 8:
            {
              MR_Word SubRval_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_23;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 9:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__rval_will_not_change_1_p_0(
  MR_Word Rval_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_2)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Word SubRval_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_36;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 1:
            succeeded = MR_TRUE;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_30;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_37;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_34;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRval_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_2 = SubRval_38;

              // direct tailcall eliminated
              ;
              Rval_2 = next_value_of_Rval_2;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubRvalA_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 2))));
              MR_Word SubRvalB_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 3))));
              MR_Word next_value_of_Rval_2;

              succeeded = ml_backend__ml_optimize__rval_will_not_change_1_p_0(SubRvalA_22);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_Rval_2 = SubRvalB_23;
                Rval_2 = next_value_of_Rval_2;
                continue;
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_2, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Lval_8)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word SubRval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_8, (MR_Integer) 1))));
                    MR_Word next_value_of_Rval_2 = SubRval_13;

                    // direct tailcall eliminated
                    ;
                    Rval_2 = next_value_of_Rval_2;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubRval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_8, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_2 = SubRval_35;

                    // direct tailcall eliminated
                    ;
                    Rval_2 = next_value_of_Rval_2;
                    continue;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_8, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      succeeded = MR_TRUE;
                      break;
                    case (MR_Integer) 1:
                      succeeded = MR_TRUE;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            succeeded = MR_TRUE;
            break;
        }
        break;
    }
    return succeeded;
    break;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_optimize__rval_is_cheap_enough_to_duplicate_1_f_0(
  MR_Word Rval_3)
{
  while (MR_TRUE)
  {
    MR_Word CheapEnough_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        CheapEnough_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_3, (MR_Integer) 0))));

          switch (MR_tag((MR_Word) Lval_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
            case (MR_Integer) 2:
              CheapEnough_4 = (MR_Integer) 0;
              break;
            case (MR_Integer) 3:
              CheapEnough_4 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
            CheapEnough_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
            CheapEnough_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_3 = SubRval_37;

              // direct tailcall eliminated
              ;
              Rval_3 = next_value_of_Rval_3;
              continue;
            }
            break;
        }
        break;
    }
    return CheapEnough_4;
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__maybe_convert_assignments_into_initializers_5_p_0(
  MR_Word OptInfo_6,
  MR_Word STATE_VARIABLE_Defns_0_11,
  MR_Word * STATE_VARIABLE_Defns_12,
  MR_Word STATE_VARIABLE_Stmts_0_13,
  MR_Word * STATE_VARIABLE_Stmts_14)
{
  {
    MR_Word Globals_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptInfo_6, (MR_Integer) 0))));
    MR_Word OptInit_10;

    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 481, &OptInit_10);
    switch (OptInit_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Defns_12 = STATE_VARIABLE_Defns_0_11;
          *STATE_VARIABLE_Stmts_14 = STATE_VARIABLE_Stmts_0_13;
        }
        break;
      case (MR_Integer) 1:
        ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_Defns_0_11, STATE_VARIABLE_Defns_12, STATE_VARIABLE_Stmts_0_13, STATE_VARIABLE_Stmts_14);
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_optimize__IntroducedFrom__pred__convert_assignments_into_initializers__733__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0(
  MR_Word STATE_VARIABLE_LocalVarDefns_0_2,
  MR_Word * STATE_VARIABLE_LocalVarDefns_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_LocalVarDefns_3 = STATE_VARIABLE_LocalVarDefns_0_2;
    }
    else
    {
      MR_Word HeadStmt0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0))));
      MR_Word TailStmts0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word AtomicHeadStmt0_15;

      succeeded = ((((MR_tag((MR_Word) HeadStmt0_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadStmt0_12, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if (succeeded)
      {
        AtomicHeadStmt0_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadStmt0_12, (MR_Integer) 1))));
        {
          MR_Word RHS_18;
          MR_Word RevPrevDefns_21;
          MR_Word ThisVarDefn0_22;
          MR_Word LaterDefns_23;
          MR_Word LHS_17;
          MR_Word ThisVarName_19;
          MR_Word Filter_24;
          MR_Word Var_37;
          MR_Word Var_38;
          MR_Word TypeCtorInfo_54_54;
          MR_Box conv0_Var_31;

          succeeded = ((MR_tag((MR_Word) AtomicHeadStmt0_15)) == (MR_Integer) 2);
          if (succeeded)
          {
            LHS_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicHeadStmt0_15, (MR_Integer) 0))));
            RHS_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicHeadStmt0_15, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) LHS_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LHS_17, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (succeeded)
            {
              ThisVarName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), LHS_17, (MR_Integer) 1))));
              Var_37 = ml_backend__ml_util__rval_contains_var_2_f_0(RHS_18, ThisVarName_19);
              succeeded = (Var_37 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_38 = (MR_Word) ((MR_Unsigned) 0U);
                succeeded = ml_backend__ml_optimize__find_this_var_defn_6_p_0(ThisVarName_19, STATE_VARIABLE_LocalVarDefns_0_2, Var_38, &RevPrevDefns_21, &ThisVarDefn0_22, &LaterDefns_23);
                if (succeeded)
                {
                  {
                    Filter_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Filter_24, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[1]));
                    MR_hl_field(MR_mktag(0), Filter_24, 1) = ((MR_Box) (ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0_1));
                    MR_hl_field(MR_mktag(0), Filter_24, 2) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), Filter_24, 3) = ((MR_Box) (RHS_18));
                    MR_hl_field(MR_mktag(0), Filter_24, 4) = ((MR_Box) (ThisVarName_19));
                  }
                  TypeCtorInfo_54_54 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0);
                  succeeded = mercury__list__find_first_match_3_p_0(TypeCtorInfo_54_54, Filter_24, LaterDefns_23, &conv0_Var_31);
                  if (succeeded)
                    succeeded = MR_TRUE;
                  succeeded = !(succeeded);
                }
              }
            }
          }
          if (succeeded)
          {
            MR_Word ThisVarDefn_32;
            MR_Word Var_42;
            MR_Word STATE_VARIABLE_LocalVarDefns_43_43;
            MR_Word Var_44;
            MR_Word Var_45;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Word Var_51;
            MR_Word Var_53;
            MR_Word next_value_of_STATE_VARIABLE_LocalVarDefns_0_2;
            MR_Word next_value_of_HeadVar__4_4;

            {
              Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (RHS_18));
            }
            Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisVarDefn0_22, (MR_Integer) 0))));
            Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisVarDefn0_22, (MR_Integer) 1))));
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisVarDefn0_22, (MR_Integer) 2))));
            Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ThisVarDefn0_22, (MR_Integer) 4))));
            {
              ThisVarDefn_32 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ThisVarDefn_32, 0) = ((MR_Box) (Var_49));
              MR_hl_field(MR_mktag(0), ThisVarDefn_32, 1) = ((MR_Box) (Var_50));
              MR_hl_field(MR_mktag(0), ThisVarDefn_32, 2) = ((MR_Box) (Var_51));
              MR_hl_field(MR_mktag(0), ThisVarDefn_32, 3) = ((MR_Box) (Var_42));
              MR_hl_field(MR_mktag(0), ThisVarDefn_32, 4) = ((MR_Box) (Var_53));
            }
            Var_44 = mercury__list__reverse_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), RevPrevDefns_21);
            {
              Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (ThisVarDefn_32));
              MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (LaterDefns_23));
            }
            STATE_VARIABLE_LocalVarDefns_43_43 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_local_var_defn_0), Var_44, Var_45);
            // direct tailcall eliminated
            ;
            next_value_of_STATE_VARIABLE_LocalVarDefns_0_2 = STATE_VARIABLE_LocalVarDefns_43_43;
            next_value_of_HeadVar__4_4 = TailStmts0_13;
            STATE_VARIABLE_LocalVarDefns_0_2 = next_value_of_STATE_VARIABLE_LocalVarDefns_0_2;
            HeadVar__4_4 = next_value_of_HeadVar__4_4;
            continue;
          }
          else
          {
            succeeded = ((MR_tag((MR_Word) AtomicHeadStmt0_15)) == (MR_Integer) 1);
            if (succeeded)
            {
              {
                MR_Word TailStmts_34;

                ml_backend__ml_optimize__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_97_115_115_105_103_110_109_101_110_116_115_95_105_110_116_111_95_105_110_105_116_105_97_108_105_122_101_114_115_95_95_91_49_93_95_48_5_p_0(STATE_VARIABLE_LocalVarDefns_0_2, STATE_VARIABLE_LocalVarDefns_3, TailStmts0_13, &TailStmts_34);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HeadStmt0_12));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (TailStmts_34));
                }
              }
            }
            else
            {
              *HeadVar__5_5 = HeadVar__4_4;
              *STATE_VARIABLE_LocalVarDefns_3 = STATE_VARIABLE_LocalVarDefns_0_2;
            }
          }
        }
      }
      else
      {
        *HeadVar__5_5 = HeadVar__4_4;
        *STATE_VARIABLE_LocalVarDefns_3 = STATE_VARIABLE_LocalVarDefns_0_2;
      }
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__find_this_var_defn_6_p_0(
  MR_Word VarName_7,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_RevPrevDefns_0_17,
  MR_Word * STATE_VARIABLE_RevPrevDefns_18,
  MR_Word * ThisVarDefn_11,
  MR_Word * LaterDefns_12)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word LocalVarDefn_8;
    MR_Word LocalVarDefns_9;
    MR_Word Var_21;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      LocalVarDefn_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      LocalVarDefns_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LocalVarDefn_8, (MR_Integer) 0))));
      succeeded = ml_backend__mlds____Unify____mlds_local_var_name_0_0(VarName_7, Var_21);
      if (succeeded)
      {
        *ThisVarDefn_11 = LocalVarDefn_8;
        *LaterDefns_12 = LocalVarDefns_9;
        *STATE_VARIABLE_RevPrevDefns_18 = STATE_VARIABLE_RevPrevDefns_0_17;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word STATE_VARIABLE_RevPrevDefns_19_19;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word next_value_of_STATE_VARIABLE_RevPrevDefns_0_17;

        {
          STATE_VARIABLE_RevPrevDefns_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPrevDefns_19_19, 0) = ((MR_Box) (LocalVarDefn_8));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_RevPrevDefns_19_19, 1) = ((MR_Box) (STATE_VARIABLE_RevPrevDefns_0_17));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = LocalVarDefns_9;
        next_value_of_STATE_VARIABLE_RevPrevDefns_0_17 = STATE_VARIABLE_RevPrevDefns_19_19;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        STATE_VARIABLE_RevPrevDefns_0_17 = next_value_of_STATE_VARIABLE_RevPrevDefns_0_17;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Stmts_4;

    conv0_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Stmts_4));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__maybe_flatten_block_2_p_0(
  MR_Word STATE_VARIABLE_Stmts_0_4,
  MR_Word * STATE_VARIABLE_Stmts_5)
{
  {
    MR_Word Var_7;

    Var_7 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[2]), STATE_VARIABLE_Stmts_0_4);
    *STATE_VARIABLE_Stmts_5 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_7);
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_Stmt_6;

    ml_backend__ml_optimize__optimize_in_stmt_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), &conv0_Stmt_6);
    *wrapper_arg_2 = ((MR_Box) (conv0_Stmt_6));
  }
}

static void MR_CALL 
ml_backend__ml_optimize__optimize_in_stmts_3_p_0(
  MR_Word OptInfo_4,
  MR_Word STATE_VARIABLE_Stmts_0_8,
  MR_Word * STATE_VARIABLE_Stmts_9)
{
  {
    MR_Word Globals_6;
    MR_Word OptPeep_7;
    MR_Word Var_10;
    MR_Word STATE_VARIABLE_Stmts_11_11;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_10, 1) = ((MR_Box) (ml_backend__ml_optimize__optimize_in_stmts_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_10, 3) = ((MR_Box) (OptInfo_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_10, STATE_VARIABLE_Stmts_0_8, &STATE_VARIABLE_Stmts_11_11);
    Globals_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptInfo_4, (MR_Integer) 0))));
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 488, &OptPeep_7);
    switch (OptPeep_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Stmts_9 = STATE_VARIABLE_Stmts_11_11;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_optimize__peephole_opt_statements_2_p_0(STATE_VARIABLE_Stmts_11_11, STATE_VARIABLE_Stmts_9);
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_optimize__peephole_opt_statements_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

      if ((Var_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__2_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
      {
        MR_Word Stmt1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));
        MR_Word Stmts2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
        MR_Word ReplStmts_10;

        succeeded = ml_backend__ml_optimize__peephole_opt_statement_4_p_0(Var_15, Stmt1_7, Stmts2_8, &ReplStmts_10);
        if (succeeded)
        {
          MR_Word next_value_of_HeadVar__1_1 = ReplStmts_10;

          // direct tailcall eliminated
          ;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        else
        {
          MR_Word StmtsTail_11;
          MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 1))));
          MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0))));

          if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              StmtsTail_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), StmtsTail_11, 0) = ((MR_Box) (Var_28));
              MR_hl_field(MR_mktag(1), StmtsTail_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word Stmt1_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 0))));
            MR_Word Stmts2_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
            MR_Word ReplStmts_23;

            succeeded = ml_backend__ml_optimize__peephole_opt_statement_4_p_0(Var_28, Stmt1_20, Stmts2_21, &ReplStmts_23);
            if (succeeded)
              ml_backend__ml_optimize__peephole_opt_statements_2_p_0(ReplStmts_23, &StmtsTail_11);
            else
            {
              MR_Word StmtsTail_24;

              ml_backend__ml_optimize__peephole_opt_statements_2_p_0(Var_27, &StmtsTail_24);
              {
                StmtsTail_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), StmtsTail_11, 0) = ((MR_Box) (Var_28));
                MR_hl_field(MR_mktag(1), StmtsTail_11, 1) = ((MR_Box) (StmtsTail_24));
              }
            }
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (StmtsTail_11));
          }
        }
      }
    }
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statement_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Stmts_4;

    conv1_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv1_Stmts_4));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_optimize__peephole_opt_statement_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Stmts_4;

    conv0_Stmts_4 = ml_backend__ml_optimize__flatten_block_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_Stmts_4));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize__peephole_opt_statement_4_p_0(
  MR_Word Stmt0_5,
  MR_Word Stmt1_6,
  MR_Word Stmts2_7,
  MR_Word * Stmts_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Stmt0_5)) == (MR_Integer) 2);
    MR_Word TestRval_9;
    MR_Word StmtThen0_10;
    MR_Word MaybeStmtElse0_11;
    MR_Word Context0_12;
    MR_Word StmtThen1_13;
    MR_Word MaybeStmtElse1_14;
    MR_Word TypeCtorInfo_66_66;
    MR_Word TestRvalComponents_16;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_67;
    MR_Word Var_68;

    if (succeeded)
    {
      TestRval_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 0))));
      StmtThen0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 1))));
      MaybeStmtElse0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 2))));
      Context0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt0_5, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Stmt1_6)) == (MR_Integer) 2);
      if (succeeded)
      {
        Var_67 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt1_6, (MR_Integer) 0))));
        StmtThen1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt1_6, (MR_Integer) 1))));
        MaybeStmtElse1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt1_6, (MR_Integer) 2))));
        succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(TestRval_9, Var_67);
        if (succeeded)
        {
          TypeCtorInfo_66_66 = (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0);
          Var_39 = mercury__set__init_0_f_0(TypeCtorInfo_66_66);
          ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(TestRval_9, Var_39, &TestRvalComponents_16);
          Var_40 = (MR_Integer) 0;
          ml_backend__ml_optimize__statement_affects_lvals_3_p_0(TestRvalComponents_16, StmtThen0_10, &Var_68);
          succeeded = (Var_40 == Var_68);
          if (succeeded)
          {
            if ((MaybeStmtElse0_11 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            {
              MR_Word StmtElse0_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStmtElse0_11, (MR_Integer) 0))));
              MR_Word Var_69;

              ml_backend__ml_optimize__statement_affects_lvals_3_p_0(TestRvalComponents_16, StmtElse0_17, &Var_69);
              succeeded = ((MR_Integer) 0 == Var_69);
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word ContextThen_18;
      MR_Word ThenBlockStmts0_19;
      MR_Word ThenBlockStmts_20;
      MR_Word Then_21;
      MR_Word MaybeElse_22;
      MR_Word Stmt_29;
      MR_Word Var_42;
      MR_Word Var_79;

      ContextThen_18 = ml_backend__ml_util__get_mlds_stmt_context_1_f_0(StmtThen0_10);
      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (StmtThen1_13));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ThenBlockStmts0_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ThenBlockStmts0_19, 0) = ((MR_Box) (StmtThen0_10));
        MR_hl_field(MR_mktag(1), ThenBlockStmts0_19, 1) = ((MR_Box) (Var_42));
      }
      Var_79 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[0]), ThenBlockStmts0_19);
      ThenBlockStmts_20 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_79);
      {
        Then_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Then_21, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Then_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Then_21, 2) = ((MR_Box) (ThenBlockStmts_20));
        MR_hl_field(MR_mktag(0), Then_21, 3) = ((MR_Box) (ContextThen_18));
      }
      if ((MaybeStmtElse0_11 == (MR_Word) ((MR_Unsigned) 0U)))
        if ((MaybeStmtElse1_14 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeElse_22 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeElse_22 = MaybeStmtElse1_14;
      else
      {
        MR_Word Else0_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStmtElse0_11, (MR_Integer) 0))));

        if ((MaybeStmtElse1_14 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeElse_22 = MaybeStmtElse0_11;
        else
        {
          MR_Word Else1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStmtElse1_14, (MR_Integer) 0))));
          MR_Word ElseBlockStmts0_26;
          MR_Word ElseBlockStmts_27;
          MR_Word Else_28;
          MR_Word Var_46;
          MR_Word Var_89;

          {
            Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (Else1_25));
            MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            ElseBlockStmts0_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ElseBlockStmts0_26, 0) = ((MR_Box) (Else0_24));
            MR_hl_field(MR_mktag(1), ElseBlockStmts0_26, 1) = ((MR_Box) (Var_46));
          }
          Var_89 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), (MR_Word) (&ml_backend__ml_optimize_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_optimize_scalar_common_4[1]), ElseBlockStmts0_26);
          ElseBlockStmts_27 = mercury__list__condense_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_89);
          {
            Else_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Else_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Else_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(0), Else_28, 2) = ((MR_Box) (ElseBlockStmts_27));
            MR_hl_field(MR_mktag(0), Else_28, 3) = ((MR_Box) (Context0_12));
          }
          {
            MaybeElse_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeElse_22, 0) = ((MR_Box) (Else_28));
          }
        }
      }
      {
        Stmt_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Stmt_29, 0) = ((MR_Box) (TestRval_9));
        MR_hl_field(MR_mktag(2), Stmt_29, 1) = ((MR_Box) (Then_21));
        MR_hl_field(MR_mktag(2), Stmt_29, 2) = ((MR_Box) (MaybeElse_22));
        MR_hl_field(MR_mktag(2), Stmt_29, 3) = ((MR_Box) (Context0_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Stmts_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_29));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts2_7));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Atomic1_30;
      MR_Word Lval_31;
      MR_Word Atomic0_32;
      MR_Word CompareOp_33;
      MR_Word CmpRvalA_34;
      MR_Word CmpRvalB_35;
      MR_Word NegCompareOp_37;
      MR_Word Atomic_38;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Stmt_62;
      MR_Word Context0_63;
      MR_Word Var_70;
      MR_Word Var_71;

      succeeded = ((((MR_tag((MR_Word) Stmt1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt1_6, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if (succeeded)
      {
        Atomic1_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt1_6, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Atomic1_30)) == (MR_Integer) 2);
        if (succeeded)
        {
          Lval_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic1_30, (MR_Integer) 0))));
          Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic1_30, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_50)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 0)))) == (MR_Integer) 5)));
          if (succeeded)
          {
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 1))));
            Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_50, (MR_Integer) 2))));
            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 16U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_52)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Var_52, (MR_Integer) 0))));
                succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(Lval_31, Var_70);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Stmt0_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 0)))) == (MR_Integer) 8)));
                  if (succeeded)
                  {
                    Atomic0_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 1))));
                    Context0_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt0_5, (MR_Integer) 2))));
                    succeeded = ((MR_tag((MR_Word) Atomic0_32)) == (MR_Integer) 2);
                    if (succeeded)
                    {
                      Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_32, (MR_Integer) 0))));
                      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Atomic0_32, (MR_Integer) 1))));
                      succeeded = ml_backend__mlds____Unify____mlds_lval_0_0(Lval_31, Var_71);
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 6)));
                        if (succeeded)
                        {
                          CompareOp_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1))));
                          CmpRvalA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 2))));
                          CmpRvalB_35 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 3))));
                          switch (MR_tag((MR_Word) CompareOp_33)) {
                            default:
                              succeeded = MR_FALSE;
                              break;
                            case (MR_Integer) 3:
                              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 0))))) {
                                default:
                                  succeeded = MR_FALSE;
                                  break;
                                case (MR_Integer) 8:
                                  {
                                    MR_Word IntType_36 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 1))) & (MR_Integer) 15);

                                    {
                                      NegCompareOp_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_36));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 9:
                                  {
                                    MR_Word IntType_56 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 1))) & (MR_Integer) 15);

                                    {
                                      NegCompareOp_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_56));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 12:
                                  {
                                    MR_Word IntType_57 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 1))) & (MR_Integer) 15);

                                    {
                                      NegCompareOp_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 0) = ((MR_Box) ((MR_Unsigned) 15U));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_57));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 13:
                                  {
                                    MR_Word IntType_59 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 1))) & (MR_Integer) 15);

                                    {
                                      NegCompareOp_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 0) = ((MR_Box) ((MR_Unsigned) 14U));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_59));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 14:
                                  {
                                    MR_Word IntType_58 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 1))) & (MR_Integer) 15);

                                    {
                                      NegCompareOp_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 0) = ((MR_Box) ((MR_Unsigned) 13U));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_58));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                                case (MR_Integer) 15:
                                  {
                                    MR_Word IntType_60 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), CompareOp_33, (MR_Integer) 1))) & (MR_Integer) 15);

                                    {
                                      NegCompareOp_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 0) = ((MR_Box) ((MR_Unsigned) 12U));
                                      MR_hl_field(MR_mktag(3), NegCompareOp_37, 1) = (MR_Box) ((MR_Unsigned) (IntType_60));
                                    }
                                    succeeded = MR_TRUE;
                                  }
                                  break;
                              }
                              break;
                          }
                          if (succeeded)
                          {
                            {
                              Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                              MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (NegCompareOp_37));
                              MR_hl_field(MR_mktag(3), Var_54, 2) = ((MR_Box) (CmpRvalA_34));
                              MR_hl_field(MR_mktag(3), Var_54, 3) = ((MR_Box) (CmpRvalB_35));
                            }
                            {
                              Atomic_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), Atomic_38, 0) = ((MR_Box) (Lval_31));
                              MR_hl_field(MR_mktag(2), Atomic_38, 1) = ((MR_Box) (Var_54));
                            }
                            {
                              Stmt_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), Stmt_62, 0) = ((MR_Box) ((MR_Unsigned) 8U));
                              MR_hl_field(MR_mktag(3), Stmt_62, 1) = ((MR_Box) (Atomic_38));
                              MR_hl_field(MR_mktag(3), Stmt_62, 2) = ((MR_Box) (Context0_63));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              *Stmts_8 = base;
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Stmt_62));
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Stmts2_7));
                            }
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
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
ml_backend__ml_optimize__statement_affects_lvals_3_p_0(
  MR_Word Lvals_4,
  MR_Word Stmt_5,
  MR_Word * Affects_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Stmt_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubStmts_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Stmt_5, (MR_Integer) 2))));

          ml_backend__ml_optimize__statements_affect_lvals_3_p_0(Lvals_4, SubStmts_9, Affects_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word SubStmt_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmt_5, (MR_Integer) 2))));
          MR_Word next_value_of_Stmt_5 = SubStmt_13;

          // direct tailcall eliminated
          ;
          Stmt_5 = next_value_of_Stmt_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Then_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_5, (MR_Integer) 1))));
          MR_Word MaybeElse_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Stmt_5, (MR_Integer) 2))));
          MR_Word Stmts_20;
          MR_Word Head_92;
          MR_Word Tail_93;
          MR_Word HeadAffects_95;

          if ((MaybeElse_18 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            {
              Stmts_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Stmts_20, 0) = ((MR_Box) (Then_17));
              MR_hl_field(MR_mktag(1), Stmts_20, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
          }
          else
          {
            MR_Word Else_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeElse_18, (MR_Integer) 0))));
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (Else_21));
              MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            {
              Stmts_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Stmts_20, 0) = ((MR_Box) (Then_17));
              MR_hl_field(MR_mktag(1), Stmts_20, 1) = ((MR_Box) (Var_74));
            }
          }
          Head_92 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_20, (MR_Integer) 0))));
          Tail_93 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Stmts_20, (MR_Integer) 1))));
          ml_backend__ml_optimize__statement_affects_lvals_3_p_0(Lvals_4, Head_92, &HeadAffects_95);
          switch (HeadAffects_95) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_optimize__statements_affect_lvals_3_p_0(Lvals_4, Tail_93, Affects_6);
              break;
            case (MR_Integer) 1:
              *Affects_6 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Stmt_5, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Cases_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_5, (MR_Integer) 4))));
              MR_Word Default_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_5, (MR_Integer) 5))));
              MR_Word Affects0_28;

              ml_backend__ml_optimize__cases_affect_lvals_3_p_0(Lvals_4, Cases_25, &Affects0_28);
              switch (Affects0_28) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_tag((MR_Word) Default_26)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *Affects_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word DefaultStmt_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Default_26, (MR_Integer) 0))));
                        MR_Word next_value_of_Stmt_5 = DefaultStmt_29;

                        // direct tailcall eliminated
                        ;
                        Stmt_5 = next_value_of_Stmt_5;
                        continue;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *Affects_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            *Affects_6 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            *Affects_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            *Affects_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 8:
            {
              MR_Word AtomicStmt_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Stmt_5, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) AtomicStmt_51)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *Affects_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *Affects_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Lval_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), AtomicStmt_51, (MR_Integer) 0))));

                    succeeded = mercury__set__contains_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Lvals_4, ((MR_Box) (Lval_57)));
                    if (succeeded)
                      *Affects_6 = (MR_Integer) 1;
                    else
                      *Affects_6 = (MR_Integer) 0;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), AtomicStmt_51, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Lval_80 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_51, (MR_Integer) 1))));

                        succeeded = mercury__set__contains_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Lvals_4, ((MR_Box) (Lval_80)));
                        if (succeeded)
                          *Affects_6 = (MR_Integer) 1;
                        else
                          *Affects_6 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *Affects_6 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Lval_88 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_51, (MR_Integer) 1))));

                        succeeded = mercury__set__contains_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Lvals_4, ((MR_Box) (Lval_88)));
                        if (succeeded)
                          *Affects_6 = (MR_Integer) 1;
                        else
                          *Affects_6 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Lval_84 = ((MR_Word) ((MR_hl_field(MR_mktag(3), AtomicStmt_51, (MR_Integer) 1))));

                        succeeded = mercury__set__contains_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), Lvals_4, ((MR_Box) (Lval_84)));
                        if (succeeded)
                          *Affects_6 = (MR_Integer) 1;
                        else
                          *Affects_6 = (MR_Integer) 0;
                      }
                      break;
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                      *Affects_6 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__cases_affect_lvals_3_p_0(
  MR_Word Lvals_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Head_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Stmt_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Head_6, (MR_Integer) 2))));
      MR_Word HeadAffects_12;

      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(Lvals_1, Stmt_11, &HeadAffects_12);
      switch (HeadAffects_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Tail_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__statements_affect_lvals_3_p_0(
  MR_Word Lvals_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Integer) 0;
    else
    {
      MR_Word Head_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Tail_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word HeadAffects_9;

      ml_backend__ml_optimize__statement_affects_lvals_3_p_0(Lvals_1, Head_6, &HeadAffects_9);
      switch (HeadAffects_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__2_2 = Tail_7;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(
  MR_Word Rval_4,
  MR_Word STATE_VARIABLE_Components_0_22,
  MR_Word * STATE_VARIABLE_Components_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Rval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_0_22;
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_0_22;
        break;
      case (MR_Integer) 2:
        {
          MR_Word Lval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_4, (MR_Integer) 0))));
          MR_Word STATE_VARIABLE_Components_30_30;

          mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), ((MR_Box) (Lval_6)), STATE_VARIABLE_Components_0_22, &STATE_VARIABLE_Components_30_30);
          switch (MR_tag((MR_Word) Lval_6)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Rval_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_6, (MR_Integer) 1))));
                MR_Word next_value_of_Rval_4 = Rval_44;
                MR_Word next_value_of_STATE_VARIABLE_Components_0_22 = STATE_VARIABLE_Components_30_30;

                // direct tailcall eliminated
                ;
                Rval_4 = next_value_of_Rval_4;
                STATE_VARIABLE_Components_0_22 = next_value_of_STATE_VARIABLE_Components_0_22;
                continue;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))));
                MR_Word next_value_of_Rval_4 = Rval_55;
                MR_Word next_value_of_STATE_VARIABLE_Components_0_22 = STATE_VARIABLE_Components_30_30;

                // direct tailcall eliminated
                ;
                Rval_4 = next_value_of_Rval_4;
                STATE_VARIABLE_Components_0_22 = next_value_of_STATE_VARIABLE_Components_0_22;
                continue;
              }
              break;
            case (MR_Integer) 2:
              *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_30_30;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_30_30;
                  break;
                case (MR_Integer) 1:
                  *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_30_30;
                  break;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word SubRval_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRval_8;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_0_22;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRvalA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRvalA_10;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRvalA_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRvalA_37;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word SubRvalA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRvalA_36;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubRvalA_38 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4 = SubRvalA_38;

              // direct tailcall eliminated
              ;
              Rval_4 = next_value_of_Rval_4;
              continue;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word SubRvalB_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 3))));
              MR_Word STATE_VARIABLE_Components_26_26;
              MR_Word SubRvalA_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 2))));
              MR_Word next_value_of_Rval_4;
              MR_Word next_value_of_STATE_VARIABLE_Components_0_22;

              ml_backend__ml_optimize__find_rval_component_lvals_3_p_0(SubRvalA_32, STATE_VARIABLE_Components_0_22, &STATE_VARIABLE_Components_26_26);
              // direct tailcall eliminated
              ;
              next_value_of_Rval_4 = SubRvalB_15;
              next_value_of_STATE_VARIABLE_Components_0_22 = STATE_VARIABLE_Components_26_26;
              Rval_4 = next_value_of_Rval_4;
              STATE_VARIABLE_Components_0_22 = next_value_of_STATE_VARIABLE_Components_0_22;
              continue;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word STATE_VARIABLE_Components_24_24;
              MR_Word Lval_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_4, (MR_Integer) 1))));

              mercury__set__insert_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_lval_0), ((MR_Box) (Lval_33)), STATE_VARIABLE_Components_0_22, &STATE_VARIABLE_Components_24_24);
              switch (MR_tag((MR_Word) Lval_33)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Lval_33, (MR_Integer) 1))));
                    MR_Word next_value_of_Rval_4 = Rval_61;
                    MR_Word next_value_of_STATE_VARIABLE_Components_0_22 = STATE_VARIABLE_Components_24_24;

                    // direct tailcall eliminated
                    ;
                    Rval_4 = next_value_of_Rval_4;
                    STATE_VARIABLE_Components_0_22 = next_value_of_STATE_VARIABLE_Components_0_22;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_72 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Lval_33, (MR_Integer) 0))));
                    MR_Word next_value_of_Rval_4 = Rval_72;
                    MR_Word next_value_of_STATE_VARIABLE_Components_0_22 = STATE_VARIABLE_Components_24_24;

                    // direct tailcall eliminated
                    ;
                    Rval_4 = next_value_of_Rval_4;
                    STATE_VARIABLE_Components_0_22 = next_value_of_STATE_VARIABLE_Components_0_22;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_24_24;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_33, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_24_24;
                      break;
                    case (MR_Integer) 1:
                      *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_24_24;
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 8:
            *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_0_22;
            break;
          case (MR_Integer) 9:
            *STATE_VARIABLE_Components_23 = STATE_VARIABLE_Components_0_22;
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_FuncDefn_8;

    ml_backend__ml_optimize__optimize_in_function_defn_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_FuncDefn_8);
    *wrapper_arg_2 = ((MR_Box) (conv0_FuncDefn_8));
  }
}

void MR_CALL 
ml_backend__ml_optimize__mlds_optimize_3_p_0(
  MR_Word Globals_4,
  MR_Word STATE_VARIABLE_MLDS_0_9,
  MR_Word * STATE_VARIABLE_MLDS_10)
{
  {
    MR_Word ModuleName_6;
    MR_Word FuncDefns0_7;
    MR_Word FuncDefns_8;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0))));
    MR_Word Var_12;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;

    ModuleName_6 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(Var_11);
    FuncDefns0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 5))));
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__ml_optimize_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__ml_optimize__mlds_optimize_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleName_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Globals_4));
    }
    mercury__list__map_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_12, FuncDefns0_7, &FuncDefns_8);
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 0))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 1))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 2))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 3))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 4))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 6))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 7))));
    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 8))));
    Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_9, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MLDS_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (FuncDefns_8));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_40));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_41));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____opt_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_optimize____Unify____opt_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____opt_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_optimize____Compare____opt_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_optimize____Unify____var_elim_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_optimize____Unify____var_elim_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_optimize____Compare____var_elim_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_optimize____Compare____var_elim_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__ml_backend__ml_optimize__init(void)
{
}

void mercury__ml_backend__ml_optimize__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_opt_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_optimize__ml_backend__ml_optimize__type_ctor_info_var_elim_info_0);
}

void mercury__ml_backend__ml_optimize__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_optimize__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.ml_optimize.
